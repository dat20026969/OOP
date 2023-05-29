#ifndef _b2_
#define _b2_
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
class MangSoNguyen {
	int* dulieu;
	int kichthuoc = 10;
public:
	friend istream& operator>>(istream& ist, MangSoNguyen& msn);
	friend ostream& operator<<(ostream& ost, MangSoNguyen& msn);
	MangSoNguyen() {
		this->dulieu = new int[this->kichthuoc];
		for (int i = 0; i < kichthuoc; i++) {
			this->dulieu[i] = 0;
		}
	}
	MangSoNguyen(int kichThuoc) {
		this->kichthuoc = kichThuoc;
		this->dulieu = new int[kichthuoc];
		for (int i = 0; i < kichthuoc; i++) {
			this->dulieu[i] = 0;
		}
	}
	MangSoNguyen(const MangSoNguyen& msn) {
		delete dulieu;
		dulieu = new int[msn.kichthuoc];
		this->kichthuoc = msn.kichthuoc;
		for (int i = 0; i < msn.kichthuoc; i++) {
			this->dulieu[i] = msn.dulieu[i];
		}
	}
	MangSoNguyen& operator=(const MangSoNguyen& msn) {
		delete[] dulieu;
		dulieu = new int[msn.kichthuoc];
		this->kichthuoc = msn.kichthuoc;
		for (int i = 0; i < msn.kichthuoc; i++) {
			this->dulieu[i] = msn.dulieu[i];
		}
		return *this;
	}
	int kichThuocMang() {
		return kichthuoc;
	}
	MangSoNguyen operator+(const MangSoNguyen& a) {
		int size = max(this->kichthuoc, a.kichthuoc);
		MangSoNguyen msn(size);
		int i = 0;
		for (i; i < min(this->kichthuoc, a.kichthuoc); ++i) {
			msn.dulieu[i] = this->dulieu[i] + a.dulieu[i];
		}
		for (i; i < msn.kichthuoc; i++) {
			if (this->kichthuoc > a.kichthuoc) {
				msn.dulieu[i] = this->dulieu[i];
			}
			else msn.dulieu[i] = a.dulieu[i];

		}
		return msn;
	}
	MangSoNguyen& operator++() {
		for (int i = 0; i < kichthuoc; i++) {
			++this->dulieu[i];
		}
		return *this;
	}
	MangSoNguyen operator++(int a) {
		MangSoNguyen msn(*this);
		for (int i = 0; i < kichthuoc; i++) {
			++this->dulieu[i];
		}
		return msn;
	}
	~MangSoNguyen() {
		delete[] dulieu;
	}
};
#endif