#include "GamePlay.h"

POINT Y;//Người qua đường
POINT* X;
int Speedup = 0, MOVE, Speed = 1;
bool STATE;
int ok = 1;
int score = 0;
string NAME;
POINT A = { 0,0 };
POINT B = { 1,0 };

void Input() {
	system("cls");
	HienTroChuot();
	for (int i = 0; i < 40; ++i) {
		GotoXY(85 + i, 19); cout << char(220);
	}
	for (int i = 0; i < 40; ++i) {
		GotoXY(85 + i, 21); cout << char(220);
	}
	GotoXY(85, 20); cout << "ENTER YOUR NAME: "; getline(cin, NAME);
	AnTroChuot();
}

void ResetData() {
	A = { 1,0 };
	B = { 0,0 };
	NAME = "\0";
	MOVE = 'D';
	Speed = 1;
	ok = 1;
	Y = { BoardX + 5,BoardY + BoardHeight - 4 };
	if (X == NULL) {
		X = new POINT[Max_Car];
	}
	int line = BoardY + line1;
	X[0].x = BoardX + 5;
	X[0].y = line;
	X[1].x = BoardX + BoardWidth - 15 - 10;
	X[1].y = line + 5;
	X[2].x = BoardX + 2 * Max_CarLength - 7;
	X[2].y = line + 5 + 5;
	X[3].x = BoardX + 8;
	X[3].y = line + 15;
	X[4].x = BoardX + BoardWidth - 15 - 10;
	X[4].y = line + 20;
	score = 0;
}

void StartGame() {
	system("cls");
	ResetData();
	Input();
	DrawBoard(BoardX, BoardY, BoardHeight, BoardWidth);
	DrawScoreBoard(BoardX + BoardWidth + 6, BoardY, 40, 20);
	DrawTurorialBoard(BoardX + BoardWidth + 6, BoardY + 20, 40, 15);
	GotoXY(ScoreX + 40, ScoreY - 3); cout << "YOUR NAME: " << NAME;
	STATE = true;
}

void ExitGame() {
	system("cls");
	if (X != NULL) { //xoa data
		delete[]X;
		X = NULL;
	}
	exit(0);
}


void PauseGame(HANDLE t) {
	SuspendThread(t);
}

void ProcessDead() {
	STATE = 0;
	BeforeDead();
	system("cls");
	Dead();
	SetColor(Cyan);
	GotoXY(79, 36); cout << "PRESS Y TO PLAY AGAIN";
	GotoXY(79, 37); cout << "PRESS ENTER TO EXIT";
	if (score == 0) D0(70, 30);
	if (score == 100) D100(70, 30);
	if (score == 200) D200(70, 30);
	if (score == 300) D300(70, 30);
}

void ProcessFinish(POINT& p) {
	p = { BoardX + 5,BoardY + BoardHeight - 4 };
	MOVE = 'D';
	++ok;
	score += 100;
}

void Win() {
	system("cls");
	STATE = 0;
	for (int j = 0; j < 2; j++) {
		for (int i = 9; i < 12; i++) {
			GotoXY(50, 15); SetColor(i); cout << " YYY       YYY      0000      UUU       UUU             WWW            WWWW         WWW    IIIIIIIII  NNNN        NN";
			GotoXY(50, 16); SetColor(i); cout << "  YYY     YYY     00000000	UUU       UUU             WWW           WWWWWW        WWW       III     NNNNN       NN";
			GotoXY(50, 17); SetColor(i); cout << "   YYY   YYY     000    000	UUU       UUU             WWW         WWW  WWW        WWW       III     NNN NNN     NN";
			GotoXY(50, 18); SetColor(i); cout << "    YYYYYYY     000      000	UUU       UUU              WWW       WWW    WWW       WWW       III     NNN  NNN    NN";
			GotoXY(50, 19); SetColor(i); cout << "      YYY       000      000	UUU       UUU               WWW     WWW      WWW     WWW        III     NNN   NNN   NN";
			GotoXY(50, 20); SetColor(i); cout << "      YYY       000      000	UUU       UUU                WWW   WWW        WWW   WWW         III     NNN    NNN  NN";
			GotoXY(50, 21); SetColor(i); cout << "      YYY        000    000	 UUU	 UUU                  WWW WWW          WWW WWW          III     NNN     NNN NN";
			GotoXY(50, 22); SetColor(i); cout << "      YYY         00000000	  UUUUUUUUU                    WWWWW            WWWWW           III     NNN      NNNNN";
			GotoXY(50, 23); SetColor(i); cout << "      YYY          0000           UUUUU                       WWW              WWW         IIIIIIIII  NNN       NNNN";
			Sleep(200);
		}
	}
	D300(90, 30);
	GotoXY(90, 36); cout << "PRESS Y TO PLAY AGAIN";
	GotoXY(90, 37); cout << "PRESS ENTER TO EXIT";
}



