#include "Draw.h"


void DrawBoard(int x, int y, int height, int width) {
	system("cls");
	SetColor(Red);
	//Vẽ cột bên trái
	for (int i = 0; i < height; ++i) {
		GotoXY(x, y + i); cout << char(219);
	}
	//Vẽ cột trên cùng
	for (int i = 0; i < width; ++i) {
		GotoXY(x + i, y); cout << char(220);
	}
	//Vẽ cột bên phải
	for (int i = 1; i < height; ++i) {
		GotoXY(x + width - 1, y + i); cout << char(219);
	}
	//Vẽ cột dưới cùng
	for (int i = 1; i < width - 1; ++i) {
		GotoXY(x + i, y + height - 1); cout << char(220);
	}
	//Vẽ các cột ở giữa
	for (int i = 1; i < width - 1; ++i)
	{
		GotoXY(x + i, y + 5); cout << char(220);
		GotoXY(x + i, y + 10); cout << char(220);
		GotoXY(x + i, y + 15); cout << char(220);
		GotoXY(x + i, y + 20); cout << char(220);
		GotoXY(x + i, y + 25); cout << char(220);
		GotoXY(x + i, y + 30); cout << char(220);

	}
	GotoXY(x, y);
	SetColor(15);
}

void DrawTurorialBoard(int x, int y, int width, int height) {
	SetColor(Yellow);
	//Vẽ cột bên trái
	for (int i = 0; i < height; i++)
	{
		GotoXY(x + 30, y + i); cout << char(219);
	}
	//Vẽ cột trên cùng
	for (int i = 0; i < width; i++)
	{
		GotoXY(x + i + 30, y); cout << char(220);
	}
	//Vẽ cột bên phải
	for (int i = 1; i < height; i++)
	{
		GotoXY(x + width - 1 + 30, y + i); cout << char(219);
	}
	//Vẽ cột dưới cùng
	for (int i = 1; i < width - 1; i++)
	{
		GotoXY(x + i + 30, y + height - 1); cout << char(220);
	}
	SetColor(Cyan);

	GotoXY(BoardX + BoardWidth + 40, BoardY + line3 + 7);
	cout << "Press W - Move Up";
	GotoXY(BoardX + BoardWidth + 40, BoardY + line3 + 10);
	cout << "Press A - Move Left";
	GotoXY(BoardX + BoardWidth + 40, BoardY + line3 + 13);
	cout << "Press W - Move Right";
	GotoXY(BoardX + BoardWidth + 40, BoardY + line3 + 16);
	cout << "Press S - Move Down";
	SetColor(White);
}



void DrawCar(int x, int y) {
	GotoXY(x, y);     cout << "     ______ ";
	GotoXY(x, y + 1); cout << " ___/__|___\\_ ";
	GotoXY(x, y + 2); cout << "/_____________\\";
	GotoXY(x, y + 3); cout << "  (0)     (0) ";

}

void DrawAmbulance(int x, int y) {
	GotoXY(x, y);     cout << "  ________________          ";
	GotoXY(x, y + 1); cout << "/      _     |     \\________ ";
	GotoXY(x, y + 2); cout << "|    _| |_   |     |   |    \\";
	GotoXY(x, y + 3); cout << "|   |_   _|  |_____|   |_____\\";
	GotoXY(x, y + 4); cout << "|     |_|          |          \\";
	GotoXY(x, y + 5); cout << "\\__________________|___________|";
	GotoXY(x, y + 6); cout << "  (O)                   (O)  ";
}

void EraseAmbulance(int x, int y) {
	GotoXY(x, y); cout << " ";
	GotoXY(x, y + 1); cout << " ";
	GotoXY(x, y + 2); cout << " ";
	GotoXY(x, y + 3); cout << " ";
	GotoXY(x, y + 4); cout << " ";
	GotoXY(x, y + 5); cout << " ";
	GotoXY(x, y + 6); cout << " ";
}
void EraseCarFrist(int x, int y) {
	GotoXY(x, y);     cout << "                ";
	GotoXY(x, y + 1); cout << "                ";
	GotoXY(x, y + 2); cout << "                ";
	GotoXY(x, y + 3); cout << "                ";
}

