/*
#include <stdio.h>

void main()
{
	int a;
	printf("입력: ");
	scanf_s("%d", &a);
	printf("출력: %d, \n", a);

	scanf_s("%d", &a);
	printf("출력: %d \n", a);
}
*/

#include <stdio.h>

void main()
{
	printf("두 개의 정수를 입력받아 덧셈하는 프로그램입니다. \n\n");
	int a;
	int b;

	printf("정수입력 : ");
	scanf_s("%d", &a);
	printf("정수입력 : ");
	scanf_s("%d", &b);

	int c;
	c = a + b;

	printf("\n");
	printf("두 수의 덧셈결과를 출력합니다.\n");
	printf(" %d + %d = %d \n", a, b, c);
}

