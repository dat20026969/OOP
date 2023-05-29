#include "b1.h"
int main() {
	xeThuongMai xeA("LuxA", "Den", "TieuChuan", 950000000.00, "55A5-55555");
		// Sau khi thực hiện lệnh dưới đây, giá bán của xeA sẽ được giảm 5.5% 
		so với giá ban đầu.
		xeA = xeA - 5.5;
	// Xuất thông tin xeA
	cout << xeA << endl;
	return 0;

	return 0;
}