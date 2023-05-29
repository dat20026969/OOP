#include "b2.h"
int main() {
	hocSinh a;
	vector<hocSinh> n;
	LopHoc b;
	a.input();
	a.output();
	a.check(n);
	a.studentDeletion(n);
	a.getAveragePoint();
	b.inputList();
	b.outputList();
	b.remove();
	b.GPASorting();
	b.outputFile();
	return 0;
}