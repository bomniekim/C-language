/* 메모장 2번

#include <stdio.h>

void main()
{
	double num1;
	double num2;

	printf("첫 번째 실수를 입력하시오 : ");
	scanf_s("%f", &num1);
	printf("두 번째 실수를 입력하시오 : ");
	scanf_s("%f", &num2);

	printf("두 수의 합은 %f입니다. \n", num1 + num2);
	printf("두 수의 차는 %f입니다. \n", num1 - num2);
	printf("두 수의 곱은 %f입니다. \n", num1 * num2);
	printf("두 수를 나눈 값은 %f입니다. \n", num1 / num2);

}*/

//메모장 1번

#include <stdio.h>

void main()
{
	int x1, y1;
	int x2, y2;

	printf("좌상단의 x, y 좌표를 입력하시오 :\n");
	scanf_s("%d, %d", &x1, &y1);
	printf("우하단의 x, y 좌표를 입력하시오 :\n");
	scanf_s("%d, %d", &x2, &y2);

	printf("\n");
	printf("두 점이 이루는 직사각형의 넓이는 %d입니다.\n\n", (x2 - x1) * (y2 - y1));

}



/* 3, 4번
#include <stdio.h>

void main()
{
	int a;

	scanf_s("%d", &a);
	printf("%c", a);
}


#include <stdio.h>

void main()
{
	char a;

	scanf_s("%c", &a);
	printf("%d", a);
}*/