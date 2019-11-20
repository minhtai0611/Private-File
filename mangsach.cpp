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
	}
}