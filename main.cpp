#include"mangsach.h"
#include"manghoadon.h"
#include"user.h"
#include"data_account.h"
#include"admin_account.h"
void main()
{
	admin_account admin_data;
	admin* new_admin;
	customer new_customer;
	admin_data.create_admin("defaultadmin", "defaultpassword");
	int m, n, kt;
	string name, _account, _password;
	sach new_book;
	vector<sach> book;
	bool H_exit;
	mangsach s;
	int number_array;
	cout << "Nhap so luong sach: " << endl;
	cin >> number_array;
	s.in(number_array);
	hoadon bill;
	manghoadon sbill;
	customer khach;
	data_account new_data_account;
	user* new_user = NULL;
	do {
		H_exit = false;
		if (new_user == NULL) {
			system("cls");
			s.out(number_array);
			cout << "Xem danh sach sach: Nhap 1" << endl;
			cout << "Tim sach: Nhap 2" << endl;
			cout << "Dang nhap: Nhap 3" << endl;
			cout << "Dang ki: Nhap 4" << endl;
			cout << "Admin: Nhap 5" << endl;
			cout << "Thoat: Nhap 0" << endl;
			do
			{
				cout << "Nhap chuc nang: " << endl;
				cin >> m;
				switch (m)
				{
				case 1:
					s.out(number_array);
					break;
				case 2:
					cout << "Nhap ten sach can tim: ";
					cin >> name;
					cout << endl;
					book.resize(number_array);
					book = new_customer.find(s, name);
					//new_customer.out(book);
					if (book.size() > 0) {
						cout << "Ban co muon mua sach khong?" << endl;
						cout << "1. Co" << endl;
						cout << "2. Khong" << endl;
						do {
							cout << "Nhap chuc nang: ";
							cin >> kt;
						} while (kt < 1 && kt>2);
						if (kt == 1)
						{
							cout << "Ban can phai dang nhap!" << endl;
							new_user = new_data_account.login();
							if (new_user == NULL) cout << "Ten tai khoan hoac mat khau khau khong chinh xac!" << endl;
							else {
								if (new_user->getdefault_account_user() == "user")
								{
									new_user->add(s);
									cout << "Xin chao " << new_user->getaccount_user() << " !" << endl;
								}
								if (new_user->getdefault_account_user() == "publisher") cout << "Xin chao NXB " << new_user->getaccount_user() << " !" << endl;
								if (new_user->getdefault_account_user() == "author") cout << "Xin chao Tac gia " << new_user->getaccount_user() << " !" << endl;
							}
						}
					}
					if (new_user != NULL) m = 0;
					break;
				case 3:
					new_user = new_data_account.login();
					if (new_user == NULL) cout << "Ten tai khoan hoac mat khau khau khong chinh xac!";
					else {
						system("cls");
						if (new_user->getdefault_account_user() == "user") cout << "Xin chao " << new_user->getaccount_user ()<< " !" << endl;
						if (new_user->getdefault_account_user() == "publisher") cout << "Xin chao NXB " << new_user->getdefault_account_user() << " !" << endl;
						if (new_user->getdefault_account_user() == "author") cout << "Xin chao TG " << new_user->getdefault_account_user() << " !" << endl;
					}
					if (new_user != NULL) m = 0;
					break;
				case 4:
					new_data_account.create_user();
					break;
				case 5:
					new_admin= admin_data.login();
					if (new_admin == NULL) cout << "Khong ton tai Admin nay!" << endl;
					else {
						system("cls");
						cout << "Xin chao admin!" << endl;
						cout << "1. Them sach" << endl;
						cout << "2. Cap nhat thong tin sach" << endl;
						cout << "3. Xuat DS sach" << endl;
						cout << "4. Xoa sach" << endl;
						cout << "5. Tao tai khoan moi" << endl;
						cout << "6. Xoa tai khoan" << endl;
						cout << "7. Doi mat khau" << endl;
						cout << "0. Dang xuat" << endl;
						do {
							cout << "Nhap chuc nang: ";
							cin >> n;
							switch (n) {
							case 1:
								new_admin->add(s);
								break;
							case 2:
								new_admin->update_book_in_depot(s);
								break;
							case 3:
								new_admin->out(s);
								break;
							case 4:
								new_admin->dest(s);
								break;
							case 5:
								new_admin->create_account(new_data_account);
								break;
							case 6:
								new_admin->delete_account(new_data_account);
								break;
							case 7:
								new_admin->change_password();
								break;
							case 0:
								new_admin = NULL;
								system("cls");
								cout << "Dang xuat thanh cong!" << endl;
								n = 0;
								cout << "Tim sach: Nhap 1" << endl;
								cout << "Dang nhap: Nhap 2" << endl;
								cout << "Dang ki: Nhap 3" << endl;
								cout << "Admin: Nhap 4" << endl;
								cout << "Thoat: Nhap 0" << endl;
								break;
							default:
								cout << "Khong hop le!";
								break;
							}
						} while (n != 0);
					}
					break;
				case 0:
					H_exit = true;
					break;
				default:
					cout << "Khong hop le!" << endl;
					break;
				}
			} while (m != 0);
		}
		else {
			if (new_user->getdefault_account_user() == "user")
			{
				cout << "Xem DS sach: Nhap 1" << endl;
				cout << "Mua sach   : Nhap 2" << endl;
				cout << "Huy sach   : Nhap 3" << endl;
				cout << "In hoa don : Nhap 4" << endl;
				cout << "Dang xuat: Nhap 0" << endl;
				do {
					cout << "Nhap chuc nang: ";
					cin >> m;
					switch (m) {
					case 1:
						new_user->out(book.size());
						break;
					case 2:
						/*cout << "Nhap ten sach can mua: ";
						cin >> name;
						cout << endl;*/
						new_user->add(s);
						break;
					case 3:
						/*cout << "Nhap ten sach muon huy: ";
						cin >> name;
						cout << endl;*/
						new_user->dest();
						break;
					case 4:
						new_user->out(number_array);
						break;
					case 0:
						new_user = NULL;
						system("cls");
						cout << "Dang xuat thanh cong!" << endl;
						m = 0;
						break;
					default:
						cout << "Khong hop le!";
						break;
					}
				} while (m != 0);
			}
			else {
				cout << "1. Them sach" << endl;
				cout << "2. Xuat DS sach" << endl;
				cout << "3. Xoa sach" << endl;
				cout << "0. Dang xuat" << endl;
				do {
					cout  << "Nhap chuc nang: ";
					cin >> m;
					switch (m) {
					case 1:
						new_user->add(s);
						break;
					case 2:
						new_user->out(number_array);
						break;
					case 3:
						new_user->dest();
						break;
					case 0:
						m = 0;
						new_user = NULL;
						system("cls");
						cout << "Dang xuat thanh cong!";
						break;
					default:
						cout << "Khong hop le!";
						break;
					}
				} while (m != 0);
			}
		}
	} while (H_exit == false);
}
