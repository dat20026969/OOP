#include "ngay2.h"
#include "thongtin2.h"
#include "chucnang2.h"
PhongQuanLy* PhongQuanLy::instance = NULL;
vector<staff*> staff::objects;
int main() {
	PhongQuanLy* a = PhongQuanLy::getInstance();
	a->add(new GiangVien);
	a->add(new TroGiang);
	a->add(new NghienCuuVien);
	a->add(new ChuyenVien);
	a->add(new ThucTapSinh);
	cout << "press 0 to exit: " << endl;
	while (1) {
		cout << endl;
		string ten;
		cout << "Nhap loai cua nguoi co chuc trach: " << endl;
		getline(cin, ten);
		if (ten == "0") break;
		a->addByName(ten);
	}
	a->xoaTheoMS();
	a->out();
	cout << endl << endl;

}