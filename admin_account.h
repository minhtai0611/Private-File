#pragma once
#include"admin.h"
class admin_account {
private:
	vector<admin*> admin_data;
public:
	admin* login();
	void create_admin(string _account, string _password);
};


