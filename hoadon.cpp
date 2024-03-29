#include "hoadon.h"
void hoadon::inbill(vector<sach>s) {
	int _number, _amount, _total;
	for (int i = 0; i < s.size(); i++) {
		cout<<"sach: "<<i+1<<endl;
		cout << s[i];
	}
	cout << "Nhap vao so thu tu cua sach muon mua" << endl;
	cin >> _number;
	cout << "Nhap so luong" << endl;
	cin >> _amount;
	amount = _amount;
	book = s[_number - 1];
	_total = book.getprice() * _amount;
	total = _total;
}
void hoadon::outbill(vector<sach> s) {
	cout << "ten sach: " << book.getname() << "|" << 
		"ma sach: " << book.getid() << "|" << 
		"don gia: " << book.getprice() << "|" <<
		"so luong: " << amount << "|" << 
		"Thanh toan: " << amount * book.getprice() << endl;
	
}
istream & operator>>(istream& in, hoadon& bill) {
	int number;
	cout << "Nhap sach " << endl;
	in >> bill.book;
	cout << "Nhap so luong: ";
	in >> bill.amount;
	cout << endl;
	return in;
}
ostream& operator<<(ostream& out, hoadon& bill) {
	out << bill.book <<
		"So luong: " << bill.amount << "(things)" << endl <<
		"Thanh toan: " << bill.amount * bill.book.getprice() << "(USD)" << endl;
	return out;
}
const bool& hoadon::operator==(const hoadon& bill)
{
	return(book == bill.book && amount == bill.amount && total == bill.total);
}
const hoadon& hoadon::operator=(const hoadon& bill) {
	book = bill.book;
	amount = bill.amount;
	total = bill.total;
	return *this;
}
