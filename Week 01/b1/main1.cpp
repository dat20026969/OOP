#include "b1.h"
int main() {
	phanSo a, b;
	cout << "Moi thay nhap phan so dau tien: " << endl;
	a.input();
	a.output();
	cout << "Moi thay nhap phan so thu hai: " << endl;
	b.input();
	b.output();
	phanSo tong = addition(a, b);
	cout << "Tong 2 phan so la: ";
	tong.output();
	phanSo hieu = subtraction(a, b);
	cout << "Hieu 2 phan so la: " << endl;
	hieu.output();
	phanSo tich = multiplication(a, b);
	cout << "Tich 2 phan so la: " << endl;
	tich.output();
	phanSo thuong = division(a, b);
	cout << "Thuong 2 phan so la: " << endl;
	thuong.output();
	return 0;
}
