#pragma once
#include "General.h"
#include "Graphic.h"
#include "Draw.h"

void Input();

void ResetData();

void StartGame();

void ExitGame();

void PauseGame(HANDLE t);

void ProcessDead();

void ProcessFinish(POINT& p);

void Win();

bool IsImpact(const POINT& p, int d);

bool IsImpactP(const POINT& p);

void MoveCars();

void MoveLeft();

void MoveRight();

void MoveDown();

void MoveUp();

void SubThread();

void Intro();

void ScreenStartGame();

void LoadGame(string data);

void Save();

void ReadNameFile();

void LoadLoad();
