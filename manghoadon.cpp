#include "manghoadon.h"
void manghoadon::in(int& n) {
	bill.resize(n);
	for (int i = 0; i < bill.size(); i++) {
		cout << "hoa don " << i + 1 << endl;
		cin >> bill[i];
	}
}
void manghoadon::out(int n) {
	cout << "Xuat ra mang cac phan tu hoa don" << endl;
	for (int i = 0; i < bill.size(); i++) {
		cout << "hoa don " << i + 1 << endl;
		cout << bill[i];
	}
}
void manghoadon::totalin(int& n) {
	int _totalbill = 0;
	bill.resize(n);
	for (int i = 0; i < bill.size(); i++) {
		_totalbill += bill[i].gettotal();
	}
	totalbill = _totalbill;
}
void manghoadon::totalout(int n) {
	for (int i = 0; i < bill.size(); i++)
	{
		cout << "So thu tu: " << i + 1 << endl;
		cout << bill[i];
	}
	cout << "Tong tien: " << totalbill << "(USD)" << endl;
}
void manghoadon::add(hoadon& bill1) {
	int position, _totalbill = 0;
	int i;
	cout << "Nhap vi tri muon them hoa don" << endl;
	cin >> position;
	bill.insert(bill.begin() + position - 1, bill1);
	for (i = 0; i < bill.size(); i++) {
		if (bill[i].getbook() == bill1.getbook()) {
			int add_amount = bill[i].getamount() + bill1.getamount();
			bill[i].setamount(add_amount);
			int add_total = bill[i].gettotal() + bill1.gettotal();
			bill[i].settotal(add_total);
			_totalbill += bill[i].gettotal();
		}
		else _totalbill += bill[i].gettotal();
	}
	totalbill = _totalbill;
	cout << "Thanh toan: "<<totalbill << endl;
}
void manghoadon::find() {
	string str;
	cout << "Nhap vao ten sach muon tim trong hoa don" << endl;
	cin >> str;
	for (int i = 0; i < bill.size(); i++) {
		if (str == bill.at(i).getbook().getname()) cout << bill[i];
	}
}
void manghoadon::dest() {
	int _totalbill = totalbill, _remove;

	string str;
	cout << "Nhap vao ten sach muon loai bo khoi hoa don " << endl;
	cin >> str;
	cout << "Nhap vao so luong muon loai bo khoi hoa don " << endl;
	cin >> _remove;
	for (int i = 0; i < bill.size(); i++) {
		if (str == bill.at(i).getbook().getname()) {
			if (_remove < bill[i].getamount()) {
				int _remain = bill[i].getamount() - _remove;
				bill[i].setamount(_remain);
				int _remaintotal = _remain * bill[i].getbook().getprice();
				bill[i].settotal(_remaintotal);
			}
			else {
				bill.erase(bill.begin() + i);
			}
		}
		_totalbill += bill[i].gettotal();
	}
	totalbill = _totalbill;
	cout << "Thanh toan: " << totalbill << endl;
}