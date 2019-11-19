#pragma once
#include"sach.h"
#include"mangsach.h"
class hoadon
{
private:
	sach book;
	int amount;
	int total = amount * book.getprice();
public:
	sach getbook() { return book; }
	int gettotal() { return amount*book.getprice(); }
	int getamount() { return amount; }
	void settotal(int& _total) { total = _total; }
	void setamount(int& _amount) { amount = _amount; }
	/*void inbill(int &n);
	void outbill(int n);*/
	const bool& operator==(const hoadon& bill);
	const hoadon& operator=(const hoadon& bill);
	friend istream& operator>>(istream& in, hoadon& bill);
	friend ostream& operator<<(ostream& out, hoadon& bill);
};
