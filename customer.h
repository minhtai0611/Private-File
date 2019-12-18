#pragma once
#include"mangsach.h"
class customer
{
protected:
	string gender_customer;
	string name_customer;
	int age_customer;
public:
	void out(vector<sach> s);
	vector<sach> find(mangsach _arrbook, string name);
};

