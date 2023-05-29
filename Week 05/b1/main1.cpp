#include "b1.h"
int main() {
	PhanSo a;
	PhanSo b;
	cin >> a >> b;
	cout << a << b;
	PhanSo n = a++;
	cout << n;
	return 0;
}