bool IsImpact(const POINT& p, int d) {

	if (d == BoardY + BoardHeight - 4) return false;
	for (int i = 0; i < Max_Car; i++) {
		if ((p.x == X[i].x || p.x == X[i].x + Max_CarLength - 1 || p.x > X[i].x && p.x < X[i].x + Max_CarLength - 1) && (p.y == X[i].y)) return true;
	}
	if (p.x == A.x && p.y == A.y)
		return true;
	if (p.x == B.x && p.y == B.y)
		return true;
	return false;
}


void MoveCars() {
	for (int i = 1; i < Max_Car; i += 2) {
		Speedup = 0;
		while (Speedup < Speed) {
			Speedup++;
			if (X[i].x == BoardX + BoardWidth - Max_CarLength - 5) {
				EraseCarLast(BoardX + BoardWidth - 2 * Max_CarLength - 5, X[i].y);
				X[i].x = BoardX + 5;
			}
			else X[i].x++;
		}
	}
	for (int i = 0; i < Max_Car; i += 2) {
		Speedup = 0;
		while (Speedup < Speed) {
			Speedup++;
			if (X[i].x == BoardX + 4)
			{
				EraseCarFrist(BoardX + 4, X[i].y);
				X[i].x = BoardX + BoardWidth - Max_CarLength - 5;
			}
			else X[i].x--;
		}
	}
}




void MoveRight() {
	if (Y.x > (BoardX + 1) && Y.x < (BoardX + BoardWidth - 1)) {
		EraseSticker(Y.x, Y.y);
		Y.x = Y.x + 6;
		DrawSticker(Y);
	}
}

void MoveLeft() {

	if (Y.x > (BoardX + 1) && Y.x < (BoardX + BoardWidth - 1)) {
		EraseSticker(Y.x, Y.y);
		Y.x = Y.x - 6;
		DrawSticker(Y);
	}
}

void MoveDown() {
	if (Y.y > (BoardY + 1) && Y.y < (BoardY + BoardHeight - 3)) {
		EraseSticker(Y.x, Y.y);
		Y.y = Y.y + 5;
		DrawSticker(Y);
	}
}

void MoveUp() {
	if (Y.y > (BoardY + 1) && Y.y < (BoardY + BoardHeight - 3)) {
		EraseSticker(Y.x, Y.y);
		Y.y = Y.y - 5;
		DrawSticker(Y);
	}
}

void SubThread() {
	while (1) {
		if (STATE) {
			switch (MOVE) {
			case 'A':
				MoveLeft();
				break;
			case 'D':
				MoveRight();
				break;
			case 'W':
				MoveUp();
				break;
			case 'S':
				MoveDown();
				break;

			}
			MOVE = ' ';
		}
		int l = 0;
		int c = 0;
		for (int i = 1; i < Max_Car; i += 2) {
			EraseCarFrist(X[i].x - 4, X[i].y);
			MoveCars();
			DrawCar(X[i].x, X[i].y);
		}
		for (int i = 0; i < Max_Car; i += 2) {
			EraseCarLast(X[i].x - 10, X[i].y);
			MoveCars();
			DrawCar(X[i].x, X[i].y);
		}
		if (score == 0) {
			D0(ScoreX, ScoreY);
		}
		if (IsImpact(Y, Y.y)) {
			ProcessDead(); // Chet
			break;
		}

		if (Y.y > BoardY && Y.y < BoardY + line1) {
			if (ok == 1) {
				A = Y;
			}
			if (ok == 2)
				B = Y;
			if (ok != 3) {
				ProcessFinish(Y);
			}
			else {
				Win();
				break;
			}
		}

		if (ok == 1) {
			Sleep(Level1);
		}
		else if (ok == 2) {
			Sleep(Level2);
		}
		else if (ok == 3) {
			Sleep(Level3);
		}
		if (score == 100) D100(ScoreX, ScoreY);
		else if (score == 200) D200(ScoreX, ScoreY);
		else if (score == 300) D300(ScoreX, ScoreY);
	}
}

