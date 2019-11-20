#include"sach.h"
#include"mangsach.h"
#include"hoadon.h"
#include"manghoadon.h"
void main() {
	/*mangsach arr;
	int n;
	cin >> n;
	arr.in(n);*/
	/*arr.out(n);
	arr.find();
	arr.dest();
	arr.out(n);
	arr.updateprice();
	arr.out(n);*/
	/*sach s1;
	do {
		cin >> s1;
		if (s1.getname() == "NULL") break;
		arr.add(s1);
	} while (s1.getname() != "NULL");
	arr.out(n);*/
	/*hoadon bill;
	cin >> bill;
	cout << bill;*/
	manghoadon arrbill;
	int n;
	cout << "So luong hoa don: ";
	cin >> n;
	arrbill.in(n);
	/*hoadon bill1;
	cout << "Hoa don can them vao danh sach " << endl;
	cin >> bill1;
	arrbill.add(bill1);*/
	//arrbill.totalin(n);
	//arrbill.totalout(n);
	//arrbill.find();
	arrbill.dest();
	arrbill.totalout(n);
}