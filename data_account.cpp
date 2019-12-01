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
		cout << endl;
		check_user_account = check_account(_account);
		if (check_user_account == false) cout << "Tai khoan da co nguoi su dung" << endl;
	} while (check_user_account == false);
	do {
		cout << "Nhap mat khau : ";
		cin >> _password;
		cout << endl;
		cout << "Xac nhan mat khau: ";
		cin >> confirm_password;
		cout << endl;
		if (_password != confirm_password) cout << "Khong khop" << endl;
	} while (_password != confirm_password);
	user* temp = new user;
	temp->setaccount_user(_account);
	temp->setpassword_user(_password);
	cout << "Dang ki thanh cong!" << endl;
	data.push_back(temp);
}
void data_account::create_account() {
	int _creation = 0;
	bool check;
	string _account, _password, confirm_password;
	cout << "admin account" << endl;
	cout << "1. Tao tai khoan nguoi dung" << endl;
	cout << "2. Tao tai khoan NXB" << endl;
	cout << "3. Tao tai khoan Tac gia" << endl;
	do {
		cout << "Nhap chuc nang: " << endl;
		cin >> _creation;
		if (_creation < 1 || _creation > 3) cout << "Khong hop le!" << endl;
	} while (_creation < 1 || _creation > 3);
	if (_creation == 1) create_user();
	else {
		if (_creation == 2) {
			cout << "**Tao tai khoan NXB**" << endl;
			do {
				cout << "Nhap ten NXB: ";
				cin >> _account;
				cout << endl;
				check = check_account(_account);
				if (check == false) cout << "NXB da ton tai!" << endl;
			} while (check == false);
			do {
				cout << "Nhap mat khau : ";
				cin >> _password;
				cout << endl;
				cout << "Xac nhan mat khau: ";
				cin >> confirm_password;
				cout << endl;
				if (_password != confirm_password) cout << "Khong khop!" << endl;
			} while (_password != confirm_password);
			user* temp = new publisher;
			temp->setaccount_user(_account);
			temp->setpassword_user(_password);
			data.push_back(temp);
			cout << "Dang ki thanh cong!" << endl;
		}
		else {
			cout << "**Tao tai khoan Tac gia**" << endl;
			do {
				cout << "Nhap ten Tac gia: ";
				cin >> _account;
				cout << endl;
				check = check_account(_account);
				if (check == false) cout << "Ten Tac gia da ton tai!" << endl;
			} while (check == false);
			do {
				cout << "Nhap mat khau : ";
				cin >> _password;
				cout << "Xac nhan mat khau: ";
				cin >> confirm_password;
				if (_password != confirm_password) cout << "Khong khop!" << endl;
			} while (_password != confirm_password);
			user* temp = new author;
			temp->setaccount_user(_account);
			temp->setpassword_user(_password);
			data.push_back(temp);
			cout << "Dang ki thanh cong!" << endl;
		}
	}
}
void data_account::dest_account() {
	string _account;
	cout << "Nhap ten tai khoan muon xoa: " << endl;
	cin >> _account;
	for (int i = 0; i < data.size(); i++)
		if (_account == data[i]->getaccount_user()) {
			delete data[i];
			data.erase(data.begin() + i);
			cout << "Xoa tai khoan thanh cong" << endl;
			return;
		};
	cout << "Khong co tai khoan nay" << endl;
}