#include "admin.h"
void admin::setadmin_account(string& _admin_account) {
	admin_account = _admin_account;
}
void admin::setadmin_password(string& _admin_password) {
	admin_password = _admin_password;
}
string admin::getadmin_account() {
	return admin_account;
}
string admin::getadmin_password() {
	return admin_password;
}
void admin::add(mangsach _arrbook) {
	sach _book;
	_arrbook.add(_book);
}
void admin::out(mangsach _arrbook) {
	int n;
	cout << "So luong sach: ";
	cin >> n;
	cout << endl;
	_arrbook.out(n);
}
void admin::dest(mangsach& _arrbook) {
	_arrbook.dest();
}
void admin::create_account(data_account& _data) {
	_data.create_account();
}
void admin::delete_account(data_account& _data) {
	_data.dest_account();
}
void admin::update_book_in_depot(mangsach& _arrbook) {
	_arrbook.update_book();
}
void admin::change_password() {
	string _password, confirm_password;
	do {
		cout << "Nhap mat khau moi: ";
		cin >> _password;
		cout << endl;
		cout << "Xac nhan mat khau: ";
		cin >> confirm_password;
		cout << endl;
		if (_password != confirm_password) cout << "Khong khop" << endl;
	} while (_password != confirm_password);
	setadmin_account(_password);
	cout << "Doi mat khau thanh cong" << endl;
}
