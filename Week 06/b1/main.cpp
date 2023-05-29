#include "b1.h"
int main() {    
    int choice;
    account a;
    PaymentAccount b;
    menu();
    cin >> choice;
    cout << endl;
    if (choice == 1) {
        a.dangNhap();
        b.dangKyTaiKhoan();
        b.thongTin();
        b.getBalance();
        b.laySoTaiKhoan();
        b.showHistory();
        b.layNgay();

    }
    else if (choice == 2) {
        a.dangKi();
    }
    else if (choice == 3) {
        a.forget();
    }
    else if (choice == 4) {
        return 0;
    }
    else {
        return 0;
    }
}

	
