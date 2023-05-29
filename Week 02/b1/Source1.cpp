#include "b1.h"
void student::input() {
	string a;
	cout << "Please write down full name of student: " << endl;
	while (getline(cin, a)) {
		if (a.length() <= 20) {
			break;
		}
		else {
			cout << "Name/s is/are illegal! " << endl;
		}
		cout << "Please write down full name again." << endl;
	}
	fullname = a;
	cout << "Please write down phonenumber of student: " << endl;
	while (getline(cin, a)) {
		if (a.length() > 8 && a.length() < 12) {
			break;
		}
		else {
			cout << "This/these phone number is/are illegal! " << endl;
		}
		cout << "please write down phone number again. " << endl;
	}
	phoneNumber = a;
	float b;
	cout << "Please write down your GPA(VN): " << endl;
	while (cin >> b) {
		if (b > -1 && b < 11) {
			break;
		}
		else {
			cout << "GPA(VN) has/have written is/are illegal! " << endl;
		}
		cout << "Please write down GPA(VN) again. ";
	}
	cin.ignore(1);
	ovr = b;
}

void student::output() {
	cout << fullname << endl;
	cout << phoneNumber << endl;
	cout << ovr << endl;
}