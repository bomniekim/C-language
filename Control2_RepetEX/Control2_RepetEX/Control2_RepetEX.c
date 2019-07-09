/*p.195 1번

#include <stdio.h>

void main()
{
	int num, a, b;
	

	printf("입력(양의 정수) : ");
	scanf_s("%d", &num);


	printf("%d의 배수: ", num);


	for (a=1; a <= 100;a++)
	{

		if (a % num == 0)
		{
			printf("%d ", a);
		}

	}
	b = 100 / num;
	printf("\n");
	printf("%d의 배수 개수 : %d ", num, b);
}*/


/*4번
#include <stdio.h>

void main()
{

	int dan, a, b;
	
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &dan);

	for (a=0; a < 10; a++)
	{
		b = dan * a;
		printf(" %d * %d = %d입니다.\n", dan, a, b);
	}

}*/






#include <stdio.h>

void main()
{
	int a, b;

	printf("첫 번째 수를 입력해 주세요 : ");
	scanf_s("%d", &a);
	printf("두 번째 수를 입력해 주세요 : ");
	scanf_s("%d", &a);

	printf("%d + &d = &d", a, b, a + b);

}


/* 7번
#include <stdio.h>

void main()
{
	int score, a, sum = 0;

	printf("열 과목의 점수의 평균을 계산합니다. \n");

	for (a = 0; a < 10; a++)
	{
		printf("점수를 입력해 주세요 : ");
		scanf_s("%d", &score);
		sum = sum + score;

	}

	printf("열 과목 점수의 평균은 %f입니다.", (float)sum / 10);
}















/*
#include <stdio.h>

void main()
{
	int num, f=1;
	
	printf("숫자를 입력하시오. :");
	scanf_s("%d", &num);

	for (;num>0;num--)
	{
		f = f * num;

	}
	printf("%d! = %d", num, f);
}*/