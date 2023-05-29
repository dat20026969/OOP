#include "b1.h"
car::car() {
    model = " ";
    color = " ";
    type = " ";
}

car::car(string model, string color,string type) {
    car::model = model;
    car::color = color;
    car::type = type;
}

void car::setModel(string model) {
    car::model = model;
}

void car::setColor(string color) {
    car::color = color;
}

void car::setType(string type) {
    car::type = type;
}

string car::getModel() {
    return model;
}
string car::getColor() {
    return color;
}

string car::getType() {
    return type;
}
istream& operator>>(istream& ist, car& msn) {
	cout << "Nhap thong tin xe: ";
	ist >> msn.model >> msn.color >> msn.type;
	return ist;
}
ostream& operator<<(ostream& ost, car& msn) {
    ost << msn.model << msn.color << msn.type;
	ost << endl;
	return ost;
}
//xeThuongMai::mauXe(string) {
//    return car;
//}
//xeThuongMai::giaBan(int a) {
//    return sell;
//}
istream& operator>>(istream& ist, xeThuongMai& msn) {

}
ostream& operator<<(ostream& ost, xeThuongMai& msn) {

}