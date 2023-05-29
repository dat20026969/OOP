#ifndef _b1_
#define _b1_

#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int GCD(int a, int b);
class phanSo {
	int tuSo, mauSo;
public:
	void input();
	void output();
	friend phanSo addition(phanSo a, phanSo b);
	friend phanSo subtraction(phanSo a, phanSo b);
	friend phanSo multiplication(phanSo a, phanSo b);
	friend phanSo division(phanSo a, phanSo b);
};

#endif