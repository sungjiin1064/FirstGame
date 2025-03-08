#include "movement.h"

void PlayerMove(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("©Ü");
}
void RandomBlockMove(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void blockMoving(int x, int y)
{
	if (_kbhit())
	{
		if (playerY + 1 == blockY && playerX == blockX)
		{
			if (GetAsyncKeyState(VK_UP) & 0x8000)
			{
				blockY -= 1;
				if (blockY < 2)
				{
					blockY = 2;
				}
			}
		}
		if (playerY - 1 == blockY && playerX == blockX)
		{
			if (GetAsyncKeyState(VK_DOWN) & 0x8000)
			{
				blockY += 1;
				if (blockY > 17)
				{
					blockY = 17;
				}
			}
		}
		if (playerY == blockY && playerX + 2 == blockX)
		{
			if (GetAsyncKeyState(VK_LEFT) & 0x8000)
			{
				blockX -= 1;
				if (blockX < 2)
				{
					blockX = 2;
				}
			}
		}
		if (playerY == blockY && playerX - 2 == blockX)
		{
			if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
			{
				blockX += 1;
				if (blockX > 36)
				{
					blockX = 36;

				}
			}
		}
	}


	printf("$");
}

void HollMove(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}