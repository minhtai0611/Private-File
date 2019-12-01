#pragma once
#include"user.h"
class publisher : public user
{
public:
	publisher() { setdefault_account_user("publisher"); }
	void find();
	void add(sach& book1);
	void dest();
	void out(int n);
};