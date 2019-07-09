//메모장

/* 1번
#include <stdio.h>

void main()
{
	int a;

	printf("양의 정수를 입력하시오. : ");
	scanf_s("%d", &a);

	for (; a > 0; a--)				//입력받은 값이 0이 된다. -> 입력받은 값이 변화되는 건 좋지 않음
									//제어용 변수를 따로 만들자
	{
		printf("Hello World! \n");

	}

}
//교수님 풀이
#include <stdio.h>

void main()
{
	int num;

	printf("정수 입력: ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)			//for(int i=a; i>0; i--)
	{
		printf("Hello World! \n");

	}
}*/


/*2번
#include <stdio.h>

void main()
{
	int a=1, num;

	printf("양의 정수를 입력하시오. : ");
	scanf_s("%d", &num);

	for (;a<=num;a++) //~할때까지 ==이거는 같을때만 출력..
	{
		printf("%d ", 3 * a);
	}
}*/


//교수님 풀이
/*
#include <stdio.h>

void main()
{
	int num;

	printf("양의 정수를 입력하시오. : ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf(" %d ", 3 * (i+1));
	}
}*/

/* 3번
#include <stdio.h>

void main()
{
	int num, sum=0;

	printf("양의 정수를 입력하시오. : \n");

	for (;;)
	{
		scanf_s("%d", &num);

		if (num == 0)
			break;

		sum = sum + num;
	}

	printf("덧셈결과: %d \n", sum);
	printf("프로그램 종료 \n");

}*/


//교수님 풀이
/*
#include <stdio.h>

void main()
{
	int num, sum=0; //sum은 0으로 초기화되어 있어야함


	do //일단 한번은 입력하고

		{
			printf("정수 입력: ");
			scanf_s("%d", &num);


			//if (num == 0); break;

			//입력된 값을 계속 누적

			sum += num;
		}	while (num != 0); // num의 값이 0이 아닐때 계속 반복



		printf ("입력된 값의 총합: %d \n", sum);
		printf("프로그램 종료 \n");

}*/


/*4번
#include <stdio.h>

void main()
{
	int dan, a = 9;

	printf("단을 입력하시오. : ");
	scanf_s("%d", &dan);

	for (; a > 0; a--)
	{
		printf(" %d * %d = %d \n", dan, a, dan * a);
	}
}*/


//교수님 풀이
/*
#include <stdio.h>

void main()
{
	int dan;

	printf("원하는 단수 입력: ");
	scanf_s("%d", &dan);

	for (int i = 9; i >0; i--)
	{
		printf(" %d * %d = %d \n", dan, i, dan * i);
	}

}*/

/* 5번
#include <stdio.h>

void main()
{
	int a;

	for (a = 1; a < 100; a++)
	{
		if ((a % 7 == 0) || (a % 9 == 0))
		printf("%d  ", a);
	}
		
}*/


//교수님 풀이
/*
#include <stdio.h>

void main()
{
	int n;
	
	for (n = 1; n < 100; n++)
	{
		if (n %7 == 0 || n % 9 == 0)
		printf("%4d", n); //띄어쓰기의 효과
	}
}*/


/*6번
#include <stdio.h>

void main()
{
	int a, b;

	printf("두개의 정수를 입력하시오: ");
	scanf_s("%d, %d", &a, &b);

	if (a > b)
		printf("두 수의 차: %d \n", a - b);
	else
		printf("두 수의 차: %d \n", b - a);

}*/

//교수님 풀이
/*
#include <stdio.h>

void main()
{
	int a, b;

	printf("입력: ");
	scanf_s("%d", &a);

	printf("입력: ");
	scanf_s("%d", &b);

	int c = a - b;
	if (c < 0) c = -c;

	printf("두 수의 차: %d \n", c);

}*/

/* 7번
#include <stdio.h>

void main()
{
	int a, b;

	printf("두개의 정수를 입력하시오(,로 연결): ");
	scanf_s("%d, %d", &a, &b);

	printf("두 수의 차: %d \n", a > b ? a - b : b - a);
}*/

/*
#include <stdio.h>

void main()
{
	int a, b;

	printf("입력: ");
	scanf_s("%d", &a);

	printf("입력: ");
	scanf_s("%d", &b);

	int c = a - b;
	c = (c < 0)? -c; c;

	printf("두 수의 차: %d \n", c);

}*/


