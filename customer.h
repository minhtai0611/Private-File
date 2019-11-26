#pragma once
#include"mangsach.h"
class customer: public mangsach
{
protected:
	string gender_customer;
	string name_customer;
	int age_customer;
public:
	void out();
	void find();
};

