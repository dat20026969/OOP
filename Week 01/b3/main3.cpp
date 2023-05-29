#include "b3.h"
int main() {
	rectangle a;
	a.inputRectangle();
	a.outputRectangle();
	if (a.rectangleChecking() == 1) {
		cout << "Do la hinh chu nhat! " << endl;
		a.perimeter();
		a.area();
	}
	else {
		cout << "Do khong phai la hinh chu nhat" << endl;
	}
	return 0;
}