#ifndef _in4_
#define _in4_

#include "ngay.h"

class in4 {
protected:
	string ten;
	calendar birthday;
	string maSo;
public:
	in4() {
		ten = "";
		maSo = "";
	}
	in4(string a, calendar dd, string mm) {
		ten = a;
		birthday = dd;
		maSo = mm;
	}
	in4(const in4& inf) {
		ten = inf.ten;
		birthday = inf.birthday;
		maSo = inf.maSo;
	}
	void input(istream& ist) {
		cout << "Nhap ten cua nguoi co chuc trach: " << endl;
		getline(ist, ten);
		birthday.input(cin);
		cout << "Nhap ma so cua nguoi co chuc trach: " << endl;
		getline(ist, maSo);

	}
	void output(ostream& ost) {
		ost << "Ten cua nguoi co chuc trach: " << ten << endl;
		birthday.output(cout);
		ost << "Ma so nguoi co chuc trach: " << maSo << endl;
	}
	string getNumOfStaff() {
		return maSo;
	}
};
#endif 