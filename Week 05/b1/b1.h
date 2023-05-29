#ifndef _b1_
#define _b1_
#include <iostream>
#include <iomanip>
using namespace std;
class PhanSo {
	int* tuso;
	int* mauso;
public:
	friend istream& operator>>(istream& ist, PhanSo& pso);
	friend ostream& operator<<(ostream& ost, PhanSo& pso);

	PhanSo() {
		tuso = new int;
		mauso = new int;
		*tuso = 0;
		*mauso = 1;
	}
	PhanSo(const PhanSo& pso) {
		delete tuso;
		delete mauso;
		this->tuso = new int;
		this->mauso = new int;
		*this->tuso = *pso.tuso;
		*this->mauso = *pso.mauso;
	}
	void setDenominator(int mauSo) {
		if (mauSo == 0) {
			*this->mauso = 1;
		}
		else {
			*this->mauso = mauSo;
		}
		if (mauSo < 0) {
			*this->tuso = -(*tuso);
			*this->mauso = -mauSo;
		}
	}
	PhanSo& operator=(const PhanSo& pso) {
		delete tuso;
		delete mauso;
		tuso = new int;
		mauso = new int;
		*this->tuso = *pso.tuso;
		*this->mauso = *pso.mauso;
		return *this;
	}
	PhanSo operator+(const PhanSo& pso) {
		PhanSo tempor;
		*tempor.tuso = (*tuso) * (*pso.mauso) + (*mauso) * (*pso.tuso);
		*tempor.mauso = (*mauso) * (*pso.mauso);
		return tempor;
	}
	PhanSo operator-(const PhanSo& pso) {
		PhanSo tempor;
		*tempor.tuso = (*tuso) * (*pso.mauso) - (*mauso) * (*pso.tuso);
		*tempor.mauso = (*mauso) * (*pso.mauso);
		return tempor;
	}
	PhanSo operator*(const PhanSo& pso) {
		PhanSo tempor;
		*tempor.tuso = *tuso * *pso.tuso;
		*tempor.mauso = *mauso * *pso.mauso;
		return tempor;
	}
	PhanSo operator/(const PhanSo& pso) {
		PhanSo tempor;
		*tempor.tuso = *tuso * *pso.mauso;
		*tempor.mauso = *mauso * *pso.tuso;
		return tempor;
	}
	PhanSo& operator+=(const PhanSo& pso) {
		*tuso = *tuso * *pso.mauso + *mauso * *pso.tuso;
		*mauso = *mauso * *pso.mauso;
		return *this;
	}
	PhanSo& operator-=(const PhanSo& pso) {
		*tuso = *tuso * *pso.mauso - *mauso * *pso.tuso;
		*mauso = *mauso * *pso.mauso;
		return *this;
	}
	PhanSo& operator*=(const PhanSo& pso) {
		*tuso = *tuso * *pso.tuso;
		*mauso = *mauso * *pso.mauso;
		return *this;
	}
	PhanSo& operator/=(const PhanSo& ps) {
		*tuso = *tuso * *ps.mauso;
		*mauso = *mauso * *ps.tuso;
		return *this;
	}
	bool operator==(const PhanSo& pso) {
		if (*tuso * *pso.mauso - *mauso * *pso.tuso == 0) {
			return 1;
		}
		else {
			return 0;
		}
	}
	bool operator<(const PhanSo& pso) {
		if (*tuso * *pso.mauso - *mauso * *pso.tuso > 0) {
			return 1;
		}
		else {
			return 0;
		}
	}
	bool operator>(const PhanSo& pso) {
		if (*tuso * *pso.mauso - *mauso * *pso.tuso > 0) {
			return 1;
		}
		else {
			return 0;
		}
	}
	bool operator<=(const PhanSo& pso) {
		if (*tuso * *pso.mauso - *mauso * *pso.tuso <= 0) {
			return 1;
		}
		else {
			return 0;
		}
	}
	bool operator>=(const PhanSo& pso) {
		if (*tuso * *pso.mauso - *mauso * *pso.tuso >= 0) {
			return 1;
		}
		else {
			return 0;
		}
	}
	bool operator!=(const PhanSo& pso) {
		if (!(*this == pso)) {
			return 1;
		}
		else {
			return 0;
		}
	}
	PhanSo& operator++(int a) {
		PhanSo n(*this);
		*tuso = *tuso + *mauso;
		return n;
	}
	PhanSo& operator++() {
		*this->tuso = *this->tuso + *this->mauso;
		return *this;
	}
	PhanSo& operator--() {
		*this->tuso = *this->tuso - *this->mauso;
		return *this;
	}
	PhanSo& operator--(int a) {
		PhanSo n(*this);
		*tuso = *tuso - *mauso;
		return n;
	}
	~PhanSo() {
		delete tuso;
		delete mauso;
	}
};
#endif
