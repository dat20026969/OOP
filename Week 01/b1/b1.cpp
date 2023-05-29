#include "b1.h"
int GCD(int a, int b) {
	if (b == 0) {
		return a;
	}
	return GCD(b, a % b);
}

void phanSo::input() {
	cout << "Moi thay nhap phan so: " << endl;
	cout << "Tu so la: " << endl;
	cin >> tuSo;
	cout << "Mau so la: " << endl;
	cin >> mauSo;
}

void phanSo::output() {
	cout << "Ket qua theo dang tu / mau: " << tuSo << " / " << mauSo << endl;
	cout << "Ket qua theo dang thap phan (a,bcd...): " << (double)tuSo / mauSo << endl;
}

phanSo addition(phanSo a, phanSo b) {
	phanSo x;
	x.tuSo = a.tuSo * b.mauSo + a.mauSo * b.tuSo;
	x.mauSo = a.mauSo * b.mauSo;
	int y = (x.tuSo < x.mauSo) ? GCD(x.tuSo, x.mauSo) : GCD(x.mauSo, x.tuSo);
	x.tuSo = x.tuSo / y;
	x.mauSo = x.mauSo / y;
	return x;
}

phanSo subtraction(phanSo a, phanSo b) {
	phanSo x;
	x.tuSo = a.tuSo * b.mauSo - a.mauSo * b.tuSo;
	x.mauSo = a.mauSo * b.mauSo;
	int y = (x.tuSo < x.mauSo) ? GCD(x.tuSo, x.mauSo) : GCD(x.mauSo, x.tuSo);
	x.tuSo = x.tuSo / y;
	x.mauSo = x.mauSo / y;
	return x;
}
phanSo multiplication(phanSo a, phanSo b) {
	phanSo x;
	x.tuSo = a.tuSo * b.tuSo;
	x.mauSo = a.mauSo * b.mauSo;
	int y = (x.tuSo < x.mauSo) ? GCD(x.tuSo, x.mauSo) : GCD(x.mauSo, x.tuSo);
	x.tuSo = x.tuSo / y;
	x.mauSo = x.mauSo / y;
	return x;
}
phanSo division(phanSo a, phanSo b) {
	phanSo x;
	x.tuSo = a.tuSo * b.mauSo;
	x.mauSo = a.mauSo * b.tuSo;
	int y = (x.tuSo < x.mauSo) ? GCD(x.tuSo, x.mauSo) : GCD(x.mauSo, x.tuSo);
	x.tuSo = x.tuSo / y;
	x.mauSo = x.mauSo / y;
	return x;
}