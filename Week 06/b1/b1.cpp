#include "b1.h"
void menu() {
	cout << "1.DANG NHAP" << endl;
	cout << "2.DANG KI" << endl;
	cout << "3.QUEN TAI KHOAN" << endl;
	cout << "4.THOAT" << endl;
	cout << "NHAP LUA CHON CUA BAN :" << endl;
}
void account::dangKi() {
    system("cls");
    cout << "Nhap ten dang nhap :" << endl;
	cin >> username;
	cout << "Nhap mat khau :" << endl;
	cin >> password;
	cout << "Nhap ho va ten: " << endl;
	cin >> ten;
	cout << "Nhap email: " << endl;
	cin >> email;
	cout << "Nhap so dien thoai ca nhan: " << endl;
	cin >> soDienThoai;
    ofstream dangKy("list.txt", ios::app);
    dangKy << username << ' ' << password << ' ' << ten << ' ' << email << ' ' << soDienThoai << endl;
    system("cls");
	cout << "DA DANG KI THANH CONG, VUI LONG THOAT RA VA DANG NHAP LAI (DE HE THONG RESET)." << endl;
}
void account::dangNhap() {
    int dem;
    string u, p;
    system("cls");
	cout << "LOG IN:" << endl;
    cout << "Ten dang nhap :";
    cin >> username;
    cout << "Mat khau :";
    cin >> password;

    ifstream input("list.txt");
    while (input >> u >> p) {
        if (u == username && p == password) {
            dem = 1;
            system("cls");
        }
    }
    input.close();
    if (dem == 1) {
        cout << "Hello" << username << endl;
        cout <<"DANG NHAP THANH CONG" << endl;
        cin.get();
        cin.get();
    }
    else {
        cout << "SAI TAI KHOAN HOAC MAT KHAU. HAY THU LAI" << endl;
    }
}
void account::forget(){
	cout << "CHAO MUNG DEN VOI KENH HO TRO" << endl;
	cout << "1.TIM KIEM TAI KHOAN BANG TEN DANG NHAP." << endl;
	cout << "2.Main menu." << endl;
	cout << "NHAP LUA CHON CUA BAN :";
	if (choice == 1) {
		int count = 0;
		string searchUser, su, sp;
		cout << "NHAP TEN DANG NHAP BAN MUON KHOI PHUC :";
		cin >> searchUser;
		ifstream searchU("list.txt");
		while (searchU >> su >> sp) {
			if (su == searchUser) {
				count = 1;
			}
		}
		searchU.close();
		if (count == 1) {
			cout << "CO TAI KHOAN";
			cout << "MAT KHAU CUA BAN LA: " << sp;
			cin.get();
			cin.get();
			system("cls");
			menu();
		}
		else {
			cout << "KHONG TIM THAY THONG TIN CUA BAN";
			cout << "GOI HOTLINE 0888514045 DE DUOC TU VAN KIP THOI. ";
			cin.get();
			cin.get();
			forget();
		}
	}
	if (choice == 2) {
		cin.get();
		menu();
	}
	else{
		cout << "THU LAI" << endl;
		forget();
	}
}

/*-----------------------------------------------------------------------------------*/
void lichSuGiaoDich::update(string soTaiKhoan, double stck, string noiDung, string day) {
	lichSuGiaoDich tempo;
	tempo.soTaiKhoan = soTaiKhoan;
	tempo.stck = stck;
	tempo.noiDung = noiDung;
	tempo.day = day;
}

void lichSuGiaoDich::printf() {
	cout << "So tai khoan cua quy khach: " << soTaiKhoan << endl;
	cout << "So tien chuyen khoan cua quy khach: " << stck << " VND" << endl;
	cout << "Noi dung chuyen tien cua quy khach: " << noiDung << endl;
	cout << "Ngay chuyen tien cua quy khach: " << day << endl;
	cout << "------------------";
}
bool PaymentAccount::tranferTo(double amount) {
	if (amount <= soDu) {
		soDu -= amount;
		string stk;
		cout << "Nhap so tai khoan cua quy khach: ";
		cin >> stk;
		string n;
		cout << "Nhap noi dung chuyen khoan cua quy khach: ";
		cin.ignore();
		getline(cin, n);
		time_t curr_time = time(NULL);
		tm* t = localtime(&curr_time);
		ostringstream out;
		out << put_time(t, "%d%m%y");
		lichSuGiaoDich tempo;
		tempo.update(stk, amount * -1, n, out.str());
		h.push_back(tempo);
		return true;
	}
	return false;
}
void PaymentAccount::showHistory() {

	for (auto a : h) {
		a.printf();
	}
}
void PaymentAccount::dangKyTaiKhoan() {
	cout << "Nhap so tai khoan cua quy khach: ";
	cin >> soTaiKhoan;
	soDu = 0.00;
	time_t t = time(nullptr);
	tm tme = *localtime(&t);
	ostringstream ost;
	ost << put_time(&tme, "%d-%m-%Y");
	ngayPhatHanh = ost.str();
	ofstream dangKyTaiKhoan("list1.txt", ios::app);
	dangKyTaiKhoan << soTaiKhoan << ' ' << ngayPhatHanh;
	system("cls");
}
void PaymentAccount::thongTin() {
	ifstream input1("list1.txt");
	cout << "So tai khoan khach hang: " << soTaiKhoan << endl;
	cout << "So du tai khoan: " << soDu << " VND" << endl;
	cout << "Ngay phat hanh tai khoan: " << ngayPhatHanh << endl;
}
double PaymentAccount::getBalance() {
	return soDu;
}
