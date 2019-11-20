#pragma once
#include"hoadon.h"
class manghoadon : public mangsach
{
private:
	vector<hoadon>bill;
	int totalbill=0;
public:
	void in(int& n);
	void out(int n);
	void totalin(int& n);
	void totalout(int n);
	void add(hoadon& bill1);
	void find();
	void dest();
};
