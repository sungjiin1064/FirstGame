// 주제 : step1.블록을 밀어서 특정 장소에 밀어 넣기
//        step2.블럭을 넣으면 점수 획득
//        step3.제한시간 1분(우측에 표시)
//        upgradeVer1.블럭을 랜덤하게 생성(4개)
//        upgradeVer2.블럭넣을 장소도 랜덤하게 생성 
//        upgradeVer3.블럭을 순서대로 넣기( 예.♠ -> ♥ -> ♣ -> ◆ 모양순서도 랜덤하게 바뀌기) 우측에 표시
//                    순서대로 넣으면 점수2배

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
	// 1.바탕 라인만들기
	ShowOutLine();
	
	// 2.플레이어 만들기
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

	// 2-1.플레이어가 움직일 블록만들기(#심화-블럭을 랜덤하게 4개생성)
	//HollMove(17,9);
	//Holl();

	// 2-2.플레이어가 블럭을 넣을 공간을 중앙에 만들기(#심화-공간 랜덤생성)
	// 
	// 3.플레이어를 라인 안에 넣기
	// 
	// 4.플레이어를 움직이기
	// 
	// 5.플레이어를 라인안에서 움직이기(밖으로 안나가게)
	// 5-1.중앙 공간엔 뚫고 못가게하기
	// 
	// 6.블럭 밀기(Ai도움받기)
	// 
	// 7.블럭을 중앙에 넣으면 블럭 사라지게하기
	// 
	// 8.블럭을 넣으면 점수추가
	// 8-1.점수구현하면서 시간도같이 제한시간 1분
	// 
	// 9.시간종료(= 게임오버)







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
#endif // 0 지렁이게임 우측으로 쭉 움직임