#ifndef _chucnang_
#define _chucnang_

#include "ngay.h"
#include "thongtin.h"
class staff {
	static vector<staff* > objects;
public:
	virtual staff* faker() = 0;
	virtual string getName() = 0;
	static void addStaff(staff* nv) {
		if (nv == NULL) {
			return;
		}
		int postition = -1;
		for (int i = 0; i < objects.size(); i++) {
			staff* exa = objects[i];
			if (exa->getName() == nv->getName()) {
				postition = i;
			}
		}
		if (postition == -1) {
			objects.push_back(nv);
		}
	}
	static staff* createStaff(string ten) {
		for (int i = 0; i < objects.size(); i++) {
			staff* mau = objects[i];
			if (mau->getName() == ten) {
				objects[i]->faker();
				objects[i]->input(cin);
				return objects[i];
			}
		}
		cout << "Khong co ai co chuc trach hop le trong truong." << endl;
		return NULL;
	}

	virtual string getNumOfStaff() = 0;
	virtual void input(istream& ist) = 0;
	virtual void output(ostream& ostt) = 0;

};
class giangVien :public staff {
	in4 i;
	string acaRank;
	string degree;
	int subjects;
	int years;
	vector<string> monHoc;
public:
	giangVien() {
		acaRank = "";
		degree = "";
		subjects = 0;
		years = 0;
	}
	giangVien(const giangVien& gv) {
		this->i = gv.i;
		this->acaRank = gv.acaRank;
		this->degree = gv.degree;
		this->subjects = gv.subjects;
		this->years = gv.years;
		for (int i = 0; i < subjects; i++) {
			this->monHoc[i] = gv.monHoc[i];
		}
	}
	string getName() {
		return "GiangVien";
	}
	string getNumOfStaff() {
		return i.getNumOfStaff();
	}
	void input(istream& ist) {
		i.input(ist);
		cout << "Nhap hoc ham cua nguoi do: ";
		getline(ist, acaRank);
		cout << "Nhap hoc vi cua nguoi do: ";
		getline(ist, degree);
		cout << "So nam giang day cua nguoi do: ";
		ist >> years;
		ist.ignore(1);
		int choice;
		while (1) {
			string mon;
			cout << "Nhap mon hoc dang day cua nguoi do: ";
			getline(ist, mon);
			monHoc.push_back(mon);
			cout << "Tiep tuc hay khong? (1 neu co, 0 neu khong) (1/0): " << endl;
			ist >> choice;
			ist.ignore(1);
			if (choice != 1) {
				break;
			}
		}
		subjects = monHoc.size();
	}
	staff* faker() {
		return new giangVien(*this);
	}
	void output(ostream& ostt) {
		i.output(ostt);
		ostt << "Hoc ham cua nguoi do: " << acaRank << endl;
		ostt << "Hoc vi cua nguoi do:: " << degree << endl;
		ostt << "So mon cua nguoi do:: " << subjects << endl;
		ostt << "So nam cua nguoi do:: " << years << endl;
		ostt << "So mon giang day cua nguoi do: " << endl;
		for (int i = 0; i < monHoc.size(); i++) {
			ostt << monHoc[i] << " ";
		}
		ostt << endl;
	}
};
class troGiang :public staff {
	in4 i;
	int subjectstroGiang;
public:
	troGiang() {
		subjectstroGiang = 0;
	}
	troGiang(const troGiang& tgiang) {
		this->i = tgiang.i;
		this->subjectstroGiang = tgiang.subjectstroGiang;
	}
	void input(istream& ist) {
		i.input(ist);
		cout << "Nhap so mon tro giang cua nguoi do: " << endl;
		ist >> subjectstroGiang;
		ist.ignore(1);
	}
	void output(ostream& ostt) {
		i.output(ostt);
		ostt << "So mon tro giang cua nguoi do: " << endl;
		ostt << subjectstroGiang << endl;
	}
	staff* faker() {
		return new troGiang(*this);
	}
	string getName() {
		return "TroGiang";
	}
	string getNumOfStaff() {
		return i.getNumOfStaff();
	}

};
class nghienCuuVien :public staff {
	vector<string> linkList;
	double kinhNghiem;
	in4 i;
public:
	nghienCuuVien() {
		kinhNghiem = 0;
	}
	nghienCuuVien(const nghienCuuVien& ncv) {
		this->i = ncv.i;
		for (int i = 0; i < ncv.linkList.size(); i++) {
			linkList[i] = ncv.linkList[i];
		}
		this->kinhNghiem = ncv.kinhNghiem;
	}
	void input(istream& ist) {
		i.input(ist);
		cout << "Nhap so nam nghien cuu cua nguoi do: " << endl;
		ist >> kinhNghiem;
		ist.ignore(1);
		int choice;
		string projects;
		while (1) {
			cout << "Nhap ma du an nghien cuu cua nguoi do: " << endl;
			getline(ist, projects);
			linkList.push_back(projects);
			cout << "Tiep tuc hay khong? (1 neu co, 0 neu khong) (1/0): " << endl;
			ist >> choice;
			ist.ignore(1);
			if (choice != 1) {
				break;
			}
		}
	}
	void output(ostream& ostt) {
		i.output(ostt);
		ostt << "So nam nghien cuu cua nguoi do: " << kinhNghiem << endl;
		for (int i = 0; i < linkList.size(); i++) {
			ostt << linkList[i] << " ";
		}
		ostt << endl;
	}
	staff* faker() {
		return new nghienCuuVien(*this);
	}
	string getName() {
		return "nghienCuuVien";
	}
	string getNumOfStaff() {
		return i.getNumOfStaff();
	}
};
class chuyenVien :public staff {
	vector<string> linkList;
	double kinhNghiem;
	in4 i;
public:
	chuyenVien() {
		kinhNghiem = 0;
	}
	chuyenVien(const chuyenVien& cv) {
		this->i = cv.i;
		for (int i = 0; i < cv.linkList.size(); i++) {
			linkList[i] = cv.linkList[i];
		}
		this->kinhNghiem = cv.kinhNghiem;
	}
	void input(istream& ist) {
		i.input(ist);
		cout << "Nhap so nam nghien cuu cua nguoi do: ";
		ist >> kinhNghiem;
		ist.ignore(1);
		int choice;
		string projects;
		while (1) {
			cout << "Nhap ma du an nghien cuu cua nguoi do: ";
			getline(ist, projects);
			linkList.push_back(projects);
			cout << "Tiep tuc hay khong (1 neu co, 0 neu khong)?(1/0): " << endl;
			ist >> choice; ist.ignore(1);
			if (choice != 1) {
				break;
			}
		}
	}
	void output(ostream& ost) {
		i.output(ost);
		ost << "So nam nghien cuu cua nguoi do: " << kinhNghiem << endl;
		for (int i = 0; i < linkList.size(); i++) {
			ost << linkList[i] << " ";
		}
		ost << endl;
	}
	string getName() {
		return "ChuyenVien";
	}
	staff* faker() {
		return new chuyenVien(*this);
	}
	string getNumOfStaff() {
		return i.getNumOfStaff();
	}
};
class thucTapSinh :public staff {
	vector<string> linkList;
	double kinhNghiem;
	in4 i;
public:
	thucTapSinh() {
		kinhNghiem = 0;
	}
	thucTapSinh(const thucTapSinh& tts) {
		this->i = tts.i;
		for (int i = 0; i < tts.linkList.size(); i++) {
			linkList[i] = tts.linkList[i];
		}
		this->kinhNghiem = tts.kinhNghiem;
	}
	void input(istream& ist) {
		i.input(ist);
		cout << "Nhap so thang nghien cuu cua nguoi do: "; ist >> kinhNghiem; ist.ignore(1);
		int choice;
		string projects;
		while (1) {
			cout << "Nhap ma du an nghien cuu cua nguoi do: ";
			getline(ist, projects);
			linkList.push_back(projects);
			cout << "Tiep tuc hay khong? (1 neu co, 2 neu khong) (1/0): " << endl;
			ist >> choice; ist.ignore(1);
			if (choice != 1) {
				break;
			}
		}
	}
	void output(ostream& ost) {
		i.output(ost);
		ost << "So thang nghien cuu: " << kinhNghiem << endl;
		for (int i = 0; i < linkList.size(); i++) {
			ost << linkList[i] << " ";
		}
		ost << endl;
	}
	string getName() {
		return "thucTapSinh";
	}
	staff* faker() {
		return new thucTapSinh(*this);
	}
	string getNumOfStaff() {
		return i.getNumOfStaff();
	}
};
class PhongQuanLy {
	vector<staff*>linkList;
public:
	void add(staff* a) {
		staff::addStaff(a);
	}
	void addByName(string name) {
		staff* nv = staff::createStaff(name);
		linkList.push_back(nv);
	}
	void out() {
		cout << "*******************************************" << endl;
		for (int i = 0; i < linkList.size(); i++) {
			linkList[i]->output(cout);
		}
	}
	void xoaBangMS() {
		string ms;
		cout << "Nhap ma so muon xoa: ";
		getline(cin, ms);
		vector<staff*>::iterator ptr = linkList.begin();
		for (int i = 0; i < linkList.size(); i++) {
			if (ms == linkList[i]->getNumOfStaff()) {
				linkList.erase(ptr + i);
				i--;
			}
		}
	}
	~PhongQuanLy() {
	}
};
#endif