#include "b2.h"
int main() {
	MangSoNguyen a;
	cin >> a;
	MangSoNguyen b;
	cin >> b;
	MangSoNguyen n = ++a;
	cout << n;
	return 0;
}