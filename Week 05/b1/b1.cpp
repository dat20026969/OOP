#include "b1.h"
istream& operator>>(istream& ist, PhanSo& pso) {
	cout << "Nhap tu so cua phan so: ";
	ist >> *pso.tuso;
	cout << "Nhap mau so cua phan so: ";
	ist >> *pso.mauso;
	pso.setDenominator(*pso.mauso);
	return ist;
}
ostream& operator<<(ostream& ost, PhanSo& pso) {
	ost << *pso.tuso << " | " << *pso.mauso << endl;
	return ost;
}