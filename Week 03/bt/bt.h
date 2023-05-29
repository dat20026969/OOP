#ifndef _bt_
#define _bt_
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;
#define constName "Duc-Dat Le"
#define constDay 365
#define constNumOfStaff "366Duc-Dat Le"
#define constTitle "nhan vien"
#define constCoefficientSalary 1.0
class staff {
	string name;
	int day;
	string numOfStaff;
	string title;
	float coSalary;
public:

	//setter part
	void getName(string nameOfStaff) {
		this->name = nameOfStaff;
	}
	void getShift(int workingDay) {
		this->day = workingDay;
	}
	void getCode(string num) {
		this->numOfStaff = num;
	}
	void getTitle() {
		this->title = getTitle1();
	}
	void getCoefficientSalary() {
		this->coSalary = getCoefficientSalary1();
	}

	//getter part
	string putName() {
		return name;
	}
	int putShift() {
		return day;
	}
	string putCode() {
		return numOfStaff;
	}
	string putTitle() {
		return title;
	}
	float putCoefficientSalary() {
		return coSalary;
	}

	staff() {
		name = constName;
		day = constDay;
		numOfStaff = constNumOfStaff;
		title = constTitle;
		coSalary = constCoefficientSalary;
	}
	staff(string ten, int ngayDiLam, string maSoNV, string chucDanhNV, float heSoLuongNV) {
		name = ten;
		day = ngayDiLam;
		numOfStaff = maSoNV;
		title = chucDanhNV;
		coSalary = heSoLuongNV;
	}
	staff(string ten, int ngayLamViec) {
		getName(ten);
		getShift(ngayLamViec);
		getCode(codeNum());
		getTitle();
		getCoefficientSalary();
	}
	staff(const staff& tempo) {
		title = tempo.title;
		day = tempo.day;
		coSalary = tempo.coSalary;
		name = constName;
		numOfStaff = constNumOfStaff;
	}
	string codeNum() {
		return to_string(day) + name;
	}
	string getTitle1() {
		if (day < 366) {
			return "nhan vien";
		}
		else if (day < 731) {
			return "quan li";
		}
		else if (day < 1461) {
			return "truong phong";
		}
		else {
			return "truong ban quan li";
		}
	}
	float getCoefficientSalary1() {
		if (title == "nhan vien") {
			return 1.0;
		}
		else if (title == "quan li") {
			return 1.5;
		}
		else if (title == "truong phong") {
			return 2.25;
		}
		else {
			return 4.0;
		}
	}
	void constInput() {
		return;
	}
	void input5Parameters() {
		string ten, maSoNV, chucDanhNV;
		int ngayLamViecNV;
		float heSoLuongNV;
		cout << "Nhap ten nhan vien: ";
		getline(cin, ten);
		cout << "Nhap so ngay lam viec cua nhan vien: ";
		cin >> ngayLamViecNV;
		cin.ignore(1);
		cout << "Nhap ma so nhan vien ";
		getline(cin, maSoNV);
		cout << "Nhap chuc danh cua nhan vien: ";
		getline(cin, chucDanhNV);
		cout << "Nhap he so luong nhan vien: ";
		cin >> heSoLuongNV;
		cin.ignore(1);
		name = ten;
		day = ngayLamViecNV;
		numOfStaff = maSoNV;
		title = chucDanhNV;
		coSalary = heSoLuongNV;
	}
	void input2Parameters() {
		string ten;
		int ngayLam;
		cout << "Nhap ten nhan vien: ";
		getline(cin, ten);
		cout << "Nhap so ngay lam viec cua nhan vien: ";
		cin >> ngayLam;
		cin.ignore(1);
		getName(ten);
		getShift(ngayLam);
		getCode(codeNum());
		getTitle();
		getCoefficientSalary();

	}
	void staffCopying(const staff& tempo) {
		title = tempo.title;
		day = tempo.day;
		coSalary = tempo.coSalary;
		name = constName;
		numOfStaff = constNumOfStaff;
	}

	void output() {
		cout << name << endl;
		cout << day << endl;
		cout << numOfStaff << endl;
		cout << title << endl;
		cout << coSalary << endl;
		cout << endl;
	}
	~staff() {
		cout << "Da huy nhan vien! " << endl;
	}
};
#endif