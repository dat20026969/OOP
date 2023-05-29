#include "General.h"
#include "Graphic.h"

#define BoardX 10
#define BoardY 5
#define BoardHeight 35
#define BoardWidth 100
#define line1 6
#define line2 11
#define line3 16
#define line4 21
#define line5 26
#define Max_Car 5
#define Max_CarLength 15
#define Max_Speed 200
#define Line 5
#define ScoreX 120
#define ScoreY 13
#define Level1 400
#define Level2 300
#define Level3 200

void DrawBoard(int x, int y, int height, int width);

void DrawTurorialBoard(int x, int y, int width, int height);

void DrawCar(int x, int y);

void EraseCarFrist(int x, int y);

void EraseCarLast(int x, int y);

void Sticker(int x, int y);

void EraseSticker(int x, int y);

void DrawSticker(const POINT& p);

void DrawAmbulance(int x, int y);

void EraseAmbulance(int x, int y);

void DrawScoreBoard(int x, int y, int height, int width);

void D100(int x, int y);

void D300(int x, int y);

void D200(int x, int y);

void D0(int x, int y);