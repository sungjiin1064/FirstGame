// ���� : step1.����� �о Ư�� ��ҿ� �о� �ֱ�
//        step2.���� ������ ���� ȹ��
//        step3.���ѽð� 1��(������ ǥ��)
//        upgradeVer1.���� �����ϰ� ����(4��)
//        upgradeVer2.������ ��ҵ� �����ϰ� ���� 
//        upgradeVer3.���� ������� �ֱ�( ��.�� -> �� -> �� -> �� �������� �����ϰ� �ٲ��) ������ ǥ��
//                    ������� ������ ����2��

#include <stdio.h>
#include <Windows.h>
#include <conio.h> 
#include <stdlib.h> //rand 
#include <stdbool.h> // while,sleep
#include "block.h"
#include "movement.h"
#include "outline.h"


int playerX = 10;
int playerY = 5;
bool moveRight = false;
int main()
{
	// 1.���� ���θ����
	ShowOutLine();
	// 2.�÷��̾� �����
	PlayerMove(playerX,playerY); //(1,1) (38,18)
	Player();

	while(1)
	{
		if (_kbhit())
		{
			if (GetAsyncKeyState(VK_UP) & 0x8000)
			{
				playerY -= 1;
			}
			if (GetAsyncKeyState(VK_DOWN) & 0x8000)
			{
				playerY += 1;
			}
			if (GetAsyncKeyState(VK_LEFT) & 0x8000)
			{
				playerX -= 2;
			}
			if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
			{
				playerX += 2;
			}
			else
			{

			}
			
			
		
		}

		PlayerMove(playerX,playerY); //(1,1) (38,18)
		Player();

		Sleep(50);
	}
	// 2-1.�÷��̾ ������ ��ϸ����(#��ȭ-���� �����ϰ� 4������)
	//HollMove(17,9);
	//Holl();

	// 2-2.�÷��̾ ���� ���� ������ �߾ӿ� �����(#��ȭ-���� ��������)
	//RandomBlockMove(38,18);//(1,1) (38,18)
	//RandomBlock();
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
	
}







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