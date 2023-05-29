#ifndef _dob_
#define _dob_

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
class calendar {
	int ngay, thang, nam;
public:
	calendar() {
		ngay = 1;
		thang = 1;
		nam = 1;
	}
	calendar(int dd, int mm, int yy) {
		ngay = dd;
		thang = mm;
		nam = yy;
	}
	calendar(const calendar& d) {
		ngay = d.ngay;
		thang = d.thang;
		nam = d.nam;
	}
	int getDay() {
		return ngay;
	}
	int getMonth() {
		return thang;
	}
	int getYear() {
		return nam;
	}
	void input(istream& ist) {
		cout << "Nhap ngay sinh cua nguoi do: ";
		ist >> ngay;
		cout << "Nhap thang sinh cua nguoi do: ";
		ist >> thang;
		cout << "Nhap nam sinh cua nguoi do: ";
		ist >> nam;
		ist.ignore(1);
	}
	void output(ostream& ost) {
		ost << ngay << "-" << thang << "-" << nam << endl;
	}
};
#endif 
