#include "ngay2.h"
#include "thongtin2.h"
class staff {
private:
	static vector<staff*> objects;
public:

	virtual staff* faker() = 0;
	virtual string getName() = 0;

	static void addStaff(staff* nv) {
		if (nv == NULL) {
			return;
		}
		int positions = -1;
		for (int i = 0; i < objects.size(); i++) {
			staff* mau = objects[i];
			if (mau->getName() == nv->getName()) {
				positions = i;
			}
		}
		if (positions == -1) {
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
	virtual void output(ostream& ost) = 0;
};
class GiangVien :public staff {
	in4 i;
	string acaRank;
	string degree;
	int subjects;
	int years;
	vector<string> monHoc;
public:
	GiangVien() {
		acaRank = "";
		degree = "";
		subjects = 0;
		years = 0;
	}
	GiangVien(const GiangVien& gv) {
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
	virtual void input(istream& ist) {
		i.input(ist);
		cout << "Nhap hoc ham cua nguoi do: " << endl;
		getline(ist, acaRank);
		cout << "Nhap hoc vi cua nguoi do: " << endl;
		getline(ist, degree);
		cout << "So nam giang day cua nguoi do: " << endl;
		ist >> years;
		ist.ignore(1);
		int choice;
		while (1) {
			string mon;
			cout << "Nhap mon hoc dang day: ";
			getline(ist, mon);
			monHoc.push_back(mon);
			cout << "Tiep tuc hay khong (1 neu co, 0 neu khong)? (1/0): " << endl;
			ist >> choice;
			ist.ignore(1);
			if (choice != 1) {
				break;
			}
		}
		subjects = monHoc.size();
	}
	virtual staff* faker() {
		return new GiangVien(*this);
	}

	void output(ostream& ost) {
		i.output(ost);
		ost << "Hoc Ham cua nguoi do: " << acaRank << endl;
		ost << "Hoc Vi cua nguoi do: " << degree << endl;
		ost << "So Mon cua nguoi do: " << subjects << endl;
		ost << "So Nam cua nguoi do: " << years << endl;
		ost << "So mon giang day cua nguoi do: ";
		for (int i = 0; i < monHoc.size(); i++) {
			ost << monHoc[i] << " ";
		}
		ost << endl;
	}
};
class TroGiang :public staff {
	in4 i;
	int subjectsTroGiang;
public:
	TroGiang() {
		subjectsTroGiang = 0;
	}
	TroGiang(const TroGiang& tg) {
		this->i = tg.i;
		this->subjectsTroGiang = tg.subjectsTroGiang;
	}
	void input(istream& ist) {
		i.input(ist);
		cout << "Nhap so mon tro giang cua nguoi do: ";
		ist >> subjectsTroGiang;
		ist.ignore(1);
	}
	void output(ostream& ost) {
		i.output(ost);
		ost << "So mon tro giang cua nguoi do: ";
		ost << subjectsTroGiang << endl;
	}
	staff* faker() {
		return new TroGiang(*this);
	}
	string getName() {
		return "TroGiang";
	}
	string getNumOfStaff() {
		return i.getNumOfStaff();
	}

};
class NghienCuuVien :public staff {
	vector<string> linkList;
	double kinhNghiem;
	in4 i;
public:
	NghienCuuVien() {
		kinhNghiem = 0;
	}
	NghienCuuVien(const NghienCuuVien& ncv) {
		this->i = ncv.i;
		for (int i = 0; i < ncv.linkList.size(); i++) {
			linkList[i] = ncv.linkList[i];
		}
		this->kinhNghiem = ncv.kinhNghiem;
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
			cout << "Tiep tuc hay khong (1 neu co, 0 neu khong)? (1/0): ";
			ist >> choice;
			ist.ignore(1);
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
	staff* faker() {
		return new NghienCuuVien(*this);
	}
	string getName() {
		return "NghienCuuVien";
	}
	string getNumOfStaff() {
		return i.getNumOfStaff();
	}
};
class ChuyenVien :public staff {
	vector<string> linkList;
	double kinhNghiem;
	in4 i;
public:
	ChuyenVien() {
		kinhNghiem = 0;
	}
	ChuyenVien(const ChuyenVien& cv) {
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
			cout << "Tiep tuc hay khong (1 neu co, 0 neu khong)? (1/0): ";
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
		return new ChuyenVien(*this);
	}
	string getNumOfStaff() {
		return i.getNumOfStaff();
	}
};
class ThucTapSinh :public staff {
	vector<string> linkList;
	double kinhNghiem;
	in4 i;
public:
	ThucTapSinh() {
		kinhNghiem = 0;
	}
	ThucTapSinh(const ThucTapSinh& tts) {
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
			cout << "Tiep tuc hay khong (1 neu co, 0 neu khong)? (1/0): ";
			ist >> choice; ist.ignore(1);
			if (choice != 1) {
				break;
			}
		}
	}
	void output(ostream& ost) {
		i.output(ost);
		ost << "So thang nghien cuu cua nguoi do: " << kinhNghiem << endl;
		for (int i = 0; i < linkList.size(); i++) {
			ost << linkList[i] << " ";
		}
		ost << endl;
	}
	string getName() {
		return "ThucTapSinh";
	}
	staff* faker() {
		return new ThucTapSinh(*this);
	}
	string getNumOfStaff() {
		return i.getNumOfStaff();
	}
};
class PhongQuanLy {
private:
	static PhongQuanLy* instance;
	vector<staff*> linkList;

public:
	static PhongQuanLy* getInstance() {
		if (instance == NULL) {
			instance = new PhongQuanLy();
		}
		return instance;
	}
	void add(staff* a) {
		staff::addStaff(a);
	}
	void addByName(string name) {
		staff* nv = staff::createStaff(name);
		linkList.push_back(nv);
	}
	void out() {
		for (int i = 0; i < linkList.size(); i++) {
			linkList[i]->output(cout);
		}
	}
	static void deleteInstance() {
		if (instance) {
			delete instance;
			instance = NULL;
		}
	}
	void xoaTheoMS() {
		string ms;
		cout << "Nhap ms ban muon xoa: ";
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