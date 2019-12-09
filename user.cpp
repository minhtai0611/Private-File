#include "user.h"
void user::find() {
	arrbook.find();
}
void user::findbill() {
	arrbill.find();
}
void user::add(vector<sach> s) {
	int n = s.size();
	hoadon bill;
	bill.inbill(s);
	arrbill.add(bill);
}
void user::add(hoadon& bill1) {
	arrbill.add(bill1);
}
void add(sach _book) {
	mangsach _arrbook;
	_arrbook.add(_book);
}
void user::add(mangsach _arrbook) {
	sach _book;
	_arrbook.add(_book);
}
void user::dest() {
	arrbook.dest();
}
void user::destbill() {
	arrbill.dest();
}
void user::out(int n) {
	arrbook.out(n);
}
void user::outbill(int n) {
	arrbill.totalout(n);
}