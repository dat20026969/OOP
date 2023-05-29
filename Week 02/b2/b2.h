#ifndef _b2_
#define _b2_
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include <string.h>
using namespace std;

class hocSinh {
	string fullname;
	string phoneNumber;
	double ovr;
public:
	void input();
	void output();
	bool check(vector<hocSinh>);
	void studentDeletion(vector<hocSinh>);
	int getAveragePoint() {
		return ovr;
	}
	void outputFile();
};

class LopHoc {
	vector<hocSinh> n;
public:
	void inputList();
	void outputList();
	void remove();
	void GPASorting();
	void outputFile();

};

#endif