#ifndef _b1_
#define _b1_
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <string.h>
using namespace std;

class student {
	string fullname;
	string phoneNumber;
	float ovr;
public:
	void input();
	void output();
};

#endif