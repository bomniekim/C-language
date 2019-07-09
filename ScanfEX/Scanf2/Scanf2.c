/* 예제 3-8
#include <stdio.h>

void main()
{
	int applebox = 30;
	int grapebox = 20;
	int total;

	total = applebox + grapebox;
	printf("총 %d 박스가 있습니다. \n", total);
}*/

/* 예제 3-9
#include <stdio.h>

void main()
{
	int a = 3;
	int b = 4;

	printf("a의 값 : %d \n", a);
	printf("b의 값 : %d \n", b);

	printf("변수 a의 시작 주소 : %x \n", &a);
	printf("변수 b의 시작 주소 : %x \n", &b);
}*/

/* 예제2-11
#include <stdio.h>

void main()
{
	int age;
	printf("What is your age? : ");
	scanf_s("%d", &age);
	printf("Wow! Really? Are you %d years old? \n", age);
}*/

/* 예제2-12
#include <stdio.h>

void main()
{
	int a, b, c;

	printf("10진수 정수 1개 입력 : ");
	scanf_s("%d", &a);
	printf("10진수 : %d, 16진수 : %x, 8진수 : %o \n", a, a, a);

	printf("16진수 정수 1개 입력 : ");
	scanf_s("%x", &b);
	printf("10진수 : %d, 16진수 : %x, 8진수 : %o \n", b, b, b);

	printf("8진수 정수 1개 입력 : ");
	scanf_s("%o", &c);
	printf("10진수 : %d, 16진수 : %x, 8진수 : %o \n", c, c, c);
}*/

/* 예제 2-13
#include <stdio.h>

void main()
{
	float f1, f2;
	double d1, d2;

	printf("float형 첫 번째 실수 입력 : ");
	scanf_s("%f", &f1);
	printf("float형 두 번째 실수 입력 : ");
	scanf_s("%e", &f2);
	printf("float형 첫 번째 실수 출력 : f1=%f, \n", f1);
	printf("float형 두 번째 실수 출력 : f2=%f, \n", f2);

	printf("double형 첫 번째 실수 입력 : ");
	scanf_s("%lf", &d1);
	printf("double형 두 번째 실수 입력 : ");
	scanf_s("%le", &d2);
	printf("float형 첫 번째 실수 출력 : d1=%lf \n", d1);
	printf("float형 두 번째 실수 출력 : d2=%le \n", d2);

}*/

/* p.54 3번
#include <stdio.h>

void main()
{
	int a, b;
	printf("가로 길이를 입력하세요 : ");
	scanf_s("%d", &a);

	printf("세로 길이를 입력하세요 : ");
	scanf_s("%d", &b);

	printf("직사각형의 넓이는 %d입니다. \n", a * b);
}*/


#include <stdio.h>

void main()
{
	float r;
	double pi = 3.14;

	printf("반지름을 입력하세요 : ");
	scanf_s("%f", &r);

	printf("원의 넓이는 %lf입니다. \n", r * r * pi);
}

