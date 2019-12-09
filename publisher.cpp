#include "publisher.h"
void publisher::find() {
	mangsach arrbook;
	arrbook.find();
}
void publisher::add(sach& book1) {
	mangsach arrbook;
	arrbook.add(book1);
}
void publisher::dest() {
	mangsach arrbook;
	string str;
	vector<sach*>s;
	int position;
	cout << "Nhap ten sach muon xoa: " << endl;
	cin >> str;
	s = arrbook.getarrbook();
	for (int i = 0; i < s.size(); i++) {
		if (s[i]->getpublisher() != getaccount_user() || s[i]->getname() != str)
			s.erase(s.begin() + i);
	}
	for (int i = 0; i < s.size(); i++)
	{
		cout << "( " << i + 1 << " )";
		cout << s[i];
	}
	cout << "Nhap so thu tu sach muon xoa: ";
	cin >> position;
	s.front() = s[abs(position - 1)];
	s.front()->hidepublisher();
}
void publisher::out(int n) {
	mangsach arrbook;
	vector<sach*> s;
	s = arrbook.getarrbook();
	s.resize(n);
	for (int i = 0; i < s.size(); i++) {
		if (s[i]->getpublisher() != getaccount_user() || s[i]->checkpublisher() == false)
			s.erase(s.begin() + i);
	}
	for (int i = 0; i < s.size(); i++)
	{
		cout << "( " << i + 1 << " )";
		cout << s[i] << endl;
	};
}