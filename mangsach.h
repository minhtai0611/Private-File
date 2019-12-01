#pragma once
#include"sach.h"
class mangsach
{
private:
	vector<sach>s;
public:
	virtual void in(int& n);
	virtual void out(int n);
	virtual void add(sach& s1);
	virtual void find();
	virtual void dest();
	void updateprice();
	vector<sach*> getarrbook();
	vector<sach> find_book(string _name);
	void update_book();
};