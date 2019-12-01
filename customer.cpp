#include "customer.h"
void customer::out(vector<sach> s) {
	for (int i = 0; i < s.size(); i++) {
		cout << "sach " << i + 1 << endl;
		cout << s[i];
	}
}
vector<sach> customer::find(mangsach _arrbook, string name) {
	return _arrbook.find_book(name);
}