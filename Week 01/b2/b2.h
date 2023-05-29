#ifndef _b2_
#define _b2_
#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

class pointOxy {
	char name;
	double a, b;
public:
	void input();
	void output();
	void distance2Point(pointOxy z);
};

#endif