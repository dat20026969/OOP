#include "ngay.h"
#include "thongtin.h"
#include "chucnang.h"
vector<staff*> staff::objects;
int main() {
	PhongQuanLy a;
	a.add(new giangVien);
	a.add(new troGiang);
	a.add(new nghienCuuVien);
	a.add(new chuyenVien);
	a.add(new thucTapSinh);
	cout << "Press 0 to exit: " << endl;
	while (1) {
		cout << endl;
		string ten;
		cout << "Nhap loai cua nguoi co chuc trach: " << endl;
		getline(cin, ten);
		if (ten == "0") {
			break;
		}
		a.addByName(ten);
	}
	a.xoaBangMS();
	a.out();
	cout << endl << endl << endl;
	return 0;
}