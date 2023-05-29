#ifndef _IN4_
#define _IN4_
#include "ngay2.h"
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
	in4(string n, calendar dd, string m) {
		ten = n;
		birthday = dd;
		maSo = m;
	}
	in4(const in4& tt) {
		ten = tt.ten;
		birthday = tt.birthday;
		maSo = tt.maSo;
	}
	void input(istream& ist) {
		cout << "Nhap ten cua nguoi do: " << endl;
		getline(ist, ten);
		birthday.input(cin);
		cout << "Nhap ma so nhan su cua nguoi do: " << endl;
		getline(ist, maSo);
	}
	void output(ostream& ost) {
		ost << "Ten cua nguoi do: " << ten << endl;
		birthday.output(cout);
		ost << "Ma so cua nguoi do: " << maSo << endl;
	}
	string getNumOfStaff() {
		return maSo;
	}

	//virtual double tinhLuong() = 0;
};


#endif // !_INFOR_
