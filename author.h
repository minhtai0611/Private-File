#pragma once
#include"user.h"
class author :public user
{
public:
	void find();
	/*sach default_author_book(sach& book1);*/
	void add(sach& book1);
	void dest();
	void out(int n);
};