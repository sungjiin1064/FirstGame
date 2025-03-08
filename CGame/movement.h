#pragma once
#include <Windows.h>
#include <stdio.h>

int playerX;
int playerY;
int blockX;
int blockY;

void PlayerMove(int,int);
void HollMove(int,int);
void RandomBlockMove(int,int);
void blockMoving(int, int);