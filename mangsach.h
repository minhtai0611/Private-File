#pragma once
#include"sach.h"
class Tokenizer {
public:
	// Hàm lấy ra các đơn thức
	static vector<string> Parse(string s, string seperator) {
		vector<string> tokens;

		int startpos = 0; // vị trí bắt đầu tìm
		size_t foundpos = s.find(seperator, startpos);

		while (foundpos != string::npos) { // vẫn còn tìm thấy
			int count = foundpos - startpos;
			string token = s.substr(startpos, count);
			tokens.push_back(token);

			//cập nhật vị trí bắt đầu tìm lại
			startpos = foundpos + seperator.length();

			//tiếp tục tìm
			foundpos = s.find(seperator, startpos);
		}

		//phần sót lại chính là phần tử cuối
		int count = s.length() - startpos;
		string token = s.substr(startpos, count);
		tokens.push_back(token);
		return tokens;
	}
};
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
	void outauthor(string _author);
	void outpublisher(string _publisher);
	void updateprice();
	vector<sach*> getarrbook();
	vector<sach> find_book(string _name);
	void update_book();
	void input(string name);
	void output(string name);
};

