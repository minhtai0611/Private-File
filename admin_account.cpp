#include "admin_account.h"
admin* admin_account::login() {
	string _account, _password;
	cout << "Tai khoan admin mac dinh";
	cout << "Tai khoan admin: defaultadmin" << endl;
	cout << "Mat khau: defaultpassword" << endl;
	cout << "Nhap tai khoan admin: ";
	cin >> _account;
	cout << endl;
	cout << "Nhap mat khau admin";
	cin >> _password;
	cout << endl;
	for (int i = 0; i < admin_data.size(); i++) {
		if (admin_data[i]->getadmin_account() == _account && admin_data[i]->getadmin_password() == _password)
			return admin_data[i];
	}
	return NULL;
}
void admin_account::create_admin(string _account, string _password) {
	admin* new_admin = new admin;
	new_admin->setadmin_account(_account);
	new_admin->setadmin_password(_password);
	admin_data.push_back(new_admin);
}
