#ifndef _b3_
#define _b3_

//UML em khong lam duoc a....

#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std;

int i = 1;
class diemOxy {
	int x, y;
public:
	void input();
	void output();
	double distances(diemOxy);
};

class rectangle {
	diemOxy x1, x2, x3, x4;
public:
	void inputRectangle();
	void outputRectangle();
	int rectangleChecking();
	int perimeter();
	int area();
};

#endif