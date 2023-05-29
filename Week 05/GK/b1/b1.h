#ifndef _b1_
#define _b1_
#include <iostream>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <fstream>
#include <functional>
using namespace std;
class car {
protected:
    string model; // model
    string color;  // color    
    string type;  //Type of vehicle
public:
    void newVehicle(string a, string b, string c) {
        type = a;
        model = b;
        color = c;
    }
    car(); //Default constructor
    car(string model, string color, string type);
    //mutator and accessor functions
    void setModel(string);
    void setColor(string);
    void setType(string);

    string getModel();
    string getColor();
    string getType();    

    //virtual function
    virtual void details() {
    }
    friend istream& operator>>(istream& ist, car& msn);
    friend ostream& operator<<(ostream& ost, car& msn);
};
//Sets to default values
class xeThuongMai {
protected:
    class car;
    int sell;
    string bienSoXe;
public:
    void mauXe(string);
    friend istream& operator>>(istream& ist, xeThuongMai& msn);
    friend ostream& operator<<(ostream& ost, xeThuongMai& msn);
};


#endif