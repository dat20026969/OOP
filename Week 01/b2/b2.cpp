#include "b2.h"
void pointOxy::input() {
	cout << "Nhap toa do so thuc theo dang Z(x,y): " << endl;
	cout << "Ten cua toa do: ";
	cin >> name;
	cout << "Gia tri toa do x: ";
	cin >> a;
	cout << "Gia tri toa do y: ";
    cin >> b;
}

void pointOxy::output() {
	cout << "Toa do ban vua nhap la " << (char)toupper(name) << "(" << a << ";" << b << ")" << endl;
}

void pointOxy::distance2Point(pointOxy z) {
	cout << "The distance of 2 points ";
	cout << (char)toupper(name) << "(" << a << ";" << b << ") and ";
	cout << (char)toupper(z.name) << "(" << z.a << ";" << z.b << ")";
	cout << " is: ";
	cout << sqrt(pow((a - z.a), 2) + pow((b - z.b), 2)) << endl;
}