

/*예제 9-1
int sum(int x, int y);

void main()

{
	int answer = 0;
	answer = sum(3, 4);
	printf("%d \n", answer);
}

int sum(int x, int y)
{
	int result = 0;
	result = x + y;
	return result;
}*/

/* 9-2
#include <stdio.h>

int max(int a, int b);

void main()
{
	int a, b, c;

	printf("숫자 두 개를 입력하세요 : ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);


	c = max(a, b);

	printf(" %d와 %d 중 큰 수는 %d입니다.\n", a, b, c);

}

int max(int a, int b)
{
	if (a > b)
		return a;
	if (a < b)
		return b;
}
*/


/* 9-3
#include <stdio.h>

double divide(double x, double y);
double input();
void output(double x);
void information();



void main()
{
	double num1, num2, result;

	//1.안내메세지 출력 기능
	information();
	

	//2.입력기능
	printf("첫 번째 실수 입력: ");
	num1 = input();

	printf("두 번째 실수 입력: ");
	num2 = input();

	//3. 나눗셈연산
	result = divide(num1, num2);
	

	//4.출력기능
	output(result);
}

double divide(double x, double y)
{
	double val;
	val = x / y;
	return val;
}

double input()
{
	double val;
	scanf_s("%lf", &val);
	return val;

}

void output(double x)
{
	printf("나눗셈의 결과: %.2lf", x);
}

void information()
{
	printf("-----프로그램 시작------\n");
}*/



/* 9-4
#include <stdio.h>

void main()
{
	int result;
	printf("-----프로그램 시작-----\n");
	printf("정수 한 개를 입력하세요 : ");

	//1. 덧셈연산
	result = sum();

	//2. 결과출력
	output(result);

}

int sum()
{
	int i = 0, total = 0, num = 0;
	num = input();	//input 함수에서 입력받은 val값을 num에 넣어

	for (i = 1; i <= num; i++)
		total = total + i;

	return total;//total의 자료형은 int

}

int input()
{
	int val;
	scanf_s("%d", &val);
	return val;
}

void output(int x)
{
	printf("결과 : %d \n", x);
}*/


/* 9-5
#include <stdio.h>

void func_A();

void main()
{
	int aaa = 10;
	printf("main() 함수의 aaa값 : %d \n", aaa);

	func_A();
}

void func_A()
{
	int aaa = 20;
	int bbb = 30;

	printf("main() 함수의 aaa값 : %d \n", aaa);
	printf("main() 함수의 bbb값 : %d \n", bbb);
}*/


/* 9-6
#include <stdio.h>

void main()
{
	int i = 0;
	//int total=0;

	for (i = 1; i < 3; i++)
	{
		int total = 0; //total이 for의 지역변수라 for문이 끝남과 동시에 메모리에서 사라짐...
		total = total + i;
	}

	if (total < 10)
	{
		printf("total 값은 %d입니다. \n", total);
	}
}*/



/* 9-7
#include <stdio.h>

void main()
{
	int a = 5, b = 3;
	int result = 0;

	result = subtract(a, b);  //반환된  x-y의 값이 result의 값이 되고
	printf("뺄셈 결과: %d \n", result); //그 값을 출력
}

int subtract(int x, int y)
{
	return x - y;
}*/


/* 9-8
#include <stdio.h>

int num;
void grow();

void main()
{
	printf("함수 호출 전 num : %d \n", num);

	grow();

	printf("함수 호출 전 num : %d \n", num);

}


void grow()
{
	num = 60;
}*/

// 9-9
/*
#include <stdio.h>

void count();

void main()
{
	count();
	count();
	count();
}

void count()
{
	static int x = 0;
	int y = 0;

	x = x + 1;
	y = y + 1;

	printf("x 값: %d, y 값: %d \n", x, y);
}*/

/* p.266 1번
#include <stdio.h>

int abs();
void output(int x);
int input();

void main()
{
	int result;
	printf("정수를 입력하세요: ");
	
	int input();

	//1. 절댓값연산
	result = abs();

		//2. 결과출력
	output(result);
}


int abs()
{
	int num=0;
	num = input();
	if (num > 0) return num;
	else return-num;
	
}

int input()
{
	int val;
	scanf_s("%d", &val);
	return val;
}

void output(int x)
{
	printf("절댓값은 %d입니다. \n", x);
}*/


/* 3번
#include <stdio.h>

int plus(int i, int j);
int minus(int i, int j);
int multiply(int i, int j);
float divide(int i, int j);

void main()
{
	int a, b;
	int result;
	double result2;

	printf("input two numbers : ");

	scanf_s("%d %d", &a, &b);

	result = plus(a, b);
	printf("a+b=%d \n", result);

	result = minus(a, b);
	printf("a-b=%d \n", result);

	result = multiply(a, b);
	printf("a*b=%d \n", result);

	result2 = divide(a, b);
	printf("a/b=%lf \n", result2);

}

int plus(int i, int j)
{
	int val;
	val = i + j;
	return val;
}

int minus(int i, int j)
{
	int val;
	val = i - j;
	return val;
}

int multiply(int i, int j)
{
	int val;
	val = i * j;
	return val;
}

float divide(int i, int j)
{
	float val;
	val = (float)i / (float)j;
	return val;
}
*/

/* 4번
#include <stdio.h>


int input();
int getArea(int x, int y);
void output(int a);


void main()
{
	int a, b;
	int result;

	printf("밑변 길이를 입력하시오 : ");
	a=input();

	printf("높이를 입력하시오 : ");
	b=input();

	result = getArea(a, b);

	output(result);
}



int input()
{
	int val;
	scanf_s("%d", &val);
	return val;
}

int getArea(int x, int y)
{
	int val;
	val = x * y;
	return val;
}

void output(int a)
{
	printf("\n");
	printf("사각형의 넓이는 %d입니다. \n\n", a);
}*/




#include <stdio.h>

void main()
{
	int num1, num2;
	int result;

	while (1)
	{
		printf("숫자 두 개를 입력하세요 (0 0-> exit) : ");

		num1 = input();
		num2 = input();

		result = Add(num1, num2);

		output(result);
		
		if (num1 == 0 && num2 == 0) break;
	}

	printf("총 연산 수 : %d", );

}

int input()
{
	int val;
	scanf_s("%d", &val);
	return val;
}


int Add(int x, int y)
{
	int val;
	val = x + y;
	return val;
}

void output(int x)
{
	printf("덧셈 결과 : %d", x);

}

count()
{
	int i;
}