#include "sach.h"
istream& operator>>(istream& in, sach& s) {
	cout << "Nhap ten sach: ";
	in >> s.name;
	cout << endl;
	cout << "Nhap ma sach: ";
	in >> s.id;
	cout << endl;
	cout << "Nhap the loai: ";
	in >> s.type;
	cout << endl;
	cout << "Nhap tac gia: ";
	in >> s.author;
	cout << endl;
	cout << "Nhap NXB: ";
	in >> s.publisher;
	cout << endl;
	cout << "Nhap gia tien: ";
	in >> s.price;
	cout << endl;
	return in;
}
ostream& operator<<(ostream& out, sach& s) {
	out << "Ten sach: " << s.name << endl <<
		"Ma sach: " << s.id << endl <<
		"The loai " << s.type << endl <<
		"Tac gia: " << s.author << endl <<
		"NXB: " << s.publisher << endl <<
		"Gia tien: " << s.price << "(USD/things)" << endl;
	return out;
}
const bool& sach::operator==(const sach& s) {
	return (name == s.name && id == s.id && type == s.type && author == s.author && publisher == s.publisher && price == s.price);
}
const sach& sach::operator=(const sach& s) {
	name = s.name;
	id = s.id;
	type = s.type;
	author = s.author;
	publisher = s.publisher;
	price = s.price;
	return *this;
}
void sach::showauthor() {
	bool_author = true;
}
void sach::showpublisher() {
	bool_publisher = true;
}
void sach::hideauthor() {
	bool_author = false;
}
void sach::hidepublisher() {
	bool_publisher = false;
}
bool sach::checkauthor() {
	return bool_author;
}
bool sach::checkpublisher() {
	return bool_publisher;
}