void EraseCarLast(int x, int y) {
	GotoXY(x + Max_CarLength - 2, y);     cout << "                ";
	GotoXY(x + Max_CarLength - 2, y + 1); cout << "                ";
	GotoXY(x + Max_CarLength - 2, y + 2); cout << "                ";
	GotoXY(x + Max_CarLength - 2, y + 3); cout << "                ";
}



void Sticker(int x, int y) {
	GotoXY(x, y);      cout << " O ";
	GotoXY(x, y + 1);  cout << "/|\\  ";
	GotoXY(x, y + 2);  cout << "/ \\";
}
void DrawSticker(const POINT& p) {
	GotoXY(p.x, p.y);
	Sticker(p.x, p.y);
}

void EraseSticker(int x, int y) {
	GotoXY(x, y);     cout << "    ";
	GotoXY(x, y + 1); cout << "    ";
	GotoXY(x, y + 2); cout << "    ";
}


void DrawScoreBoard(int x, int y, int width, int height) {
	SetColor(Yellow);
	//Vẽ cột bên trái
	for (int i = 0; i < height; i++)
	{
		GotoXY(x + 30, y + i); cout << char(219);
	}
	//Vẽ cột trên cùng
	for (int i = 0; i < width; i++)
	{
		GotoXY(x + i + 30, y); cout << char(220);
	}
	//Vẽ cột bên phải
	for (int i = 1; i < height; i++)
	{
		GotoXY(x + width - 1 + 30, y + i); cout << char(219);
	}
	//Vẽ cột dưới cùng
	for (int i = 1; i < width - 1; i++)
	{
		GotoXY(x + i + 30, y + height - 1); cout << char(220);
	}
	SetColor(Cyan);

	GotoXY(BoardX + BoardWidth + 45, BoardY + line3);
	cout << "Press P to Pause Game.";
	GotoXY(BoardX + BoardWidth + 45, BoardY + line3 + 1);
	cout << "Press L to Save Game.";
	SetColor(White);
}

void D100(int x, int y) {
	SetColor(White);
	GotoXY(x + 40, y - 2); cout << "        Your Score :";
	GotoXY(x + 35, y);	   cout << "  ###   ######    ###### ";
	GotoXY(x + 35, y + 1); cout << "  ###  ########  ########";
	GotoXY(x + 35, y + 2); cout << "  ###  ###  ###  ###  ###";
	GotoXY(x + 35, y + 3); cout << "  ###  ########  ########";
	GotoXY(x + 35, y + 4); cout << "  ###   ######    ###### ";
}

void D200(int x, int y) {
	SetColor(White);
	GotoXY(x + 40, y - 2); cout << "         Your Score :";
	GotoXY(x + 30, y);     cout << "  #######   ######    ###### ";
	GotoXY(x + 30, y + 1); cout << "      ###  ########  ########";
	GotoXY(x + 30, y + 2); cout << "  #######  ###  ###  ###  ###";
	GotoXY(x + 30, y + 3); cout << "  ###      ########  ########";
	GotoXY(x + 30, y + 4); cout << "  #######   ######    ###### ";
}

void D300(int x, int y) {
	SetColor(White);
	GotoXY(x - 10, y - 2); cout << "         Your Score :";
	GotoXY(x - 10, y);     cout << "  #######   ######    ###### ";
	GotoXY(x - 10, y + 1); cout << "      ###  ########  ########";
	GotoXY(x - 10, y + 2); cout << "  #######  ###  ###  ###  ###";
	GotoXY(x - 10, y + 3); cout << "      ###  ########  ########";
	GotoXY(x - 10, y + 4); cout << "  #######   ######    ###### ";
}

void D0(int x, int y) {
	SetColor(White);
	GotoXY(x + 30, y - 2); cout << "          Your Score :";
	GotoXY(x + 30, y);     cout << "            ###### ";
	GotoXY(x + 30, y + 1); cout << "           ########";
	GotoXY(x + 30, y + 2); cout << "           ###  ###";
	GotoXY(x + 30, y + 3); cout << "           ########";
	GotoXY(x + 30, y + 4); cout << "            ###### ";
}