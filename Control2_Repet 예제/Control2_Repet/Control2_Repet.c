/* 예제 7-1
#include <stdio.h>

void main()
{
	int num = 0;
	while (num < 5)
	{
		printf("반복 내용: %d \n", num);
		num++;

	}
	printf("반복문을 종료한 후: %d \n", num);
}*/




/* 7-2
#include <stdio.h>

void main()
{
	int i = 0;
	int sum = 0; //누산을 하는 공간을 만들어서 따로 변수를 계속적으로 저장

	while (i <= 10)
	{
		sum += i;
		printf("i=%d, sum=%d \n", i, sum);
		i++;
	}

	printf("------반복문 종료------\n");

}*/



/* 7-3
#include <stdio.h>

void main()
{
	int i = 0;
	while (1) //언제나 참
	{
		printf("반복 횟수: %d \n", i);
		i++;


		if (i > 10)
			break;
	}
}*/


/* 7-4
#include <stdio.h>

void main()
{
	int a = 2;
	int b = 1;
	int result = 0;

	while (a < 10)
	{
		while (b < 10)
		{
			result = a * b;
			printf(" %d * %d = %d \n", a, b, result);
			b++;
		}
		a++;
		b = 1;
		printf("==============\n");
	}
}*/



/* 7-5
#include <stdio.h>

void main()
{
	int num = 0, j = 9, result = 0;
	printf("숫자를 입력하세요.: ");
	scanf_s("%d", &num);

	while (num > 0)
	{
		while (j > 0)
		{
			result = num * j;
			printf(" %d * %d = %d \n", num, j, result);
			j--;
		}
		num--;
		j = 9;
		printf("==========\n");
	}
}*/



/* 7-6
#include <stdio.h>

void main()
{
	int num;
	for (num = 0; num < 5; num++)
	{
		printf("반복 내용: %d \n", num);
	}
	printf("반복문을 종료한 후 : %d \n", num);
}*/


/* 7-7
#include <stdio.h>

void main()
{
	int i, sum = 0;
	for (i = 0; i <= 10; i++)
	{
		sum += i;
		printf("i=%d, sum=%d \n", i, sum);
	}
	printf("-------반복문 종료--------\n");
}
	*/


/* 7-8
#include <stdio.h>

void main()
{
	int num = 0, i, result = 0;

	printf("숫자를 입력하세요 : ");
	scanf_s(" %d", &num);

	for (i = 1; i < 10; i += 2)
	{
		result = num = num * i;
		printf("%d * %d = %d입니다.\n", num, i, result);
	}
}*/




/* 7-9
#include <stdio.h>

void main()
{
	int i;
	for (i = 0; 1; i++) //무한 루프
	{
		printf("반복 횟수: %d \n", i);
	}
}*/



/* 7-10
#include <stdio.h>

void main()
{
	int dan, b;
	int result = 0;

	for (dan = 2; dan < 10; dan++)
	{
		for (b = 1; b < 10; b++)
		{
			result = dan * b;
			printf(" %d * %d = %d \n", dan, b, result);
		}
		printf("==========\n");

	}
}*/



/*
#include <stdio.h>

void main()
{
	int num, j = 9, result = 0;

	printf("숫자를 입력하세요: ");
	scanf_s("%d", &num);

	for (; num > 0; num--)
	{
		for (j = 9; j > 0; j--)
		{
			result = num * j;
			printf(" %d * %d = %d \n", num, j, result);

		}
		printf("=========\n");
	}
}*/



/* 7-12
#include <stdio.h>

void main()
{
	int i;
	int f = 1;
	
	for (i = 1; i <= 10; i++)
	{
		f *= i;
	}
	printf("1부터 10까지의 곱 : %d \n", f);
}
*/



/* 7-13
#include <stdio.h>

void main()
{
	int i=1, f = 1;
	
	for (; i <= 10; i++)
	{
		f *= i;
	}
	printf("1부터 10까지의 곱: %d \n", f);

}
*/



/*7-14
#include <stdio.h>

void main()
{
	int i, f = 1;
	for (i = 1;; i++)
	{					// 이 사이에 if(i>10)을 써줘야함
		f = f * i;

		if (i>10)
			break; // 값은 11! 10이 10보다 작아? ㄴㄴ -> i++ 때문에 i =11 이 되고 10!*11이 저장된 상황
	}
	printf("1부터 10까지의 곱: %d \n", f);

}


/* 7-15
#include <stdio.h>

void main()
{
	int i, f = 1;
	for (i = 1; i <= 10;)
	{
		f = f * i;
		i++;
	}
	printf("1부터 10까지의 곱: %d \n", f);

}*/


/*7-16
#include <stdio.h>

void main()
{
	int num = 10;


	do
	{
		printf("%d", num);
		num++;

	} while (num < 10);

	printf("\n **while 문을 종료합니다.** \n");
}
*/


/* 8-2

#include <stdio.h>

void main()
{
	int num;

	printf("5의 배수: ");
	for (num = 1; num <= 100; num++)
	{
		if (num % 5 == 0)
			printf("%-3d \n", num);
	}
}*/




/* 8-12
#include <stdio.h>

void main()
{
	char ch;

	printf("문자를 입력하세요 (q를 입력하면 종료) : ");
	for (;;)
	{
		scanf_s("%c", &ch, 1);
		if (ch == 'q')
			break;
	}
	printf("반복문을 종료합니다. \n");
}*/



/* 8-13
#include <stdio.h>

void main()
{
	int num;

	for (num = 0; num < 101; num++)
	{
		if (num % 2 == 1) //짝수만 출력
			continue;

		printf("%d \n", num);
	}
}*/


