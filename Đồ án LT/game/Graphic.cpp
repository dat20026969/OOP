#include "Graphic.h"

void Begin() {
	system("cls");
	SetColor(7);
	for (int i = 0; i < 2; ++i) {
		for (int k = 9; k < 12; ++k) {
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

			GotoXY(60, 19);  cout << " TTTTTTTTTTTTTTTTTT  HHHHHH      HHHHHHH  EEEEEEEEEEEEEEE           RRRRRRRRRRRRRR         OOOOOOO           AAAAAAAAA      DDDDDDDDDDDDD";
			GotoXY(60, 20);  cout << "TTTTTTTTTTTTTTTTTTTT   HHHH      HHHH      EEEEEEEEEEEEEE           RRRRRRRRRRRRRRRR     OOOOOOOOOOO        AAAAAAAAAAA       DDDDDDDDDDDDD";
			GotoXY(60, 21);  cout << "TT      TTTT      TT   HHHH      HHHH      EEEE         E           RRRR       RRRRR   OOOOO     OOOOO     AAAA     AAAA      DDDD      DDDD";
			GotoXY(60, 22);  cout << "        TTTT           HHHH      HHHH      EEEE                     RRRR        RRRR  OOOO         OOOO   AAAA       AAAA     DDDD       DDDD   ";
			GotoXY(60, 23);  cout << "        TTTT           HHHH      HHHH      EEEE        EE           RRRR       RRRR   OOOO         OOOO  AAAA         AAAA    DDDD        DDDD  ";
			GotoXY(60, 24);  cout << "        TTTT           HHHHHHHHHHHHHH      EEEEEEEEEEEEEE           RRRRRRRRRRRRR     OOOO         OOOO  AAAAAAAAAAAAAAAAAA   DDDD        DDDD";
			GotoXY(60, 25);  cout << "        TTTT           HHHHHHHHHHHHHH      EEEE        EE           RRRRRRRRRRRRRR    OOOO         OOOO  AAAAAAAAAAAAAAAAAA   DDDD        DDDD";
			GotoXY(60, 26);  cout << "        TTTT           HHHH      HHHH      EEEE                     RRRR      RRRRR   OOOO         OOOO  AAAA          AAAA   DDDD       DDDD";
			GotoXY(60, 27);  cout << "        TTTT           HHHH      HHHH      EEEE         E           RRRR       RRRRR   OOOOO     OOOOO   AAAA          AAAA   DDDD      DDDD";
			GotoXY(60, 28);  cout << "        TTTT           HHHH      HHHH      EEEEEEEEEEEEEE           RRRR       RRRRRR    OOOOOOOOOOO     AAAA          AAAA   DDDDDDDDDDDDD";
			GotoXY(60, 29); ; cout << "     TTTTTTTT       HHHHHH      HHHHHH  EEEEEEEEEEEEEEE           RRRR      RRRRRRRRR    OOOOOOO       AAAA          AAAA DDDDDDDDDDDDD      ";
			GotoXY(90, 33); SetColor(i - 2);
			cout << "-WELCOME TO CROSS THE ROAD-";
			GotoXY(92, 35); SetColor(i - 2);
			cout << "Press S to PLAY. ";
			GotoXY(92, 36); SetColor(i - 2);
			cout << "Press T to LOAD GAME. ";
			GotoXY(92, 37); SetColor(i - 2);
			cout << "Press A to ABOUT. ";
			GotoXY(92, 38); SetColor(i - 2);
			cout << "Press E TO EXIT GAME. ";
			Sleep(100);
		}
		SetColor(LightGreen);
		GotoXY(15, 6);   cout << "    CCCCCCCCCC     RRRRRRRRRRRRR            OOOOOOO            SSSSSSSSS              SSSSSSSSS                    ____________________             ";
		GotoXY(15, 7);   cout << "  CCCCCCCCCCCCCC   RRRRRRRRRRRRRRR        OOOOOOOOOOO        SSSSSSSSSSSSS          SSSSSSSSSSSSS                /___________________  \\                       ";
		GotoXY(15, 8);   cout << " CCCCCC      CCCC  RRRR      RRRRR      OOOOO     OOOOO     SSSS         S         SSSS         S               /                    |   ::,,...   ";
		GotoXY(15, 9);   cout << " CCCCC             RRRR       RRRR     OOOO         OOOO    SSSS                   SSSS                        /____________________/     ::,,...";
		GotoXY(15, 10);  cout << " CCCC              RRRR      RRRR      OOOO         OOOO    SSSSSSSSSSSSSS         SSSSSSSSSSSSSS         ____/ __________________        ::,,...  ";
		GotoXY(15, 11);  cout << " CCCC              RRRRRRRRRRRR        OOOO         OOOO     SSSSSSSSSSSSSS         SSSSSSSSSSSSSS       /       ______           ____       ::,,,...    ";
		GotoXY(15, 12);  cout << " CCCC              RRRRRRRRRRRRRR      OOOO         OOOO      SSSSSSSSSSSSSS         SSSSSSSSSSSSSS     |  #____|__##__|_____#   /  _ \\      ::,,,...";
		GotoXY(15, 13);  cout << " CCCCC             RRRR      RRRRR     OOOO         OOOO                SSSS                   SSSS     |_###_______________###_|  | | |____:::::,,,,...              ";
		GotoXY(15, 14);  cout << " CCCCCC      CCCC  RRRR       RRRRR     OOOOO     OOOOO       S         SSSS         S         SSSS       \\ \\    /            | |  |_| /      ::,,,...";
		GotoXY(15, 15);  cout << "  CCCCCCCCCCCCCC   RRRR       RRRRRR      OOOOOOOOOOO         SSSSSSSSSSSSS          SSSSSSSSSSSSS         \\_\\__/              \\_\\____/      ::,,... ";
		GotoXY(15, 16);  cout << "    CCCCCCCCCC     RRRR      RRRRRRRRR      OOOOOOO             SSSSSSSSS              SSSSSSSSS                                     ";
		SetColor(LightBlue);
		GotoXY(60, 19);  cout << " TTTTTTTTTTTTTTTTTT  HHHHHH      HHHHHHH  EEEEEEEEEEEEEEE           RRRRRRRRRRRRRR         OOOOOOO           AAAAAAAAA      DDDDDDDDDDDDD";
		GotoXY(60, 20);  cout << "TTTTTTTTTTTTTTTTTTTT   HHHH      HHHH      EEEEEEEEEEEEEE           RRRRRRRRRRRRRRRR     OOOOOOOOOOO        AAAAAAAAAAA       DDDDDDDDDDDDD";
		GotoXY(60, 21);  cout << "TT      TTTT      TT   HHHH      HHHH      EEEE         E           RRRR       RRRRR   OOOOO     OOOOO     AAAA     AAAA      DDDD      DDDD";
		GotoXY(60, 22);  cout << "        TTTT           HHHH      HHHH      EEEE                     RRRR        RRRR  OOOO         OOOO   AAAA       AAAA     DDDD       DDDD   ";
		GotoXY(60, 23);  cout << "        TTTT           HHHH      HHHH      EEEE        EE           RRRR       RRRR   OOOO         OOOO  AAAA         AAAA    DDDD        DDDD  ";
		GotoXY(60, 24);  cout << "        TTTT           HHHHHHHHHHHHHH      EEEEEEEEEEEEEE           RRRRRRRRRRRRR     OOOO         OOOO  AAAAAAAAAAAAAAAAAA   DDDD        DDDD";
		GotoXY(60, 25);  cout << "        TTTT           HHHHHHHHHHHHHH      EEEE        EE           RRRRRRRRRRRRRR    OOOO         OOOO  AAAAAAAAAAAAAAAAAA   DDDD        DDDD";
		GotoXY(60, 26);  cout << "        TTTT           HHHH      HHHH      EEEE                     RRRR      RRRRR   OOOO         OOOO  AAAA          AAAA   DDDD       DDDD";
		GotoXY(60, 27);  cout << "        TTTT           HHHH      HHHH      EEEE         E           RRRR       RRRRR   OOOOO     OOOOO   AAAA          AAAA   DDDD      DDDD";
		GotoXY(60, 28);  cout << "        TTTT           HHHH      HHHH      EEEEEEEEEEEEEE           RRRR       RRRRRR    OOOOOOOOOOO     AAAA          AAAA   DDDDDDDDDDDDD";
		GotoXY(60, 29); ; cout << "      TTTTTTTT       HHHHHH      HHHHHH   EEEEEEEEEEEEEEE           RRRR      RRRRRRRRR    OOOOOOO       AAAA          AAAA DDDDDDDDDDDDD      ";
		GotoXY(90, 33); SetColor(Red);
		cout << "-WELCOME TO CROSS THE ROAD-";
		SetColor(White);
		GotoXY(92, 35);
		cout << "Press S To PLAY. ";
		GotoXY(92, 36);
		cout << "Press T to LOAD GAME. ";
		GotoXY(92, 37);
		cout << "Press A to ABOUT. ";
		GotoXY(92, 38);
		cout << "Press E to EXIT GAME. ";
		SetColor(White);
	}
}

