//메모장 연습문제
/* 문제 1
#include <stdio.h>

void main()
{
	int a, b;

	printf("첫 번째 정수를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("두 번째 정수를 입력하세요 : ");
	scanf_s("%d", &b);

	printf("뺄셈의 값: ");
	printf("%d \n", a - b);
	printf("곱셈의 값: ");
	printf("%d", a * b);
}*/

/* 문제 2
#include <stdio.h>

void main()
{
	int  num1, num2, num3;

	printf("첫 번째 정수를 입력하세요 : ");
	scanf_s("%d", &num1);
	printf("두 번째 정수를 입력하세요 : ");
	scanf_s("%d", &num2);
	printf("세 번째 정수를 입력하세요 : ");
	scanf_s("%d", &num3);

	printf("연산의 결과 = %d \n", num1 * num2 + num3);
}*/

/* 문제3
#include <stdio.h>

void main()
{
	int a;

	printf("하나의 정수를 입력하세요 : ");
	scanf_s("%d", &a);

	printf("제곱의 결과 = %d", a * a);

}*/


/* 문제 4
#include <stdio.h>

void main()
{
	int a, b;

	printf("첫 번째 정수를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("두 번째 정수를 입력하세요 : ");
	scanf_s("%d", &b);

	int c = a / b;

	printf("몫 : ");
	printf("%d \n", c);
	printf("나머지 : ");
	printf("%d", a - b * c);
}*/


/*문제 5
#include <stdio.h>
void main()
{
	int  num1, num2, num3;

	printf("첫 번째 정수를 입력하세요 : ");
	scanf_s("%d", &num1);
	printf("두 번째 정수를 입력하세요 : ");
	scanf_s("%d", &num2);
	printf("세 번째 정수를 입력하세요 : ");
	scanf_s("%d", &num3);

	printf("연산의 결과 = %d \n", (num1 - num2) * (num2 + num3) * (num3 / num1));
}*/
