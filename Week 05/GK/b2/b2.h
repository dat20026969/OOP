#ifndef _b2_
#define _b2_
#include <iostream>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
using namespace std;
class Film{ //Thong tin ve phim
	string nameFilm;
	int time;
	int yearPublic;
public:


};
class cinemaRoom { //Thong tin ve phong chieu
	string nameRoom;
	int totalChair;

public:

};
class rowChair { //Thong tin hang ghe
	char chairSeat;

public:

};
class chair { //Thong tin ghe ngoi
	int chairNumber;

	string status;
	string typeOfChair;

public:
};
class filmSchedule { //Lich chieu phim

};
#endif