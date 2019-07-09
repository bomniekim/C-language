/* 예제 6-1
#include<stdio.h>

void main()
{
	//정수형
	char num1 = 10;
	short num2 = 20;
	int num3 = 30;
	long num4 = 40;

	//실수형
	float num5 = 3.14;
	double num6 = 3.15;
	long double num7 = 3.17;

	printf("\n-------정수형 자료형과 변수의 메모리 크기------ \n");
	printf("char형의 크기 %d 바이트, %d 바이트 \n", sizeof(char), sizeof(num1));
	printf("short형의 크기 %d 바이트, %d 바이트 \n", sizeof(short), sizeof(num2));
	printf("int형의 크기 %d 바이트, %d바이트 \n", sizeof(int), sizeof(num3));
	printf("long형의 크기 %d 바이트, %d 바이트 \n", sizeof(long), sizeof(num4));

	printf("\n-------정수형 자료형과 변수의 메모리 크기------ \n");
	printf("float형의 크기 %d 바이트, %d 바이트 \n", sizeof(float), sizeof(num5));
	printf("double형의 크기 %d 바이트, %d 바이트 \n", sizeof(double), sizeof(num6));
	printf("long double형의 크기 %d 바이트, %d 바이트 \n", sizeof(long double), sizeof(num7));

}*/

/* 예제6-4
#include <stdio.h>

void main()
{
	char num1 = -129; //순환
	char num2 = 128;

	printf(" %d \n", num1);
	printf(" %d \n", num2);

	num1 = -130;
	num2 = 129;

	printf(" %d \n", num1);
	printf(" %d \n", num2);

}*/

/* 예제 6-7
#include <stdio.h>

void main()
{
	float num1 = 0.123456789012345;
	double num2 = 0.123456789012345;

	printf("float형 : %f \n", num1);
	printf("double형 : %f \n", num2); // 더 높은 정확도를 나타내줌 -> 더 선호 -> 실수형 자료의 standard

	printf("float형 : %.15f \n", num1);
	printf("double형 : %.15f \n", num2);

}*/

/* 예제 6-9
#include <stdio.h>

void main()
{
	char val1;

	val1 = 'A';
	printf("%d %c \n", val1, val1);

	val1 = 'B';
	printf("%d %c \n", val1, val1);

	val1 = 'C';
	printf("%d %c \n", val1, val1);
}*/

/* 예제 6-10
#include <stdio.h>

void main()
{
	char val1;
	int val2;

	printf("문자입력 : ");
	scanf_s ("%c", &val1, 1); //입력받을 문자의 크기도 같이 입력해줘야한다..?
	printf("ASCII 코드 값 %d입니다. \n", val1);

	printf("ASCII 코드 값 입력 : ");
	scanf_s("%d", &val2);
	printf("문자로 %c입니다. \n", val2);
}*/

/*p.165 1번
#include <stdio.h>

void main()
{
	float num; // double로 하면 오류가 나는 이유..?

	printf("실수를 입력하세요 : ");
	scanf_s("%f", &num);

	printf("당신이 입력한 수는 %f입니다. \n ", num);

}*/

/* 2번
#include <stdio.h>

void main()
{
	int c = 200;

	printf("c=%d \n", c);
}*/


/* 6번
#include <stdio.h>

void main()
{
	float r;
	float v;
	const float PI = 3.14;

	printf("원형 트랙의 반지름을 입력하시오 : \n");
	scanf_s("%f", &r);
	printf("자동차의 속력을 입력하시오 : \n");
	scanf_s("%f", &v);

	printf("%.3f", 2 * PI * r / v);
}*/

/* 7번
#include <stdio.h>

void main()
{
	float r;

	printf("원의 반지름을 입력하시오 : ");
	scanf_s("%f", &r);

	printf("원의 면적은 다음과 같습니다. : %f \n", 3.14 * r * r);
	printf("원의 둘레는 다음과 같습니다. : %f \n ", 2 * 3.14 * r);

}*/

/* p.71 2번
#include <stdio.h>

void main()
{
	int jean;
	jean = 1;
	jean = jean + 1;

	printf("구매할 청바지의 수량은 %d장 입니다. \n", jean);
	printf("구매 완료 \n");
}*/

/* 3번
#include <stdio.h>

void main()
{
	int red = 1, blue = 2; //1은 오렌지 주스, 2는 사이다
	int yellow; // 빈 컵

	printf("before \n");
	printf("red = %d, blue = %d \n", red, blue);

	yellow = red;
	red = blue;
	blue = yellow;

	printf("after \n");
	printf("red = %d, blue = %d \n", red, blue);

}*/

/* 4번
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
}
*/