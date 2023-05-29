#ifndef _b1_
#define _b1_
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <istream>
#include <fstream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <string>
#include <Windows.h>
#include <ctime>
#include <sstream>
using namespace std;
void menu();
class account {
	string username, password, ten, email, soDienThoai;
	int choice;
public:
	void dangKi();
	void dangNhap();
	void forget();
};
class lichSuGiaoDich {
	string soTaiKhoan;
	double stck;
	string noiDung;
	string day;
public:
	void update(string soTaiKhoan, double stck, string noiDung, string day);
	void printf();
};
class PaymentAccount {
private:
	vector <lichSuGiaoDich> h;
	string ngayPhatHanh;
	double soDu, soTaiKhoan;
public:
	bool tranferTo(double amount);
	void showHistory();
	void dangKyTaiKhoan();
	void thongTin();
	double getBalance();
	double laySoTaiKhoan() {
		return soTaiKhoan;
	}
	string layNgay() { 
		return ngayPhatHanh;
	}
};
#endif