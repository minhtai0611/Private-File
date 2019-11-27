#include "author.h"
void author::find() {
	mangsach arrbook;
	arrbook.find();
}
//sach author::default_author_book(sach& book1) {
//	string name_book, type_book, default_author_book, publisher_book;
//	int price_book, id_book;
//	//Set up a default author
//	cout << "Nhap ten sach: ";
//	cin >> name_book;
//	book1.setname(name_book);
//	cout << endl;
//	////////////////////////
//	cout << "Nhap ma sach: ";
//	book1.setid(id_book);
//	cin >> id_book;
//	////////////////////////
//	cout << "Nhap the loai: ";
//	cin >> type_book;
//	book1.settype(type_book);
//	cout << endl;
//	////////////////////////
//	cout << "Nhap gia tien: ";
//	cin >> price_book;
//	book1.setprice(price_book);
//	cout << endl;
//	///////////////////////
//	cout << "Nhap tac gia: ";
//	default_author_book = getaccount_user();
//	book1.setauthor(default_author_book);
//	cout << endl;
//	///////////////////////
//	cout << "Nhap nha xuat ban: ";
//	cin >> publisher_book;
//	book1.setpublisher(publisher_book);
//	
//	return book1;
//}
void author::add(sach& book1) {
	mangsach arrbook;
	arrbook.add(book1);
}
void author::dest() {
	mangsach arrbook;
	string str;
	vector<sach*>s;
	int position;
	cout << "Nhap ten sach muon xoa: " << endl;
	cin >> str;
	s = arrbook.getarrbook();
	for (int i = 0; i < s.size; i++) {
		if (s[i]->getauthor != getaccount_user() || s[i]->getname() != str)
			s.erase(s.begin() + i);
	}
	for (int i = 0; i < s.size(); i++)
	{
		cout << "( " << i + 1 << " )";
		cout << s[i];
	}
	cout << "Nhap so thu tu sach muon xoa: ";
	cin >> position;
	s.front() = s[abs(position - 1)];
	s.front()->hideauthor();
}
void author::out(int n) {
	mangsach arrbook;
	vector<sach*> s;
	s = arrbook.getarrbook();
	n = s.size();
	for (int i = 0; i < s.size(); i++) {
		if (s[i]->getauthor() != getaccount_user() || s[i]->checkauthor() == false)
			s.erase(s.begin() + i);
	}
	for (int i = 0; i < s.size(); i++)
	{
		cout << "( " << i + 1 << " )";
		cout << s[i] << endl;
	};
}