void Dead() {
	for (int i = 0; i < 2; ++i) {
		for (int k = 9; k < 15; ++k) {
			GotoXY(40, 15); SetColor(k); cout << " YYY       YYY      OOOO		UUU      UUU       DDDDDD      EEEEEEEE      AA      DDDDDD           ____________";
			GotoXY(40, 16); SetColor(k); cout << "  YYY     YYY     OOOOOOOO	UUU      UUU       DD   DDD    EEE          AAAA     DD   DDD       /              \\   ";
			GotoXY(40, 17); SetColor(k); cout << "   YYY   YYY     OOO    OOO	UUU      UUU       DD    DDD   EEE         AA  AA    DD    DDD     /  ___      ___  \\  ";
			GotoXY(40, 18); SetColor(k); cout << "    YYYYYYY     OOO      OOO	UUU      UUU       DD     DDD  EEE        AA    AA   DD     DDD   |  /   |    |   \\  | ";
			GotoXY(40, 19); SetColor(k); cout << "      YYY       OOO      OOO	UUU      UUU       DD     DDD  EEEEEEEE  AAA    AAA  DD     DDD   | /    |    |    \\ |  ";
			GotoXY(40, 20); SetColor(k); cout << "      YYY       OOO      OOO	UUU      UUU       DD     DDD  EEE       AAAAAAAAAA  DD     DDD   \\ \\____/ __ \\____/ /  ";
			GotoXY(40, 21); SetColor(k); cout << "      YYY        OOO    OOO	 UUU	UUU        DD    DDD   EEE       AA      AA  DD    DDD     \\___    \\/    ___/ ";
			GotoXY(40, 22); SetColor(k); cout << "      YYY         OOOOOOOO	  UUUUUUUU         DD   DDD    EEE       AA      AA  DD   DDD        \\   |    |   /";
			GotoXY(40, 23); SetColor(k); cout << "      YYY           OOOO		   UUUUUU          DDDDDD      EEEEEEEE  AA      AA  DDDDDD           \\__|____|__/";

			Sleep(200);
		}
	}
}




void BeforeDead() {
	system("cls");
	SetColor(White);
	Sticker(65, 20);
	SetColor(Red);
	int n = 0;
	while (n != 1) {
		for (int i = 1; i <= 70; i++) {
			DrawAmbulance(i, 16);
			EraseAmbulance(i - 1, 16);
			Sleep(100);
			if (i == 70) n = 1;
		}
	}
}
