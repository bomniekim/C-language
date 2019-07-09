/*
#include <stdio.h>

void main()
{
	int a;

	a = 0;
	while (a < 5)
	{
		printf(" %d \n", a);
		a++;
	}
}*/


/*
#include <stdio.h>

void main()
{
	int a, b;
	
	a = 0;
	while (a < 3)
	{
		printf("aaa\n");

		b = 0;
		while (b < 5)
		{
			printf("bbb\n");
			b++;
		}
	}
}
*/

/*
//구구단

#include <stdio.h>

void main()
{
	int a, b;

	a = 1;

	while (a < 10)
	{

		b = 1;
		while (b < 10)
		{
			printf(" %d * %d = %d \n", a, b, a*b);
			b++;
		}
		printf("\n");
		a++;
	}

}*/


/*
#include <stdio.h>

void main()
{
	int a;
	int i;
	int sum = 0; //별도의 변수를 만들어서 저장공간을 확보.. 누적 합산의 개념


	i = 0;
	while (i < 3)
	{
		printf("정수입력 : ");
		scanf_s("%d", &a); //scanf를 반복해보쟈

		sum = sum + a;

		i++;
	}

	printf("입력된 값들의 합 : %d \n", sum);

}



#include <stdio.h>

void main()
{
	int num;
	
	while (0 < 1) // 결과는 1 -> 참  while(1)로 쓰면 간단! 의도적으로 만듦. 무한히 scanf가능 
	{
		scanf_s("%d", &num);
	}

	printf("프로그램 종료 \n");
}



#include <stdio.h>

void main()
{
	int i;
	while (i < 5)
	{
		printf("AAA\n");
		i++;
	}

	printf("프로그램 종료 \n");
}


//위와 같은 프로그램인데 for로 바꾸기
#include <stdio.h>

void main()
{
	int i;
	for (i=0; i<5; i++) //조건을 안주면 자동 참
	{
		printf("AAA\n");
	}

	printf("프로그램 종료 \n");
}
//몇 번을 반복해야하는 지 알때 for를 사용하면 효율적



/*
#include <stdio.h>

void main()
{
	int a = 0;
	int sum = 0;

	for (a = 1; a <= 50; a++)
	{
		sum += a;
	}

	printf("덧셈결과: %d \n", sum);
	printf("프로그램 종료 \n");

}*/



/* //for 구구단
#include <stdio.h>

void main()
{
	int dan;
	int a;

	for (dan = 2; dan < 10; dan++)
	{
		for (a = 1; a < 10; a++)
		{
			printf(" %d * %d = %d\n", dan, a, dan * a);
		}

		printf("\n");
	}
}*/




#include <stdio.h>
/*
void main()
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("  %d \n", a);
		break; //!!!!!!!반복문!!!!!!!을 나가버림
	}

	printf("프로그램 종료\n");
}


#include <stdio.h>

void main()
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a == 5)
		{
			break; // 나를 감싸는 ''반복문''을 빠져나감 -> if랑은 무관!
		}
		printf("  %d \n", a);
	}

	printf("프로그램 종료\n");
}




void main()
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a == 5)
		{
			continue; // 현재 만난 작업을 멈추고 다음 반복작업을 실행 -> 특정 상황이 되면 그 상황을 하지마
		}
		printf("  %d \n", a);
	}

	printf("프로그램 종료\n");
}


void main()
{
	int a = 10;

	do //적어도 한번은 수행한 다음에 조건에 맞는지 봐        >참인 경우에는 while과 같지만 거짓일때 살짝 다름
	{
		printf("aaa\n");
		a++;
	} while (a < 5);


	printf("프로그램 종료\n");
}*/


void main()
{
	int dan;
	int i;


	do
	{
		printf("단수입력: ");
		scanf_s("%d", &dan);

	} while (dan < 2 || dan>9);

	
	{
		for (i = 0; i < 10; i++)
		{
			printf("%d * %d =%d \n", dan, i, dan * 1);
		}
	}
}
