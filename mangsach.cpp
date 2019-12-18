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
	s.resize(n);
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
		cout << "Nhap vao sach can them vao" << endl;
		cin >> s1;
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
void mangsach::outauthor(string _author) {
	int count = 1;
	int n = s.size();
	if (n == 0)
	{
		cout << "Trong!" << endl;
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (s[i].getauthor() == _author) {
			cout << "Sach thu " << count << endl;
			cout << s[i];
			count++;
		}
	}
}
void mangsach::outpublisher(string _publisher) {
	int count = 1;
	int n = s.size();
	if (n == 0)
	{
		cout << "Trong!" << endl;
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (s[i].getpublisher() == _publisher) {
			cout << "Sach thu " << count << endl;
			cout << s[i];
			count++;
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
		if (s[i].getname() == _name) cout << s[i];
	}
	return s;
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
void mangsach::input(string name) {
	string s;
	sach sach;
	fstream f;
	f.open(name);
	vector<string> tokens;
	while (!f.eof()) {
		getline(f, s);
		tokens = Tokenizer::Parse(s, " | ");
		if (tokens.size() != 7) continue;
		sach.setname(tokens[0]);
		int a = stoi(tokens[1]);
		sach.setid(a);
		sach.settype(tokens[2]);
		int b = stoi(tokens[3]);
		sach.setprice(b);
		sach.setauthor(tokens[4]);
		sach.setpublisher(tokens[5]);
		double c = stoi(tokens[6]);
		sach.setsaleoff(c);
		s.clear();
	}
	f.close();
}
void mangsach::output(string name) {
	fstream f;
	f.open(name, ios::out);
	int n = s.size();
	for (int i = 0; i < n; i++) {
		f << s[i].getname();
		f << " | ";
		f << s[i].getid();
		f << " | ";
		f << s[i].gettype();
		f << " | ";
		f << s[i].getprice();
		f << " | ";
		f << s[i].getauthor();
		f << " | ";
		f << s[i].getpublisher();
		f << " | ";
		f << s[i].getsaleoff();
		f << endl;
	}
}