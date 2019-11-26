#include "user.h"
void user::find() {
	arrbook.find();
}
void user::findbill() {
	arrbill.find();
}
void user::add(sach& book1) {
	arrbook.add(book1);
}
void user::add(hoadon& bill1) {
	arrbill.add(bill1);
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

