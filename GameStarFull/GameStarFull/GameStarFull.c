#include <stdio.h> //1.��ó����
#include <conio.h>
#include <windows.h>


//��ũ�λ��(�ɺ������)
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

#define EMPTY 0
#define WALL 1
#define BRICK 2


//2.�Լ��� ������Ÿ��
void drawMap(); 
void keyPro();
int checkGameOver();



// 3.map�� ���������� ó��
char map[10][10] = {
		{1,1,1,1,1,1,1,1,1,1}, //������� 0 �Ͼ� ���� 1 �������ڴ� 2
		{1,2,0,0,1,1,0,0,0,1}, //char�� 0���� 127���� ���尡�� (�ƽ�Ű�ڵ�) 1byte�� �Ծ ȿ��������  
		{1,0,0,0,1,1,0,0,0,1}, //char�� 1byte�ε� �ƽ�Ű�ڵ忡 ���� ���ڴ� ������ 2byte�̹Ƿ� ����
		{1,0,0,0,1,1,0,0,0,1}, //�׷��� char�� �νİ����� ���ڷ� ���
		{1,0,0,0,1,1,0,0,0,1},
		{1,0,0,0,0,0,0,0,1,1},
		{1,1,1,0,0,0,0,0,0,1},
		{1,1,1,0,0,0,0,0,0,1},
		{1,0,0,0,1,1,1,0,0,1},
		{1,1,1,1,1,1,1,1,1,1}

};

//���� ������ ��ġ��ǥ(�迭�� index��ȣ)
int posY = 1;
int posX = 1; //������ ���� ������ ��ǥ�� 1,1�̶� �ʱ�ȭ�� 1��~



void main()
{
	while (1)
	{

		//ȭ���� ������[�ܼ�â�� ������ ������!]
		//�ܼ�â�� ����� ������ �Լ�
		system("cls");


		//ȭ�鿡 �ʱ׸���
		drawMap(); //�Լ�ȣ��

		//������ ����Ǿ����� �˻�!-> 0�� �ϳ��� ���ٸ� ����

		//int i=checkGameOver();
		if (checkGameOver() /*== 1*/) //0�� �ƴϸ� ���̱� ������ �̷��� �ᵵ �ȴ�
		{
			printf("\n\nStage Clear! \n\n");
			break; //while���� ����
		}

		//����Ű �Է¹޾Ƽ� map �迭�� �� ����
		keyPro();


	}
	
	
}// main �Լ�

//ȭ�鿡 ���� �׸��� ��� �Լ�
void drawMap()
{
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
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
			}
		}
		printf("\n");
	}
}



//�������Ḧ �˻��ϴ� ��� �Լ�
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


//����Ű �Է¹޾� map �迭�� �� ���� ��� �Լ�
void keyPro()
{
	int key;
	key = _getch();//����Ű �Է��� ���� �� �ִ� �Լ�
	if (key == 224) key = _getch();


	switch (key)
	{
	case UP:
		//��ĭ�� ������� ������? ������� ������ ������
		if (map[posY - 1][posX] != EMPTY) return; //�� ���Ⱑ ���� 			
			posY--;						//������ ������ ���� �Լ� ����
			map[posY][posX] = BRICK;

	case DOWN:
		//�Ʒ�ĭ�� ������� ������?
		if (map[posY + 1][posX] != EMPTY) return;   //��ũ�λ���� ó���ϸ� �� ���� ����			
		posY++;
		map[posY][posX] = BRICK;
		break;

	case LEFT:
		//����ĭ�� ������� ������?
		if (map[posY][posX-1] != EMPTY) return;  			
		posX--;
		map[posY][posX] = BRICK;
		break;

	case RIGHT:
		//������ĭ�� ������� ������?
		if (map[posY][posX + 1] != EMPTY) return;  			
		posX++;
		map[posY][posX] = BRICK;
		break;

	}

	

}

