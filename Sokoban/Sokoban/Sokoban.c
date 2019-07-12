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

//���� ȭ��ǥ�� ��ġ��ǥ(�迭�� index��ȣ)
int posY = 5;
int posX = 10; 

void main()
{
	while (1)
	{
		//ȭ�� �����
		system("cls");
		
		//ȭ�鿡 �� �׸���
		drawMap();

		//ȭ�鿡 1�� ���ٸ� ����
		if (checkGameOver() ) //0�� �ƴϸ� ���̱� ������ �̷��� �ᵵ �ȴ�
		{
			printf("\n\nStage Clear! \n\n");
			break; //while���� ����
		}

		//����Ű �Է¹޾Ƽ� map�� ��ǥ ����
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
			switch (map[y][x]) //���������� ó���߱� ������ �ν�
			{
			case 0:
				printf("  ");
				break;
			case 1:
				printf("��");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("��");
				break;
			}
		}
		printf("\n");
	}
}

//�������Ḧ �˻��ϴ� ��� �Լ�
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
		key = _getch();//����Ű �Է��� ���� �� �ִ� �Լ�
		if (key == 224) key = _getch();


		switch (key)
		{
		case UP:
			//��ĭ�� ������� ������?
			if (map[posY - 1][posX] != DOT) return; //�� ���Ⱑ ���� 			
			map[posY][posX] = DOT;
			posY--;						//������ ������ ���� �Լ� ����
			map[posY][posX] = ARROW;

		case DOWN:
			//�Ʒ�ĭ�� ������� ������?
			if (map[posY + 1][posX] != DOT) return;   //��ũ�λ���� ó���ϸ� �� ���� ����			
			map[posY][posX] = DOT;
			posY++;
			map[posY][posX] = ARROW;
			break;

		case LEFT:
			//����ĭ�� ������� ������?
			if (map[posY][posX - 1] != DOT) return;
			map[posY][posX] = DOT;
			posX--;
			map[posY][posX] = ARROW;
			break;

		case RIGHT:
			//������ĭ�� ������� ������?
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

//���� ȭ��ǥ�� ��ġ��ǥ(�迭�� index��ȣ)
int posY = 5;
int posX = 10;

void main()
{
	while (1)
	{
		//ȭ�� �����
		system("cls");

		//ȭ�鿡 �� �׸���
		drawMap();

		//ȭ�鿡 1�� ���ٸ� ����
		if (checkGameOver()) //0�� �ƴϸ� ���̱� ������ �̷��� �ᵵ �ȴ�
		{
			printf("\n\nStage Clear! \n\n");
			break; //while���� ����
		}

		//����Ű �Է¹޾Ƽ� map�� ��ǥ ����
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
			switch (map[y][x]) //���������� ó���߱� ������ �ν�
			{
			case 0:
				printf("  ");
				break;
			case 1:
				printf("��");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("��");
				break;
			}
		}
		printf("\n");
	}
}

//�������Ḧ �˻��ϴ� ��� �Լ�
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
	key = _getch();//����Ű �Է��� ���� �� �ִ� �Լ�
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
		//�Ʒ�ĭ�� ������� ������?
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
		//����ĭ�� ������� ������?
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
		//������ĭ�� ������� ������?
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
//dot�� �ƴҶ� 