#pragma once
#include"customer.h"
#include"manghoadon.h"
class user:public customer
{
private:
	string default_account_user = "user";
	string gender_user;
	string name_user;
	int age_user;
	string account_user;
	string password_user;
	manghoadon arrbill;
	mangsach arrbook;
public:
	string getaccount_user() { return account_user; }
	string getpassword_user() { return password_user; }
	string getdefault_account_user() { return default_account_user; }
	void setaccount_user(string& _account_user) { account_user = _account_user; }
	void setpassword_user(string& _password_user) { password_user = _password_user; }
	void setdefault_account_user(string _default_account_user) { default_account_user = _default_account_user; }
	virtual void find();
	void findbill();
	virtual void add(sach& book1);
	void add(hoadon& bill1);
	virtual void dest();
	void destbill();
	virtual void out(int n);
	void outbill(int n);
};

