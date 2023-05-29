#include "b3.h"
void diemOxy::input() {
	cout << "Nhap gia tri toa do x diem thu: " << i << " ";
	cin >> x;
	cout << "Nhap gia tri toa do y diem thu: " << i << " ";
	cin >> y;
	i++;
}

void diemOxy::output() {
	cout << "(" << x << ";" << y << ")" << endl;
}

double diemOxy::distances(diemOxy B) {
	return pow(x - B.x, 2) + pow(y - B.y, 2);
}

void rectangle::inputRectangle() {
	x1.input();
	x2.input();
	x3.input();
	x4.input();
}

void rectangle::outputRectangle() {
	cout << "A ";
	x1.output();
	cout << "B ";
	x2.output();
	cout << "C ";
	x3.output();
	cout << "D ";
	x4.output();
}

int rectangle::rectangleChecking() {
	if ((x1.distances(x2) == x4.distances(x3)) && (x1.distances(x4) == x2.distances(x3))) {
		if (x1.distances(x4) + x3.distances(x4) == x1.distances(x3)) {
			return 1;
		}
		else return 0;
	}
	else return 0;
}
//int rectangle::perimeter(diemOxy x1, diemOxy x2, diemOxy x3, diemOxy x4) {
//	return (x1.distances(x2) + x2.distances(x3) + x3.distances(x4) + x4.distances(x1));
//}
//
//int rectangle::area(diemOxy x1, diemOxy x2, diemOxy x3, diemOxy x4) {
//	return (x1.distances(x2) * x1.distances(x3));
//}