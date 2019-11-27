#pragma once
#include"user.h"
#include"author.h"
#include"publisher.h"
class data_account
{
private:
	vector<user*>data;
public:
	user* login(string _account, string _password);
	void create_user();
	void create_account();
	user* login();
	bool check_account(string _account);
	void dest_account();
};

