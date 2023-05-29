#include "b2.h"
int main() {
	pointOxy x, y;
	cout << "Nhap toa do diem dau tien: " << endl;
	x.input();
	x.output();
	cout << "Nhap toa do diem thu hai: " << endl;
	y.input();
	y.output();
	x.distance2Point(y);
	return 0;
}