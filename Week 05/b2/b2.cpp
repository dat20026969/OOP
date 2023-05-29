#include "b2.h"
istream& operator>>(istream& ist, MangSoNguyen& msn) {
	cout << "Nhap kich thuoc mang da nhap: ";
	ist >> msn.kichthuoc;
	if (msn.kichthuoc < 0) {
		msn.kichthuoc = 0;
	}
	for (int i = 0; i < msn.kichthuoc; i++) {
		cout << "Nhap phan tu thu " << i << "trong mang: ";
		ist >> msn.dulieu[i];
	}
	return ist;
}
ostream& operator<<(ostream& ost, MangSoNguyen& msn) {
	for (int i = 0; i < msn.kichthuoc; i++) {
		ost << msn.dulieu[i] << " ";
	}
	ost << endl;
	return ost;
}
