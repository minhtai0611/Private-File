#pragma once
#include<iostream>
#include<vector>
using namespace std;
class sach
{
private:
	string name;
	string type;
	string author;
	string publisher;
	int id;
	int price;
	bool bool_author;
	bool bool_publisher;
public:
	string getname() { return name; }
	string gettype() { return type; }
	string getauthor() { return author; }
	string getpublisher() { return publisher; }
	int getid() { return id; }
	int getprice() { return price; }
	void setname(string& _name) { name = _name; }
	void settype(string& _type) { type = _type; }
	void setauthor(string& _author) { author = _author; }
	void setpublisher(string& _publisher) { publisher = _publisher; }
	void setid(int& _id) { id = _id; }
	void setprice(int& _price) { price = _price; }
	friend istream& operator>>(istream& in, sach& s);
	friend ostream& operator<<(ostream& out, sach& s);
	const bool& operator==(const sach& s);
	const sach& operator=(const sach& s);
	void showauthor();
	void showpublisher();
	void hideauthor();
	void hidepublisher();
	bool checkauthor();
	bool checkpublisher();
};

