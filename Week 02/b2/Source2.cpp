#include "b2.h"

void hocSinh::input() {
	string a;
	cout << "Input fullname of student: " << endl;
	while (getline(cin, a)) {
		if (a.length() < 21) {
			break;
		}
		else {
			cout << "Fullname is illegal. " << endl;
		}
		cout << "Input fullname again. ";
	}
	fullname = a;
	cout << "Input phone number: " << endl;
	while (getline(cin, a)) {
		if (a.length() > 8 && a.length() < 12) {
			break;
		}
		else {
			cout << "Phone number is illegal. " << endl;
		}
		cout << "Inpput phone number again " << endl;
	}
	phoneNumber = a;
	double t;
	cout << "Input GPA: " << endl;
	while (cin >> t) {
		if (t > -1 && t < 11) {
			break;
		}
		else {
			cout << "GPA is illegal. " << endl;
		}
		cout << "Input GPA again. " << endl;
	}
	cin.ignore(1);
	ovr = t;
}

void hocSinh::output() {
	cout << fullname << endl;
	cout << phoneNumber << endl;
	cout << ovr << endl;
}

bool hocSinh::check(vector<hocSinh> n) {
	for (int i = 0; i < n.size(); i++) {
		if (fullname == n[i].fullname) {
			return false;
		}
	}
	return true;
}

void hocSinh::studentDeletion(vector<hocSinh> n) {
	vector<hocSinh>::iterator iter = n.begin();
	int i = 0;
	if (check(n)) {
		cout << "Cannot find student(Khong co hoc sinh trong lop). " << endl;
	}
	else {
		for (iter; iter != n.end(); iter++) {
			if (fullname == n[i].fullname) {
				n.erase(iter);
				break;
			}
			i++;
		}
	}
}

void hocSinh::outputFile() {
	ofstream s;
	s.open("LopHoc.txt", ios::app);
	s << fullname << endl;
	s << phoneNumber << endl;
	s << ovr << endl;
	s.close();

}
/*-----------------------------*/
void LopHoc::inputList() {
	hocSinh k1;
	hocSinh k2;
	if (n.empty()) {
		k1.input();
		n.push_back(k1);
	}
	int a;
	while (1) {
		cout << "Do you want to continue?(Press 1 or 0): ";
		cin >> a;
		cin.ignore(1);
		if (a == 0) {
			break;
		}
		else {
			while (1) {
				k2.input();
				if (!k2.check(n)) {
					cout << "Find student in class(Da co hoc sinh trong lop)!!! " << endl;
					break;
				}
				else {
					n.push_back(k2);
					break;
				}
			}

		}
	}
}
void LopHoc::outputList() {
	for (int i = 0; i < n.size(); i++) {
		n[i].output();
		cout << endl;
	}
}
void LopHoc::remove() {
	hocSinh k1;
	cout << "Nhap hoc sinh muon xoa " << endl;
	k1.input();
	k1.studentDeletion(n);
}
void LopHoc::GPASorting() {
	for (int i = 0; i < n.size() - 1; i++) {
		for (int j = i + 1; j < n.size(); j++) {
			if (n[i].getAveragePoint() < n[j].getAveragePoint()) {
				swap(n[i], n[j]);
			}
		}
	}
}

void LopHoc::outputFile() {
	ofstream outFile;
	outFile.open("LopHoc.txt", ios::out);
	outFile << n.size() << endl;
	for (int i = 0; i < n.size(); i++) {
		n[i].outputFile();
	}
	outFile.close();
}