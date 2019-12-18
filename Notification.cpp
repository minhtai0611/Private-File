#include "Notification.h"
void Notification::Out() {
	if (!mess.empty()) {
		cout << "THONG BAO" << endl;
		cout << mess << endl;
	}
}
void Notification::Add() {
	cout << "Nhap noi dung :";
	rewind(stdin);
	getline(cin, mess);
	cout << "Thanh cong!" << endl;
}
void Notification::Delete() {
	mess.clear();
}
