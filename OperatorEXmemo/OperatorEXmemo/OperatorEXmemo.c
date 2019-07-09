
//메모장 1번
/*
#include <stdio.h>

void main()
{
	int mile;
	const float km = 1.609;

	printf("마일을 입력하시오 : ");
	scanf_s("%d", &mile);

	printf("%.0f마일은 %.2f킬로미터입니다.\n\n", (float)mile, (float)mile * km);
}*/



/* 2번
#include <stdio.h>

void main()
{
	int money;
	int price;
	const float vat = 0.1;

	printf("받은 돈: ");
	scanf_s("%d", &money);
	printf("상품가격:");
	scanf_s("%d", &price);

	printf("\n");
	printf("부가세: %0.f \n", (float)price * vat);
	printf("잔돈: %0.f \n", (float)money - (float)price - (float)price * vat);

}*/

/* 3번
#include <stdio.h>

void main()
{
	double r;
	const double PI = 3.14;

	printf("원의 반지름을 입력하시오 :");
	scanf_s("%lf", &r);

	printf("원의 면적은 %lf입니다.\n\n", PI * r * r);

}*/


/* 4번
#include <stdio.h>

void main()
{
	int a;

	printf("하나의 정수를 입력하시오. :");
	scanf_s("%d", &a);

	printf("입력한 정수의 절대값은 %d입니다.\n\n", a<0? -a : a);
}*/


/* 6번
#include <stdio.h>

void main()
{
	int num1, num2, num3;

	printf("첫 번째 정수를 입력하시오. :");
	scanf_s("%d", &num1);
	printf("두 번째 정수를 입력하시오. :");
	scanf_s("%d", &num2);
	printf("세 번째 정수를 입력하시오. :");
	scanf_s("%d", &num3);

	printf("\n\n");
	printf("세 수의 합: %d \n", num1 + num2 + num3);
	printf("세 수의 평균: %.2f \n", ((float)num1 + (float)num2 + (float)num3)/3);
	printf("최대값: %d \n", num1>num2 && num1>num3? num1: num2>num3 && num2>num1? num2: num3);
	printf("최소값: %d \n", num1<num2 && num1<num3? num1: num2<num3 && num2<num1? num2 : num3);

}*/



/* 5번
#include <stdio.h>

void main()
{
	char ch;

	printf("문자입력 : ");
	scanf_s("%c", &ch, 1);

	printf("출력결과 : %c", ch > 64 && ch <= 90 ? ch + 32 : ch > 96 && ch <= 122 ? ch - 32 : ch);

}*/

/*
#include <stdio.h>

void main()
{
	int y, m, d;

	printf("생년월일을 입력하시오.\n");
	printf("연도");
	scanf_s("%d", &y);
	printf("월");
	scanf_s("%d", &m);
	printf("일");
	scanf_s("%d", &d);

	printf("%d년 %d월 %d일생입니다.", y, m, d);
}*/