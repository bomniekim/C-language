#include <stdio.h> //1.전처리기
#include <conio.h>
#include <windows.h>


//매크로상수(심볼릭상수)
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

#define EMPTY 0
#define WALL 1
#define BRICK 2


//2.함수의 프로토타입
void drawMap(); 
void keyPro();
int checkGameOver();



// 3.map을 전역변수로 처리
char map[10][10] = {
		{1,1,1,1,1,1,1,1,1,1}, //빈공간은 0 하얀 벽은 1 검은상자는 2
		{1,2,0,0,1,1,0,0,0,1}, //char은 0부터 127까지 저장가능 (아스키코드) 1byte만 먹어서 효율적으로  
		{1,0,0,0,1,1,0,0,0,1}, //char는 1byte인데 아스키코드에 없는 문자는 무조건 2byte이므로 에러
		{1,0,0,0,1,1,0,0,0,1}, //그래서 char이 인식가능한 숫자로 대신
		{1,0,0,0,1,1,0,0,0,1},
		{1,0,0,0,0,0,0,0,1,1},
		{1,1,1,0,0,0,0,0,0,1},
		{1,1,1,0,0,0,0,0,0,1},
		{1,0,0,0,1,1,1,0,0,1},
		{1,1,1,1,1,1,1,1,1,1}

};

//현재 상자의 위치좌표(배열의 index번호)
int posY = 1;
int posX = 1; //최초의 검은 상자의 좌표가 1,1이라서 초기화를 1로~



void main()
{
	while (1)
	{

		//화면을 지워라[콘솔창을 깨끗이 지워라!]
		//콘솔창에 명령을 내리는 함수
		system("cls");


		//화면에 맵그리기
		drawMap(); //함수호출

		//게임이 종료되었는지 검사!-> 0이 하나도 없다면 종료

		//int i=checkGameOver();
		if (checkGameOver() /*== 1*/) //0이 아니면 참이기 때문에 이렇게 써도 된다
		{
			printf("\n\nStage Clear! \n\n");
			break; //while문이 끝남
		}

		//방향키 입력받아서 map 배열의 값 변경
		keyPro();


	}
	
	
}// main 함수

//화면에 맵을 그리는 기능 함수
void drawMap()
{
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			switch (map[y][x]) //전역변수로 처리했기 때문에 인식
			{
			case 0:
				printf("  ");
				break;
			case 1:
				printf("□");
				break;
			case 2:
				printf("■");
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
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			if (map[y][x] == 0) return 0;
		}

	}
	return 1;
}


//방향키 입력받아 map 배열의 값 변경 기능 함수
void keyPro()
{
	int key;
	key = _getch();//방향키 입력을 받을 수 있는 함수
	if (key == 224) key = _getch();


	switch (key)
	{
	case UP:
		//위칸이 비어있지 않은가? 비어있지 않으면 끝내기
		if (map[posY - 1][posX] != EMPTY) return; //더 보기가 좋게 			
			posY--;						//리턴을 만나는 순간 함수 종결
			map[posY][posX] = BRICK;

	case DOWN:
		//아래칸이 비어있지 않은가?
		if (map[posY + 1][posX] != EMPTY) return;   //매크로상수로 처리하면 더 보기 쉽게			
		posY++;
		map[posY][posX] = BRICK;
		break;

	case LEFT:
		//왼쪽칸이 비어있지 않은가?
		if (map[posY][posX-1] != EMPTY) return;  			
		posX--;
		map[posY][posX] = BRICK;
		break;

	case RIGHT:
		//오른쪽칸이 비어있지 않은가?
		if (map[posY][posX + 1] != EMPTY) return;  			
		posX++;
		map[posY][posX] = BRICK;
		break;

	}

	

}

