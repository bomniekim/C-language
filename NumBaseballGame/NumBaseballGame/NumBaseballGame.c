#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
void main()
{

	srand((unsigned)time(NULL));

	int n = rand();
	int c1, c2, c3;
	int num1, num2, num3;

	c1 = rand() % 10;
	c2 = rand() % 10;
	c3 = rand() % 10;

	printf("���ڷ� �ϴ� �߱� �����Դϴ�.\n\n");


	while (1)
	{
		printf("�ߺ����� �ʴ� ���ڸ� ���ڸ� �Է��ϼ���.");

		int u;
		scanf_s("%d", &u);

		num1 = u / 100;
		num2 = (u % 100) / 10;
		num3 = (u % 100) % 10;


		while (1)
		{

			if (num1 == num2 || num1 == num3 || num2 == num3)

				printf("�ߺ��� ���ڰ� �ֽ��ϴ�. ���Է����ּ���.\n\n");
			continue;
		}

			int strike = 0;
			int ball = 0;
		

		while (strike != 3)
		{
			if (c1 == num1) strike++;
			else if (c1 == num2 || c1 == num3) ball++;

			if (c2 == num2) strike++;
			else if (c2 == num1 || c2 == num3) ball++;

			if (c3 == num3) strike++;
			else if (c3 == num1 || c3 == num2) ball++;

		}
	}		
	printf("Game End! You WIN \n\n");




}*/


/*
void main()
{

	srand((unsigned)time(NULL));

	int n = rand();
	int c1, c2, c3;
	int num1, num2, num3;

	c1 = rand() % 10;
	c2 = rand() % 10;
	c3 = rand() % 10;

	printf("���ڷ� �ϴ� �߱� �����Դϴ�.\n\n");


	while (1)
	{
		printf("�ߺ����� �ʴ� ���ڸ� ���ڸ� �Է��ϼ���.");

		int u;
		scanf_s("%d", &u);

		num1 = u / 100;
		num2 = (u % 100) / 10;
		num3 = (u % 100) % 10;


		
		if (num1 == num2 || num1 == num3 || num2 == num3)

			printf("�ߺ��� ���ڰ� �ֽ��ϴ�. ���Է����ּ���.\n\n");
		continue;
		

		int strike = 0;
		int ball = 0;


		
			if (c1 == num1) strike++;
			else if (c1 == num2 || c1 == num3) ball++;

			if (c2 == num2) strike++;
			else if (c2 == num1 || c2 == num3) ball++;

			if (c3 == num3) strike++;
			else if (c3 == num1 || c3 == num2) ball++;

		
	}
	printf("Game End! You WIN \n\n");




}*/

#include <stdio.h>
#include <time.h> 
#include <stdlib.h>

void main()

{

	int num1, num2, num3; // ����ڰ� �Է��ϴ� ������ ���ڸ� ��
	int strike = 0, ball = 0, count = 1; //strike, ball, ����Ƚ��
	int c1, c2, c3; //��ǻ�Ͱ� �߻���Ű�� ����


	do {

		srand((int)time(NULL));

		c1 = rand() % 10;
		c2 = rand() % 10;
		c3 = rand() % 10;

	} while (c1 == c2 || c1 == c3 || c2 == c3);



	printf("���ڷ� �ϴ� �߱� �����Դϴ�:)\n");
	printf("Game Start!\n\n\n");



	while (strike != 3)
	{

		strike = 0;
		ball = 0;

		printf("�ߺ����� �ʴ� ���ڸ� ���� �Է��Ͻÿ�: ");

		int u;
		scanf_s("%d", &u);

		num1 = u / 100;
		num2 = (u % 100) / 10;
		num3 = (u % 100) % 10;

		if (num1 == num2 || num1 == num3 || num2 == num3)
		{
			printf("�ߺ��� ���ڰ� �ֽ��ϴ�. ���Է����ּ���.\n\n");

			continue;
		}
		

		if (c1 == num1) strike++;
		else if (c1 == num2 || c1 == num3) ball++;

		if (c2 == num2) strike++;
		else if (c2 == num1 || c2 == num3) ball++;

		if (c3 == num3) strike++;
		else if (c3 == num1 || c3 == num2) ball++;


		printf("[%d]��° ���� ��� : [%d]strike, [%d]ball!\n\n\n", count, strike, ball);

		count++; // ��ü ī��Ʈ�� ���½�Ű�� �ʴ´�.

		if (strike == 3)
		{
			printf("Game End! You WIN!");
			break;
		}

		if (count > 9)
		{
			printf("Sorry, You lost.:( \n");
			break;
		}
	

	}	


	
}








	
	


	