void Intro() {
	system("cls");
	SetColor(LightGreen);
	GotoXY(15, 6);   cout << "    CCCCCCCCCC     RRRRRRRRRRRRR            OOOOOOO            SSSSSSSSS              SSSSSSSSS     ";
	GotoXY(15, 7);   cout << "  CCCCCCCCCCCCCC   RRRRRRRRRRRRRRR        OOOOOOOOOOO        SSSSSSSSSSSSS          SSSSSSSSSSSSS   ";
	GotoXY(15, 8);   cout << " CCCCCC      CCCC  RRRR      RRRRR      OOOOO     OOOOO     SSSS         S         SSSS         S   ";
	GotoXY(15, 9);   cout << " CCCCC             RRRR       RRRR     OOOO         OOOO    SSSS                   SSSS				";
	GotoXY(15, 10);  cout << " CCCC              RRRR      RRRR      OOOO         OOOO    SSSSSSSSSSSSSS         SSSSSSSSSSSSSS     ";
	GotoXY(15, 11);  cout << " CCCC              RRRRRRRRRRRR        OOOO         OOOO     SSSSSSSSSSSSSS         SSSSSSSSSSSSSS    ";
	GotoXY(15, 12);  cout << " CCCC              RRRRRRRRRRRRRR      OOOO         OOOO      SSSSSSSSSSSSSS         SSSSSSSSSSSSSS   ";
	GotoXY(15, 13);  cout << " CCCCC             RRRR      RRRRR     OOOO         OOOO                SSSS                   SSSS  ";
	GotoXY(15, 14);  cout << " CCCCCC      CCCC  RRRR       RRRRR     OOOOO     OOOOO       S         SSSS         S         SSSS   ";
	GotoXY(15, 15);  cout << "  CCCCCCCCCCCCCC   RRRR       RRRRRR      OOOOOOOOOOO         SSSSSSSSSSSSS          SSSSSSSSSSSSS    ";
	GotoXY(15, 16);  cout << "    CCCCCCCCCC     RRRR      RRRRRRRRR      OOOOOOO             SSSSSSSSS              SSSSSSSSS     ";
	SetColor(LightBlue);
	GotoXY(60, 19);  cout << " TTTTTTTTTTTTTTTTTT  HHHHHH      HHHHHHH  EEEEEEEEEEEEEEE           RRRRRRRRRRRRRR         OOOOOOO           AAAAAAAAA       DDDDDDDDDDDDD";
	GotoXY(60, 20);  cout << "TTTTTTTTTTTTTTTTTTTT   HHHH      HHHH      EEEEEEEEEEEEEE           RRRRRRRRRRRRRRRR     OOOOOOOOOOO        AAAAAAAAAAA       DDDDDDDDDDDDD";
	GotoXY(60, 21);  cout << "TT      TTTT      TT   HHHH      HHHH      EEEE         E           RRRR       RRRRR   OOOOO     OOOOO     AAAA     AAAA      DDDD      DDDD";
	GotoXY(60, 22);  cout << "        TTTT           HHHH      HHHH      EEEE                     RRRR        RRRR  OOOO         OOOO   AAAA       AAAA     DDDD       DDDD   ";
	GotoXY(60, 23);  cout << "        TTTT           HHHH      HHHH      EEEE        EE           RRRR       RRRR   OOOO         OOOO  AAAA         AAAA    DDDD        DDDD  ";
	GotoXY(60, 24);  cout << "        TTTT           HHHHHHHHHHHHHH      EEEEEEEEEEEEEE           RRRRRRRRRRRRR     OOOO         OOOO  AAAAAAAAAAAAAAAAAA   DDDD        DDDD";
	GotoXY(60, 25);  cout << "        TTTT           HHHHHHHHHHHHHH      EEEE        EE           RRRRRRRRRRRRRR    OOOO         OOOO  AAAAAAAAAAAAAAAAAA   DDDD        DDDD";
	GotoXY(60, 26);  cout << "        TTTT           HHHH      HHHH      EEEE                     RRRR      RRRRR   OOOO         OOOO  AAAA          AAAA   DDDD       DDDD";
	GotoXY(60, 27);  cout << "        TTTT           HHHH      HHHH      EEEE         E           RRRR       RRRRR   OOOOO     OOOOO   AAAA          AAAA   DDDD      DDDD";
	GotoXY(60, 28);  cout << "        TTTT           HHHH      HHHH      EEEEEEEEEEEEEE           RRRR       RRRRRR    OOOOOOOOOOO     AAAA          AAAA   DDDDDDDDDDDDD";
	GotoXY(60, 29); ; cout << "      TTTTTTTT       HHHHHH      HHHHHH   EEEEEEEEEEEEEEE           RRRR      RRRRRRRRR    OOOOOOO       AAAA          AAAA  DDDDDDDDDDDDD      ";
	//Gioi thieu
	SetColor(Red);
	GotoXY(70, 35); cout << "Lecturer: Dr. Truong Toan Thinh";
	GotoXY(70, 36); cout << "GROUP 07: ";
	GotoXY(70, 37); cout << "TRINH DUC THIEN - 20127330.";
	GotoXY(70, 38); cout << "TO DINH PHUONG NAM - 20127569";
	GotoXY(70, 39); cout << "BUI THI THANH HOA - 20127161";
	GotoXY(70, 40); cout << "LE DUC DAT - 20127674";
	SetColor(White);
	GotoXY(70, 41); cout << "E-Exit.";
}


