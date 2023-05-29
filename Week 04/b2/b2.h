#ifndef _b2_
#define _b2_
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;
#pragma pack 1
class Skill {
	string skillName;
	unsigned int skillLevel;
public:
	//Setter skill name
	void namingSkill(string name) {
		this->skillName = name;
	}
	void namingSkill() {
		string name;
		cout << "Nhap ten skill: ";
		getline(cin, name);
		this->skillName = name;
	}

	//Setter level skill
	void takeLevelSkill(unsigned int level) {
		this->skillLevel = level;
	}
	void takeLevelSkill() {
		unsigned int level;
		cout << "Nhap level can de hoc skill: ";
		cin >> level;
		cin.ignore(1);
		this->skillLevel = level;
	}
	//Getter skill name
	string getNameSkill() {
		return skillName;
	}
	int getLevelSkill() {
		return skillLevel;
	}
	// contructor skill
	Skill() {
		skillName = "";
		skillLevel = 0;
	}
	Skill(string name, unsigned int level) {
		skillName = name;
		skillLevel = level;
	}
	Skill(const Skill& b) {
		this->skillLevel = b.skillLevel;
		this->skillName = b.skillName;
	}

	void inputSkill() {
		namingSkill();
		takeLevelSkill();
	}
	void outputSkill() {
		cout << skillName << " " << skillLevel << endl;
	}
};
class Hero {
	string heroName;
	unsigned int heroHealth;
	unsigned int heroMana;
	unsigned int heroLevel;
	vector<Skill* > skillList;
public:
	///Set champ health
	void mauTuong(unsigned int a) {
		this->heroHealth = a;
	}
	void mauTuong() {
		unsigned int a;
		cout << "Nhap HP cua tuong ban da pick: ";
		cin >> a;
		heroHealth = a;
	}
	void manaTuong(unsigned int b) {
		this->heroMana = b;
	}
	void manaTuong() {
		unsigned int b;
		cout << "Nhap Mana cua tuong ban da pick: ";
		cin >> b;
		heroMana = b;
	}
	void tenTuong(string c) {
		this->heroName = c;
	}
	void tenTuong() {
		string c;
		cout << "Nhap ten tuong ban da pick: ";
		getline(cin, c);
		heroName = c;
	}
	void capDoTuong(unsigned int d) {
		this->heroLevel = d;
	}
	void capDoTuong() {
		unsigned int d;
		cout << "Nhap level cua tuong ban da pick: ";
		cin >> d;
		cin.ignore(1);
		heroLevel = d;
	}
/*Cái này em không biết nói sao, nói thiệt tại câu 2 em không biết làm, em có tham khảo bài các bạn thì thấy các cách đều như nhau, nên em không tham khảo nữa.
Em sẽ không làm như các bạn, thà em vậy, chư lỡ làm giống bài bạn thì ăn 0 điểm là ăn cám cả môn, nhà không có tiền để học lại rồi ạ...*/
};

#endif