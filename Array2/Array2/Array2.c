/*
#include <stdio.h>

void main()
{
	int array[5];

	array[0] = 10;

	printf(" d% \n", array); // �迭�� �̸� == �迭�� ù��° ����� ���� �ּ�
	printf(" d% \n", array[0]); // 10�� ��µ�
}*/


//������ �迭
#include <stdio.h>

void main()
{
	//     [��][��][ȣ]
	int array[3][5]; //15���� ������ ������� �� ->  �ʿ������� ��ø�ݺ����� ����

	//int array[5];
	//int array2[5];
	//int array3[5];

	/*
	array[0][0] = 10;
	array[0][1] = 20;
	array[0][2] = 30;
	array[0][3] = 40;
	array[0][4] = 50;

	array[1][0] = 50;
	array[1][1] = 60;
	array[1][2] = 70;
	array[1][3] = 80;
	array[1][4] = 90;

	array[2][0] = 50;
	array[2][1] = 80;
	array[2][2] = 90;
	array[2][3] = 30;
	array[2][4] = 90;
	*/

	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 5; k++)
		{
			printf("%d�� %d�� �л� input : ", i+1,k+1); //0�� 0�� -> 1�� 1��
			scanf_s("%d", &array[i][k]);
		}
		printf("\n");
	}

	
	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 5; k++)
		{
			printf(" %d ", array[i][k]);
		}
		printf("\n");
	}
	
	
	
	

	
}

#include<stdio.h>

void main()
{
		//	 [����][����][��][��][ȣ]
	int array/*[3][4]*/[2][3][5]; //3���� �迭

	for (int i = 0; i < 2; i++)
	{
		for (int k = 0; k < 3; k++)
		{
			for (int g = 0; g < 5; g++)
			{
				printf("  %d  ", array[i][k][g]);
			}
		}
	}

}



#include <stdio.h>

void main()
{
	int array[3][5]; //�޸𸮻󿡼� ������ �̵�
						//ȣ���� ���� �߸� ���� �ٸ� ���� ����


	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 5; k++)

		{
			printf("  %d  ", array[i][k]);
		}
		printf("\n");
	}
	printf("\n\n");


}

void main()
{
	int array[3][5] = { 
	{10,20,30,40,50,},
	{10,20,300,400,500},
	{10000,2000,3000,5000,411} 
	}; // ��ø��ȣ - �� ������ ���⽱��
	
	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 5; k++)
		{
			printf(" %5d ", array[i][k]);
		}
	}
}


#include <stdio.h>


//���ڿ�(String)���� -> char �迭
void main()
{
	char str[5]; // { 'H', 'e', 'l', 'l', 'o' } //�ʱ�ȭ ������{}; �����ǹ�
	//str = "Hello" // ���� ���� -> ����

	/*
	scanf_s("%c", &str[0], 1);//A
	scanf_s("%c", &str[1], 1);//Enter //�Է��� �����ٴ� ���� Enter/Space�� �ν�
	scanf_s("%c", &str[2], 1);//B
	scanf_s("%c", &str[3], 1);//Enter
	scanf_s("%c", &str[4], 1);//C		//���ڿ��� �ν��ϵ��� �ѹ��� ġ��
	printf("\n\n");
	*/

	printf("���ڿ� �Է�: ");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%c", &str[i], 1);
	}
	printf("\n\n");

	str[4] = 0;


	printf("%c", "A"); 

	printf("���: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%c", &str[i]);
	}
	printf("\n\n");

	/*
	printf("%c", str[0]); //65
	printf("%c", str[1]); //10 (�ƽ�Ű�ڵ�) //
	printf("%c", str[2]); //66
	printf("%c", str[3]); //10
	printf("%c", str[4]); //67
	printf("\n\n");*/

	printf("%s\n", "Hello"); // ���ڿ� ����� �ּҸ� �Ѱ��ذ�.. //6����Ʋ ������
	printf("%s\n", str);    //��� : �����Ⱑ ���°��� -> %d�� �޸𸮿� ���� 4byte�� �����Ҽ��� ������� �о��
					//�迭�� �ذ� �ƴ϶� '�ּ�'�� �ذ�	 //	%f�� �޸𸮿� ���� 4byte�� �ε��Ҽ��� ������� �о��
					// str == &str[0]== #100		 //  %s�� �������� ���ڿ��� ���� �ּҰ��� �޶�� ��.. �� �ּҺ��� �о 0�� ������ �����
}													// ������ ���� ��ٰ� �޸��� ������ ����� ���� -> ���������� �ʴ´�

//���ڿ� ������ : NULL ����, \0





#include <stdio.h>


//���ڿ�(String)���� -> char �迭
void main()
{
	char str[6];

	str[0] = 'H';
	str[1] = 'i';

	printf("  %s \n", str);
}


#include <stdio.h>


//���ڿ�(String)���� -> char �迭
void main()
{
	char str[6] = {'H','i'};

	printf("  %s \n", str); //Hi�� ����. 0�� ������ ���ߴϱ�
}

#include <stdio.h>


//���ڿ�(String)���� -> char �迭
void main()
{
	char str[6] = "Hi"; //""�� �ڿ� ���ڸ� �� ������

	printf("  %s \n", str); //Hi�� ����. 0�� ������ ���ߴϱ�/ %s�� enter�� space�� 0���� �ν�
}

void main()

{
	char str[6] = "Hello"; //���� ���ϴ� ������ ������ �ϳ� �� ��� ����

	printf("  %c  \n\n", str[0]); //���ڿ�,���ڿ� ����� ���� �ƴ϶� !!!!!�ּ�!!!!!

	printf("  %c  \n\n", "Hello");
}


void main()
{
	char str[6];

	printf("���ڿ� �Է� : ");
	scanf_s("%s", &str[0], 6); // �ڵ����� �ݺ����� ����  --- ���ڿ��� ���� ,�ڿ� �Է� //�������� enter�ڸ�

	printf("���: %s \n", &str[0]);// %s�� enter/space�� 0���� �ν�
}



% s
==
int i = 0;
while (1)
{
	scanf_s("%c", str[i]);
	
	if (str[i] = 0) break;
	i++;
}


void main()
{
	char str[15] = "Hello World";

	printf("��� : %s \n", &str[0]);  //��°�� Hello World
}



//�߰��� ���⸦ �Է¹ް� ������ %c�� �Է¹޾ƾ� �Ѵ�.
void main()
{
	char str[15];

	for (int i = 0; i < 15; i++)
	{
		scanf_s("%c", &str[i], 1);
		if (str[i] == 10)
		{
			str[i] = 0;		// enter���� 0���� �ٲٰ� �ǰ� ����� ����
			break; //enterġ�� ����
		}
	}

	printf("��� : %s \n", str[0]); // %c�� �Է��� ������ space�� ��� ����// %s�� �Ұ���
	if 
}