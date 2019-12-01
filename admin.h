#pragma once
#include"iostream"
#include"mangsach.h"
#include"user.h"
#include"data_account.h"

class admin
{
private:
	string admin_account;
	string admin_password;
public:
	void setadmin_account(string& _admin_account);
	void setadmin_password(string& _admin_password);
	string getadmin_account();
	string getadmin_password();
	void add(mangsach _arrbook);
	void out(mangsach _arrbook);
	void dest(mangsach& _arrbook);
	void create_account(data_account& _data);
	void delete_account(data_account& _data);
	void update_book_in_depot(mangsach&  _arrbook);
	void change_password();
};