void ScreenStartGame() {
	removeScrollBar();
	AnTroChuot();
	Begin();
	int temp, temp1, temp2;
	srand(time(NULL));
	temp1 = toupper(_getch());
	if (temp1 == 'T') {
		ResetData();
		LoadLoad();
		STATE = true;
	}
	else if (temp1 == 'A') {
		Intro();
		system("Pause");
		ScreenStartGame();
	}
	else if (temp1 == 'S') {
		StartGame();
	}
	else if (temp1 == 'E') {

		ResetData();
		ExitGame();
	}
	thread t1(SubThread);
	while (1) {
		temp = toupper(_getch());
		if (STATE == 1) {
			if (temp == 'P') {
				PauseGame(t1.native_handle());
			}
			else if (temp == 'L') {
				PauseGame(t1.native_handle());
				Save();
				ScreenStartGame();
			}
			else {
				ResumeThread((HANDLE)t1.native_handle());
				if (temp == 'D' || temp == 'A' || temp == 'W' || temp == 'S')
				{
					MOVE = temp;
				}
			}
		}
		else {
			if (temp == 'Y') {
				ScreenStartGame();
			}
			else {
				ExitGame();
				return;
			}
		}
	}
}

void Save() {
	string data;
	ofstream f1;
	ofstream f2;
	SetColor(Cyan);
	system("cls");
	for (int i = 0; i < 40; i++) {
		GotoXY(65 + i, 19); cout << char(220);
	}
	for (int i = 0; i < 40; i++) {
		GotoXY(65 + i, 21); cout << char(220);
	}
	GotoXY(65, 20); cout << "ENTER YOUR NAME: "; getline(cin, data);
	system("cls");
	GotoXY(65, 20);
	cout << " SAVED.";
	f1.open(data, ios::out);
	f2.open("Data.txt", ios::app);
	f2 << data << " " << endl;
	//thong tin
	f1 << NAME << endl;
	f1 << Y.x << " " << Y.y << endl;
	for (int i = 0; i < Max_Car; i++)
		f1 << X[i].x << " ";
	f1 << endl;
	for (int i = 0; i < Max_Car; i++)
		f1 << X[i].y << " ";
	f1 << endl;
	f1 << STATE;
	f1 << endl;
	f1 << score;
	f1 << endl;
	f1 << ok;
	f1 << endl;
	f1.close();
	f2.close();

}

void LoadGame(string data) {
	ifstream f;
	f.open(data, ios::in);
	if (!f) {
		GotoXY(35, 46);
		cout << "\n KHONG THE TIM THAY TEN CUA BAN" << endl;
	}
	else {
		f >> NAME;
		f >> Y.x >> Y.y;
		for (int i = 0; i < Max_Car; i++)
			f >> X[i].x;
		for (int i = 0; i < Max_Car; i++)
			f >> X[i].y;
		f >> STATE;
		f >> score;
		f >> ok;
	}
	f.close();
}

void ReadNameFile() {
	SetColor(Cyan);
	GotoXY(60, 18);
	cout << "LIST FILE NAME: ";
	int i = 19;
	ifstream f;
	f.open("Data.txt", ios::in);
	int j = 1;
	while (!f.eof()) {
		char s[30];
		f >> s;
		GotoXY(50, i);
		if (!f.eof()) cout << j << ". ";
		cout << s << endl;
		i++;
		j++;
	}
	GotoXY(50, i++);
	f.close();
}

void LoadLoad() {
	int n = 100;
	system("cls");
	ReadNameFile();
	char data[30];
	GotoXY(50, 32);
	HienTroChuot();
	cout << "ENTER FILE NAME: ";
	cin.getline(data, 30);
	LoadGame(data);
	DrawBoard(BoardX, BoardY, BoardHeight, BoardWidth);
	DrawScoreBoard(BoardX + BoardWidth + 6, BoardY, 40, 20);
	GotoXY(ScoreX, ScoreY - 3); cout << "YOUR NAME: " << NAME;
}