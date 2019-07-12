#include <stdio.h>
#include <conio.h>
#include <windows.h>


#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

#define EMPTY 0
#define WALL 1
#define DOT 2
#define GOAL 3
#define BRICK 4
#define FENCE 5
#define	ARROW 6



void drawMap();
int goalcheck();
void keyPro();


char map[11][20] = {
	{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5},
	{5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5},
	{5,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,5},
	{5,0,0,0,0,1,2,2,2,2,1,0,0,0,0,0,0,0,0,5},
	{5,0,0,0,0,1,4,2,2,4,1,1,1,1,0,0,0,0,0,5},
	{5,0,1,1,1,1,2,2,2,2,6,2,2,1,1,1,1,1,0,5},
	{5,0,1,2,2,4,2,2,4,2,2,2,2,2,2,3,3,1,0,5},
	{5,0,1,2,2,2,1,2,2,1,1,2,2,2,2,3,3,1,0,5},
	{5,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,5},
	{5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5},
	{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5},

};

//현재 화살표의 위치좌표(배열의 index번호)
int posY = 5;
int posX = 10;

void main()
{
	while (1)
	{
		//화면 지우기
		system("cls");

		//화면에 맵 그리기
		drawMap();

		//방향키 입력받아서 map의 좌표 변경
		keyPro();

		//goal이 brick으로 채워지면 종료
		if (goalcheck())
		{
			printf("\n\nStage Clear! \n\n");
			break; //while문이 끝남
		}


	}


}

void drawMap()
{
	for (int y = 0; y < 11; y++)
	{
		for (int x = 0; x < 20; x++)
		{
			switch (map[y][x]) //전역변수로 처리했기 때문에 인식
			{
			case 0:
				printf("  ");
				break;
			case 1:
				printf("▦");
				break;
			case 2:
				printf("ㆍ");
				break;
			case 3:
				printf("ⓖ");
				break;
			case 4:
				printf("■");
				break;
			case 5:
				printf("≡");
				break;
			case 6:
				printf("▶");
				break;
			}
		}
		printf("\n");
	}
}



void keyPro()
{
	int key;
	key = _getch();//방향키 입력을 받을 수 있는 함수
	if (key == 224) key = _getch();


	switch (key)
	{
	case UP:

		if (map[posY - 1][posX] != WALL)
		{
			if (map[posY - 1][posX] == BRICK)
			{
				if (map[posY - 2][posX] == WALL || (map[posY - 2][posX] == BRICK)) return;

				map[posY - 2][posX] = BRICK;
			}
			map[posY][posX] = DOT;
			posY--;
			map[posY][posX] = ARROW;
		}break;

	case DOWN:

		if (map[posY + 1][posX] != WALL)
		{
			if (map[posY + 1][posX] == BRICK)
			{
				if (map[posY + 2][posX] == WALL || (map[posY - 2][posX] == BRICK)) return;

				map[posY + 2][posX] = BRICK;
			}
			map[posY][posX] = DOT;
			posY++;
			map[posY][posX] = ARROW;
		}break;

	case LEFT:

		if (map[posY][posX - 1] != WALL)
		{
			if (map[posY][posX - 1] == BRICK)
			{
				if (map[posY][posX - 2] == WALL || (map[posY][posX - 2] == BRICK)) return;

				map[posY][posX - 2] = BRICK;
			}
			map[posY][posX] = DOT;
			posX--;
			map[posY][posX] = ARROW;
		}break;

	case RIGHT:
		if (map[posY][posX + 1] != WALL)
		{
			if (map[posY][posX + 1] == BRICK)
			{
				if (map[posY][posX + 2] == WALL || (map[posY][posX + 2] == BRICK)) return;

				map[posY][posX + 2] = BRICK;
			}
			map[posY][posX] = DOT;
			posX++;
			map[posY][posX] = ARROW;
		}break;
	}
}



int goalcheck()
{
	if (map[6][15] == !BRICK && map[6][15] != ARROW) map[6][15] = GOAL;
	if (map[6][16] == !BRICK && map[6][16] != ARROW) map[6][16] = GOAL;
	if (map[7][15] == !BRICK && map[7][15] != ARROW) map[7][15] = GOAL;
	if (map[7][16] == !BRICK && map[7][15] != ARROW) map[7][16] = GOAL;


	if (map[6][15] == BRICK && map[6][16] == BRICK && map[7][15] == BRICK && map[7][16] == BRICK)
	{

		system("cls");
		drawMap();
		return 1;
	}
	return 0;
}