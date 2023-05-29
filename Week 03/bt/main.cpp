#include "bt.h"
int main() {
	cout << "Nhap mac dinh: ";
	staff a;
	a.constInput();
	a.output();
	cout << "Nhap voi 2 tham so: " << endl;
	staff b;
	b.input2Parameters();
	b.output();
	cout << "Nhap voi 5 tham so: " << endl;
	staff c;
	c.input5Parameters();
	c.output();
	staff d;
	d.staffCopying(c);
	d.output();
	return 0;
}