/* 8번
#include <stdio.h>

void main()
{
	int dan, num;

	dan =2;

	while (dan<10)
	{

		num = 1;
		while (num < 10)
		{
			printf(" %d * %d = %d \n", dan, num, dan * num);
			num++;

			if (dan < num)
				break;
		}
		printf("\n");
		dan+=2;
	}
}*/

//교수님 풀이
/*
#include <stdio.h>

void main()
{
	int dan, i;

	for (dan = 1; dan < 10; dan++)
	{
		//혹시 홀수단이면 아래 출력을 하지마
		if (dan % 2 == 1) continue;			//특정상황일때만 멈추게 하기 좋다 ---게임프로그램 짤때 좋다

		for(i=1; i<10; i++)			//for(int i=1; i<=dan; i++) //숫자값이 특정값이 아닌 변수로
		{
			if (dan < i) break;
			printf(" %d * %d = %d \n", dan, i, dan * i);
		}
		printf("\n");
	}
}*/

/* 9번
#include <stdio.h>

void main()
{
	int a, b=0, num, sum=0;

	printf("입력하실 정수의 개수 :");
	scanf_s("%d", &a);

	for (; b<a; b++)
	{
		printf("정수 입력: ");
		scanf_s("%d", &num);

		sum = sum + num;

	}

		printf("입력하신 정수들의 평균: %.2f \n", (float)sum / a);
	
}*/


//교수님 풀이
/*
#include <stdio.h>

void main()
{
	int n; //입력될 횟수를 가진 변수
	int num; //입력될 정수 값을 저장할 변수
	int sum = 0; 

	printf("입력하실 정수의 개수: ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("input : ");
		scanf_s("%d", &num);

		sum += num;
	}

	printf("입력값의 평균: %.2f \n", (float)sum / (float)n);
}*/


/* 10번
#include <stdio.h>

void main()
{
	int a=0, num, sum=0;

	printf("1 이상의 5개의 정수를 입력하시오. \n");

	while ( a < 5)
	{
		printf("정수 입력: ");
		scanf_s("%d", &num);

		if (num < 1)
		{
			printf("재입력해주세요 \n\n");
			continue;
		}

		else
		a++;
		sum = sum + num;
		
	}

	
		printf("\n합: %d", sum);

}*/

/* 교수님 풀이
#include <stdio.h>

void main()
{
	int num, sum=0, i=0;

	while (i<5)
	{
		printf("input : ");
		scanf_s("%d", &num);
		
		if (num < 1)
		{
			continue;
		}
		sum = sum + num;
		i++;
	}
	printf("\n");
	printf(" total : %d\n", sum);
}

#include <stdio.h>

void main()
{
	int num, sum = 0, i = 0;

	for (; i < 5; i++)
	{
		printf("input : ");
		scanf_s("%d", &num);

		//특별상황: 1 미만이면 덧셈하지 말고 횟수도 추가하지 말아라
		if (num < 1)
		{
			i--; //꼼수..ㅎㅎ 올라가면 ++로 횟수가 올라가니깐 다시 원위치로 내린 후에 올려
			continue;
		}
		sum = sum + num;
}
*/



//11번 못풂..
/*
#include <stdio.h>

void main()
{

	for (int i = 0; i < 5; i++)
	{

		for (int k = 0; k < i; k++)
		{
			printf("o ");
		}

		printf("*\n");
	}
	
}
*/


//역삼각형의 별을 만드는 프로그램 책 예제
/*
#include <stdio.h>

void main()

{

	for (int i = 0; i < 5; i++)
	{

		for (int k = 0; k < i; k++)
		{
			printf(" ");
		}

		for (int x = 0; x < 9-i*2; x++)
		{
			printf("*");
		}
		printf("\n");
	}


}



/*
for (int i = 0; i < 5; i++)
{
	for (int k = 0; k < i; k++) printf("o");

	printf("*");
	printf("\n");
}*/


//3단 구구단 출력
/*
#include <stdio.h>

void main()
{
	int dan, i;
	
	for (dan = 1; dan < 10; dan+=3)

	{
		for (i = 1; i < 10; i++)
		{
			for (int k = 0; k < 3; k++)
			{
				printf("% d * % d = %d \t", dan + k, i, (dan + k) * i);
			}
			printf("\n");

		}
		printf("\n");
	}
}*/

#include <stdio.h>

void main()
{
	for (int i = 0; i < 5; i++)
	{

		for (int k = 0; k < i; k++)		//k가 i의 값과 같아질때 까지 계속 돌리니깐 o의 갯수가 여러번 생기는것이 가능
		{
			printf("o ");
		}
		printf("*\n");

	}
}