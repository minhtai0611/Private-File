#include "data_account.h"
user* data_account::login(string _account, string _password) {
	for (int i = 0; i < data.size(); i++) {
		if (_account == data[i]->getaccount_user() && _password == data[i]->getpassword_user()) {
			return data[i];
		}
	}
	return NULL;
}

user* data_account::login() {
	string _account, _password;
	cout << "Nhap ten tai khoan:";
	cin >> _account;
	cout << endl;
	cout << "Nhap mat khau: ";
	cin >> _password;
	return login(_account, _password);
}
bool data_account::check_account(string _account) {
	for (int i = 0; i < data.size(); i++)
	{
		if (_account == data[i]->getaccount_user()) return false;
	}
	return true;
}
void data_account::create_user() {
	string _account, _password, confirm_password;
	bool check_user_account;
	cout << "Dang ky tai khoan nguoi dung" << endl;
	do {
		cout << "Nhap tai khoan: ";
		cin >> _account;
		check_user_account = check_account(_account);
		if (check_user_account == false) cout << "Tai khoan da co nguoi su dung" << endl;
	} while (check_user_account == false);
}