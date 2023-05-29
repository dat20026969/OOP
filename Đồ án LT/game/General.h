#include <windows.h>
#include <iostream>
#include <time.h>
#include <thread>
#include <conio.h>
#include <string>
#include <fstream>
#include <MMSystem.h>

using namespace std;

#define Black          0
#define Blue           1
#define Green          2
#define Cyan           3
#define Red            4
#define Magenta        5
#define Brown          6
#define LightGray      7
#define DarkGray       8
#define LightBlue      9
#define LightGreen    10
#define LightCyan     11
#define LightRed      12
#define Ligh Magenta  13
#define Yellow        14
#define White         15

//Hàm cố định kích cỡ khung cmd
void FixConsoleWindow();

//Hàm thay đổi kích cỡ của khung cmd
void resizeConsole(int, int);

void SetColor(int);

void ClearConsoleToColors(int ForgC, int BackC);

void XoaManHinh();

void removeScrollBar();

void fullscreen();

void GotoXY(int, int);

void AnTroChuot();
void HienTroChuot();