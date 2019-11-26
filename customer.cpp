#include "customer.h"
void customer::out() {
	vector<sach>s;
	for (int i = 0; i < s.size(); i++) {
		cout << "sach " << i + 1 << endl;
		cout << s[i];
	}
}
void customer::find() {
	string str;
	cout << "Nhap ten sach trong mang: " << endl;
	cin >> str;
	vector<sach>s;
	for (int i = 0; i < s.size(); i++) {
		if (str == s.at(i).getname()) {
			cout << s[i];
		}
	}
}