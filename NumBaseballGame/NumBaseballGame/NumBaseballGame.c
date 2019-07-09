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

	printf("숫자로 하는 야구 게임입니다.\n\n");


	while (1)
	{
		printf("중복되지 않는 세자리 숫자를 입력하세요.");

		int u;
		scanf_s("%d", &u);

		num1 = u / 100;
		num2 = (u % 100) / 10;
		num3 = (u % 100) % 10;


		while (1)
		{

			if (num1 == num2 || num1 == num3 || num2 == num3)

				printf("중복된 숫자가 있습니다. 재입력해주세요.\n\n");
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

	printf("숫자로 하는 야구 게임입니다.\n\n");


	while (1)
	{
		printf("중복되지 않는 세자리 숫자를 입력하세요.");

		int u;
		scanf_s("%d", &u);

		num1 = u / 100;
		num2 = (u % 100) / 10;
		num3 = (u % 100) % 10;


		
		if (num1 == num2 || num1 == num3 || num2 == num3)

			printf("중복된 숫자가 있습니다. 재입력해주세요.\n\n");
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

	int num1, num2, num3; // 사용자가 입력하는 각각의 세자리 수
	int strike = 0, ball = 0, count = 1; //strike, ball, 도전횟수
	int c1, c2, c3; //컴퓨터가 발생시키는 난수


	do {

		srand((int)time(NULL));

		c1 = rand() % 10;
		c2 = rand() % 10;
		c3 = rand() % 10;

	} while (c1 == c2 || c1 == c3 || c2 == c3);



	printf("숫자로 하는 야구 게임입니다:)\n");
	printf("Game Start!\n\n\n");



	while (strike != 3)
	{

		strike = 0;
		ball = 0;

		printf("중복되지 않는 세자리 숫자 입력하시오: ");

		int u;
		scanf_s("%d", &u);

		num1 = u / 100;
		num2 = (u % 100) / 10;
		num3 = (u % 100) % 10;

		if (num1 == num2 || num1 == num3 || num2 == num3)
		{
			printf("중복된 숫자가 있습니다. 재입력해주세요.\n\n");

			continue;
		}
		

		if (c1 == num1) strike++;
		else if (c1 == num2 || c1 == num3) ball++;

		if (c2 == num2) strike++;
		else if (c2 == num1 || c2 == num3) ball++;

		if (c3 == num3) strike++;
		else if (c3 == num1 || c3 == num2) ball++;


		printf("[%d]번째 도전 결과 : [%d]strike, [%d]ball!\n\n\n", count, strike, ball);

		count++; // 전체 카운트는 리셋시키지 않는다.

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








	
	


	