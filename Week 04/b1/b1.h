#ifndef _b1_
#define _b1_
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int GCD(int a, int b);
class fraction {
	double* tuSo;
	double* mauSo;
public:
	void applyNumerator() {
		double n1;
		cout << "Nhap tu so cua phan so: " << endl;
		cin >> n1;
		*tuSo = n1;
	}
	void applyNumerator(double n1) {
		*tuSo = n1;
	}
	void applyDenominator() {
		double n2;
		cout << "Nhap mau so ";
		cin >> n2;
		if (n2 == 0.0) {
			*mauSo == 1.0;
		}
		*mauSo = n2;
	}
	void applyDenominator(double n2) {
		if (*mauSo == 0.0) {
			*mauSo = 1.0;
		}
		*mauSo = n2;
	}
	int takeNumerator() {
		return *tuSo;
	}
	int takeDenominator() {
		return *mauSo;
	}
	fraction addition(const fraction& a) {
		fraction tempor;
		*tempor.tuSo = (*tuSo) * (*a.mauSo) + (*mauSo) * (*a.tuSo);
		*tempor.mauSo = (*mauSo) * (*a.mauSo);
		return tempor;
	}
	fraction subtraction(const fraction& a) {
		fraction tempor;
		*tempor.tuSo = (*tuSo) * (*a.mauSo) - (*mauSo) * (*a.tuSo);
		*tempor.mauSo = (*mauSo) * (*a.mauSo);
		return tempor;
	}
	fraction multiplication(const fraction& a) {
		fraction tempor;
		*tempor.tuSo = (*tuSo) * (*a.tuSo);
		*tempor.mauSo = (*mauSo) * (*a.mauSo);
		return tempor;
	}
	fraction division(const fraction& a) {
		fraction tempor;
		*tempor.tuSo = (*tuSo) * (*a.mauSo);
		*tempor.mauSo = (*mauSo) * (*a.tuSo);
		return tempor;
	}
	fraction() {
		tuSo = new double;
		mauSo = new double;
		*tuSo = 0.0;
		*mauSo = 1.0;
	}
	fraction(double n) {
		tuSo = new double;
		mauSo = new double;
		*tuSo = n;
		*mauSo = 1.0;
	}
	fraction(double n1, double n2) {
		tuSo = new double;
		mauSo = new double;
		if (n2 == 0.0) {
			*tuSo = n1;
			*mauSo = 1.0;
		}
		else {
			*tuSo = n1;
			*mauSo = n2;

		}
	}
	fraction(const fraction& tempor) {
		tuSo = new double;
		mauSo = new double;
		*tuSo = *tempor.tuSo;
		*mauSo = *tempor.mauSo;
	}
	void handle() {
		*tuSo = (*tuSo) / GCD(*tuSo, *mauSo);
		*mauSo = (*mauSo) / GCD(*tuSo, *mauSo);
		if (*mauSo < 0) {
			*tuSo = -(*tuSo);
			*mauSo = -(*mauSo);
		}
	}

	void inputFraction() {
		applyNumerator();
		applyDenominator();

	}
	void outputFraction1() {
		handle();
		cout << "Xuat theo dinh dang tuso/mauso: ";
		cout << *tuSo << "/" << *mauSo << endl;
	}
	void outputFraction2() {
		cout << "Xuat theo dinh dang so thap phan: ";
		cout << (double)(*tuSo) / (*mauSo) << endl;
	}
	~fraction() {
		delete tuSo;
		delete mauSo;
	}
};

#endif