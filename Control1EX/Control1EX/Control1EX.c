/* 예제 8-1
#include <stdio.h>

void main()
{
	int num;
	printf("숫자를 입력하세요 :");
	scanf_s("%d", &num);

	if (num >= 0)
	{
		printf("양수입니다.\n");
	}
	
	if (num < 0)
	{
		printf("음수입니다.\n");
	}
}*/


/* 8-3
#include <stdio.h>

void main()
{
	int age;

	printf("나이 입력 : \n");
	scanf_s("%d", &age);

	if (age >= 15 && age <= 100)
	{
		printf("회원 가입이 가능합니다. \n");
	}
	else
	{
		printf("회원 가입이 불가능합니다.\n");
	}
}*/


/* 8-4
#include <stdio.h>

void main()
{
	int num;
	printf("숫자 입력 : ");
	scanf_s("%d", &num);

	if (num > 0)
	{
		printf("0보다 큰 수가 num에 저장 \n");
	}
	else
	{
		printf("0 또는 0보다 작은 수가 num에 저장 \n");
	}
}
*/



/* 8-5
#include <stdio.h>

void main()
{
	int num;
	printf("숫자 입력 : ");
	scanf_s("%d", &num);

	if (num > 0)
	{
		printf("0보다 큰 수가 num에 저장 \n");
	}
	else
	{
		if (num == 0)
		{
			printf("0이 num에 저장 \n");
		}
		else
		{
			printf("0 또는 0보다 작은 수가 num에 저장 \n");
		}
	}
}*/



/* 8-6 //8-5에서의 중괄호 제거
#include <stdio.h>

void main()
{
	int num;
	printf("숫자 입력 : ");
	scanf_s("%d", &num);

	if (num > 0)
	{
		printf("0보다 큰 수가 num에 저장 \n");
	}
	else if (num == 0)
		{
			printf("0이 num에 저장 \n");
		}
	else
		{
			printf("0 또는 0보다 작은 수가 num에 저장 \n");
		}
	}
}*/


/* 8-7
#include <stdio.h>

void main()
{
	int num;

	printf("C언어 성적 입력 : ");
	scanf_s("%d", &num);

	if (num >= 95)
	{
		printf("A+입니다. \n");
	}
	else
	{
		if (num >= 90)
		{
			printf("A입니다. \n");
		}
		else
		{
			if (num >= 85)
			{
				printf("B+입니다. \n");
			}
			else
			{
				if (num >= 80)
				{
					printf("B입니다. \n");
				}
				else
				{
					printf("F입니다. \n");
				}
			}
		}
	}
}*/


/* 8-8
#include <stdio.h>

void main()
{
	int num;

	printf("C언어 성적 입력 : ");
	scanf_s("%d", &num);

	if (num >= 95)
	{
		printf("A+입니다. \n");
	}
	else if (num >= 90)
	{
		printf("A입니다. \n");
	}
	else if (num >= 85)
	{
		printf("B+입니다. \n");
	}
	else if (num >= 80)
	{
		printf("B입니다. \n");
	}
	else printf("F입니다. \n");
}*/


/* 8-9
#include <stdio.h>

void main()
{
	int num;

	printf("C언어 성적 입력 : ");
	scanf_s("%d", &num);

	if (num >= 95)
	{
		printf("A+입니다. \n");
	}
	if (num >= 90) // else if (num >= 90)
	{
		printf("A입니다. \n");
	}
	if (num >= 85) // else if (num >= 85)
	{
		printf("B+입니다. \n");
	}
	if (num >= 80) // else if (num >= 80)
	{
		printf("B입니다. \n");
	}
	else printf("F입니다. \n");
}*/


/*8-10
#include <stdio.h>

void main()
{
	int num;

	printf("몇 번 스위치를 누르시겠습니까?");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1:
		printf("전등이 켜짐 \n");
		break;

	case 2:
		printf("전등이 꺼짐 \n");
		break;

	case 3:
		printf("고장 \n");
		break;

	default:
		printf("스위치 오류: 우리집 스위치는 1번 ~ 3번까지만 있습니다. \n");
	}
}*/



/* 8-11
#include <stdio.h>

void main()
{
	char ch;

	printf(" (T)hursday, (F)riday, (S)aturday \n");
	printf(" 문자 입력 (T, F, S) : ");
	scanf_s("%c", &ch, 1);

	switch (ch)
	{
	case 'T':
	case 't':
		printf("Thurday \n");
		break;

	case 'F':
	case 'f':
		printf("Friday \n");
		break;

	case 'S':
	case 's':
		printf("Saturday \n");
		break;

	default:
		printf("잘못 입력되었습니다. \n");
	}
}*/



/* p.222 1번
#include <stdio.h>

void main()
{
	int a, b;
	
	printf("두 개의 정수를 입력하세요. :");
	scanf_s("%d, %d", &a, &b);

	if (a > b)
	{
		printf("큰 수는 %d입니다.", a);
	}
	else if (a == b)
	{
		printf("두 수는 같습니다.");
	}
	else
	{
		printf("큰 수는 %d입니다.", b);
	}
	
}*/



/* 2번
#include <stdio.h>

void main()
{
	int num;

	printf("3자리 십진수를 입력하세요. : ");
	scanf_s("%d", &num);
	

	int num1, num2, num3;

	num1 = num / 100;
	num2 = (num % 100) / 10;
	num3 = (num % 100) % 10;

	if (num1 % 2 == 0)
		printf("%d : 짝수 ", num1);
	else 
		printf("%d : 홀수 ", num1);

	if (num2 % 2 == 0)
		printf("%d : 짝수 ", num2);
	else
		printf("%d : 홀수 ", num2);

	if (num3 % 2 == 0)
		printf("%d : 짝수 ", num3);
	else
		printf("%d : 홀수 ", num3);

}*/


/* 3번
#include <stdio.h>

void main()
{
	int score;

	printf("점수를 입력하세요 : ");
	scanf_s("%d", &score);

	if (score <= 100)
	{
		switch (score / 10)
		{
		case 10:
		case 9:
			printf("A");
			break;

		case 8:
			printf("B");
			break;

		default:
			printf("F");
		}
	}
	else
		printf("점수를 잘못 입력하셨습니다.");

}*/



/*4번*/
#include <stdio.h>

void main()
{
	int num;

	for (num = 0; num < 100; num++)
	{
		if (num % 2 == 0) //홀수만 출력
			continue;

		printf("%d \n", num);
	}
}



/* 5번
#include <stdio.h>

void main()
{
	int a, b, c;

	printf("input :");
	scanf_s("%d", &a);
	printf("input :");
	scanf_s("%d", &b);
	printf("input :");
	scanf_s("%d", &c);

	if (a >= b && a >= c)
		printf("result: %d \n", a);
	else if (b > a && b > c)
		printf("result: %d \n", b);
	else
		printf("result: %d \n", c);
}*/