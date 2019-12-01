#include "mangsach.h"
void mangsach::in(int& n) {
	int i;
	s.resize(n);
	for (i = 0; i < s.size(); i++) {
		cout << "sach " << i + 1 << endl;
		cin >> s[i];
	}
}
void mangsach::out(int n) {
	cout << "Xuat ra mang cac phan tu sach" << endl;
	for (int i = 0; i < s.size(); i++) {
		cout << "sach " << i + 1 << endl;
		cout << s[i];
	}
}
void mangsach::add(sach& s1) {
	int position;
	for (int i = 0; i < s.size(); i++) {
		cout << "Nhap vi tri muon them sach" << endl;
		cin >> position;
		s.insert(s.begin() + position - 1, s1);
		break;
	}
}
void mangsach::find() {
	string str;
	cout << "Nhap ten sach trong mang: " << endl;
	cin >> str;
	for (int i = 0; i < s.size(); i++) {
		if (str == s.at(i).getname()) {
			cout << s[i];
		}
	}
}

void mangsach::dest() {
	string str;
	cout << "Nhap ten sach trong mang: " << endl;
	cin >> str;
	for (int i = 0; i < s.size(); i++) {
		if (str == s.at(i).getname()) {
			s.erase(s.begin() + i);
		}
	}
}
void mangsach::updateprice() {
	int newprice;
	string str;
	cout << "Nhap ten sach trong mang: " << endl;
	cin >> str;
	for (int i = 0; i < s.size(); i++) {
		if (str == s.at(i).getname()) {
			cout << "Nhap gia tien muon cap nhat" << endl;
			cin >> newprice;
			s[i].setprice(newprice);
		}
		else {
			cout << "Cap nhat gia tien that bai" << endl;
		}
	}
}
vector<sach> mangsach::find_book(string _name) {
	vector<sach> _arrbook;
	int n = s.size();
	for (int i = 0; i < n; i++) {
		if (_arrbook[i].getname() == _name) _arrbook.push_back(s[i]);
	}
	return _arrbook;
}
vector<sach*> mangsach::getarrbook() {
	vector<sach*> arrbook;
	int n = s.size();
	for (int i = 0; i < n; i++) arrbook.push_back(&s[i]);
	return arrbook;
}
void mangsach::update_book() {
	string name_book, type_book, author_book, publisher_book;
	int position_book, price_book, id_book;
	int n = s.size();
	cout << "Nhap sach can cap nhat thong tin: ";
	cin >> name_book;
	for (int i = 0; i < s.size(); i++) {
		if (name_book == s.at(i).getname()) {
			cout << "Nhap ten sach can cap nhat: " << endl;
			cin >> name_book;
			s[i].setname(name_book);
			cout << "Nhap ma sach can cap nhat: " << endl;
			cin >> id_book;
			s[i].setid(id_book);
			cout << "Nhap the loai can cap nhat: " << endl;
			cin >> type_book;
			s[i].settype(type_book);
			cout << "Nhap tac gia can cap nhat: " << endl;
			cin >> author_book;
			s[i].setauthor(author_book);
			cout << "Nhap NXB can cap nhat: " << endl;
			cin >> publisher_book;
			s[i].setpublisher(publisher_book);
			cout << "Nhap gia tien can cap nhat: " << endl;
			cin >> price_book;
			s[i].setprice(price_book);
		}
	}

}