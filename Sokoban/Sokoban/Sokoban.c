/*
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
#define	ARROW 6



void drawMap();
int checkGameOver();
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

		//화면에 1이 없다면 종료
		if (checkGameOver() ) //0이 아니면 참이기 때문에 이렇게 써도 된다
		{
			printf("\n\nStage Clear! \n\n");
			break; //while문이 끝남
		}

		//방향키 입력받아서 map의 좌표 변경
		keyPro();

		//
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

//게임종료를 검사하는 기능 함수
int checkGameOver()
{
	int y, x;
	for (int y = 0; y < 11; y++)
	{
		for (int x = 0; x < 20; x++)
		{
			if (map[y][x] == 1) return 0;
		}

	}
	return 1;
}


void keyPro()
	{
		int key;
		key = _getch();//방향키 입력을 받을 수 있는 함수
		if (key == 224) key = _getch();


		switch (key)
		{
		case UP:
			//위칸이 비어있지 않은가?
			if (map[posY - 1][posX] != DOT) return; //더 보기가 좋게 			
			map[posY][posX] = DOT;
			posY--;						//리턴을 만나는 순간 함수 종결
			map[posY][posX] = ARROW;

		case DOWN:
			//아래칸이 비어있지 않은가?
			if (map[posY + 1][posX] != DOT) return;   //매크로상수로 처리하면 더 보기 쉽게			
			map[posY][posX] = DOT;
			posY++;
			map[posY][posX] = ARROW;
			break;

		case LEFT:
			//왼쪽칸이 비어있지 않은가?
			if (map[posY][posX - 1] != DOT) return;
			map[posY][posX] = DOT;
			posX--;
			map[posY][posX] = ARROW;
			break;

		case RIGHT:
			//오른쪽칸이 비어있지 않은가?
			if (map[posY][posX + 1] != DOT) return;
			map[posY][posX] = DOT;
			posX++;
			map[posY][posX] = ARROW;
			break;

		}
}*/

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
#define	ARROW 6



void drawMap();
int checkGameOver();
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

		//화면에 1이 없다면 종료
		if (checkGameOver()) //0이 아니면 참이기 때문에 이렇게 써도 된다
		{
			printf("\n\nStage Clear! \n\n");
			break; //while문이 끝남
		}

		//방향키 입력받아서 map의 좌표 변경
		keyPro();

		//
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

//게임종료를 검사하는 기능 함수
int checkGameOver()
{
	int y, x;
	for (int y = 0; y < 11; y++)
	{
		for (int x = 0; x < 20; x++)
		{
			if (map[y][x] == GOAL) return 0;
		}

	}
	return 1;
}


void keyPro()
{
	int key;
	key = _getch();//방향키 입력을 받을 수 있는 함수
	if (key == 224) key = _getch();


	switch (key)
	{
	case UP:
		if (map[posY - 1][posX] == WALL) return;

		if ((map[posY - 1][posX] == BRICK) && (map[posY - 2][posX] == WALL)) return;

		if (map[posY - 1][posX] == DOT)
		{
			map[posY][posX] = DOT;
			posY--;
			map[posY][posX] = ARROW;
		}
		if ((map[posY - 1][posX] == BRICK) && (map[posY - 2][posX] == DOT))
		{
			map[posY][posX] = DOT;
			posY--;
			map[posY][posX] = ARROW;
			map[posY-1][posX] = BRICK;
		}
		return;

	case DOWN:
		//아래칸이 비어있지 않은가?
		if (map[posY + 1][posX] == WALL) return;

		if ((map[posY + 1][posX] == BRICK) && (map[posY + 2][posX] == WALL)) return;

		if (map[posY + 1][posX] == DOT)
		{
			map[posY][posX] = DOT;
			posY++;
			map[posY][posX] = ARROW;
		}
		if ((map[posY + 1][posX] == BRICK) && (map[posY + 2][posX] == DOT))
		{
			map[posY][posX] = DOT;
			posY++;
			map[posY][posX] = ARROW;
			map[posY + 1][posX] = BRICK;
		}
		return;

	case LEFT:
		//왼쪽칸이 비어있지 않은가?
		if (map[posY][posX - 1] == WALL) return;

		if ((map[posY][posX - 1] == BRICK) && (map[posY][posX - 2] == WALL)) return;

		if (map[posY][posX - 1] == DOT)
		{
			map[posY][posX] = DOT;
			posX--;
			map[posY][posX] = ARROW;
		}
		if ((map[posY][posX - 1] == BRICK) && (map[posY][posX - 2] == DOT))
		{
			map[posY][posX] = DOT;
			posX--;
			map[posY][posX] = ARROW;
			map[posY][posX - 1] = BRICK;
		}return;




	case RIGHT:
		//오른쪽칸이 비어있지 않은가?
		if (map[posY][posX + 1] == WALL) return;

		if ((map[posY][posX + 1] == BRICK) && (map[posY][posX + 2] == WALL)) return;

		if (map[posY][posX + 1] == DOT)
		{
			map[posY][posX] = DOT;
			posX++;
			map[posY][posX] = ARROW;
		}
		if ((map[posY][posX + 1] == BRICK) && (map[posY][posX + 2] == DOT || map[posY][posX + 2] ==GOAL))
		{
			map[posY][posX] = DOT;
			posX++;
			map[posY][posX] = ARROW;
			map[posY][posX + 1] = BRICK;
		}return;
	}
}
//dot이 아닐때 