// ���� : step1.����� �о Ư�� ��ҿ� �о� �ֱ�
//        step2.���� ������ ���� ȹ��
//        step3.���ѽð� 1��(������ ǥ��)
//        upgradeVer1.���� �����ϰ� ����(4��)
//        upgradeVer2.������ ��ҵ� �����ϰ� ���� 
//        upgradeVer3.���� ������� �ֱ�( ��.�� -> �� -> �� -> �� �������� �����ϰ� �ٲ��) ������ ǥ��
//                    ������� ������ ����2��

#include <stdio.h>
#include <Windows.h>
#include <conio.h>  //_kbhit
#include <stdlib.h> //rand 
#include <stdbool.h> // while,sleep
#include "block.h"
#include "movement.h"
#include "outline.h"


int playerX = 10;
int playerY = 10;
int blockX = 16;
int blockY = 11;





int main()
{
	// 1.���� ���θ����
	ShowOutLine();
	
	// 2.�÷��̾� �����
	//Player();
	//PlayerMove(playerX,playerY); //(1,1) (38,18)
	//RandomBlock();
	//RandomBlockMove(blockX, blockY);//(1,1) (38,18)
	while(1)
	{
		if (_kbhit())
		{
			if (GetAsyncKeyState(VK_UP) & 0x8000)
			{
				playerY -= 1;
				if(playerY < 1)
				{
					playerY = 1;
				}
			}
			if (GetAsyncKeyState(VK_DOWN) & 0x8000)
			{
				playerY += 1;
				if (playerY > 18)
				{
					playerY = 18;
				}
			}
			if (GetAsyncKeyState(VK_LEFT) & 0x8000)
			{
				playerX -= 2;
				if (playerX < 1)
				{
					playerX = 1;
				}
			}
			if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
			{
				playerX += 2;
				if (playerX > 37)
				{
					playerX = 37;
				}
			}
			
			
		}


		system("cls");
		ShowOutLine();
		PlayerMove(playerX,playerY); //(1,1) (38,18)
		//Player();
		RandomBlockMove(blockX, blockY);//(1,1) (38,18)
		blockMoving(blockX,blockY);
		//RandomBlock();
		Sleep(70);

	}
	return 0;
}

	// 2-1.�÷��̾ ������ ��ϸ����(#��ȭ-���� �����ϰ� 4������)
	//HollMove(17,9);
	//Holl();

	// 2-2.�÷��̾ ���� ���� ������ �߾ӿ� �����(#��ȭ-���� ��������)
	// 
	// 3.�÷��̾ ���� �ȿ� �ֱ�
	// 
	// 4.�÷��̾ �����̱�
	// 
	// 5.�÷��̾ ���ξȿ��� �����̱�(������ �ȳ�����)
	// 5-1.�߾� ������ �հ� �������ϱ�
	// 
	// 6.�� �б�(Ai����ޱ�)
	// 
	// 7.���� �߾ӿ� ������ �� ��������ϱ�
	// 
	// 8.���� ������ �����߰�
	// 8-1.���������ϸ鼭 �ð������� ���ѽð� 1��
	// 
	// 9.�ð�����(= ���ӿ���)







//bool moveRight = false;
#if 0

if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
{
	moveRight = !moveRight;
}
if (moveRight)
{
	playerX += 2;
}
#endif // 0 �����̰��� �������� �� ������