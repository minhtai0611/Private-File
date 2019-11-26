#include "author.h"
void author::find() {

}
sach author::default_author_book(sach& book1) {
	string name_book, type_book, default_author_book;
	int price_book;
	int id_book=18120544;
	string publisher_book = "NULL";
	cout << "Nhap ten sach: ";
	cin >> name_book;
	cout << endl;
	book1.setname(name_book);
	book1.setid(id_book);
	cout << "Nhap the loai: ";
	cin >> type_book;
	cout << endl;
	cout << "Nhap gia tien: ";
	cin >> price_book;
	cout << endl;
	book1.setprice(price_book);
	book1.setpublisher(publisher_book);
	default_author_book = getaccount_user();
	book1.setauthor(default_author_book);
	return book1;
}
void author::add(sach& book1) {
	mangsach arrbook;
	cout << book1;
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
