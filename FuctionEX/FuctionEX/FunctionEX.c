

/*���� 9-1
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

	printf("���� �� ���� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);


	c = max(a, b);

	printf(" %d�� %d �� ū ���� %d�Դϴ�.\n", a, b, c);

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

	//1.�ȳ��޼��� ��� ���
	information();
	

	//2.�Է±��
	printf("ù ��° �Ǽ� �Է�: ");
	num1 = input();

	printf("�� ��° �Ǽ� �Է�: ");
	num2 = input();

	//3. ����������
	result = divide(num1, num2);
	

	//4.��±��
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
	printf("�������� ���: %.2lf", x);
}

void information()
{
	printf("-----���α׷� ����------\n");
}*/



/* 9-4
#include <stdio.h>

void main()
{
	int result;
	printf("-----���α׷� ����-----\n");
	printf("���� �� ���� �Է��ϼ��� : ");

	//1. ��������
	result = sum();

	//2. ������
	output(result);

}

int sum()
{
	int i = 0, total = 0, num = 0;
	num = input();	//input �Լ����� �Է¹��� val���� num�� �־�

	for (i = 1; i <= num; i++)
		total = total + i;

	return total;//total�� �ڷ����� int

}

int input()
{
	int val;
	scanf_s("%d", &val);
	return val;
}

void output(int x)
{
	printf("��� : %d \n", x);
}*/


/* 9-5
#include <stdio.h>

void func_A();

void main()
{
	int aaa = 10;
	printf("main() �Լ��� aaa�� : %d \n", aaa);

	func_A();
}

void func_A()
{
	int aaa = 20;
	int bbb = 30;

	printf("main() �Լ��� aaa�� : %d \n", aaa);
	printf("main() �Լ��� bbb�� : %d \n", bbb);
}*/


/* 9-6
#include <stdio.h>

void main()
{
	int i = 0;
	//int total=0;

	for (i = 1; i < 3; i++)
	{
		int total = 0; //total�� for�� ���������� for���� ������ ���ÿ� �޸𸮿��� �����...
		total = total + i;
	}

	if (total < 10)
	{
		printf("total ���� %d�Դϴ�. \n", total);
	}
}*/



/* 9-7
#include <stdio.h>

void main()
{
	int a = 5, b = 3;
	int result = 0;

	result = subtract(a, b);  //��ȯ��  x-y�� ���� result�� ���� �ǰ�
	printf("���� ���: %d \n", result); //�� ���� ���
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
	printf("�Լ� ȣ�� �� num : %d \n", num);

	grow();

	printf("�Լ� ȣ�� �� num : %d \n", num);

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

	printf("x ��: %d, y ��: %d \n", x, y);
}*/

/* p.266 1��
#include <stdio.h>

int abs();
void output(int x);
int input();

void main()
{
	int result;
	printf("������ �Է��ϼ���: ");
	
	int input();

	//1. ���񰪿���
	result = abs();

		//2. ������
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
	printf("������ %d�Դϴ�. \n", x);
}*/


/* 3��
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

/* 4��
#include <stdio.h>


int input();
int getArea(int x, int y);
void output(int a);


void main()
{
	int a, b;
	int result;

	printf("�غ� ���̸� �Է��Ͻÿ� : ");
	a=input();

	printf("���̸� �Է��Ͻÿ� : ");
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
	printf("�簢���� ���̴� %d�Դϴ�. \n\n", a);
}*/




#include <stdio.h>

void main()
{
	int num1, num2;
	int result;

	while (1)
	{
		printf("���� �� ���� �Է��ϼ��� (0 0-> exit) : ");

		num1 = input();
		num2 = input();

		result = Add(num1, num2);

		output(result);
		
		if (num1 == 0 && num2 == 0) break;
	}

	printf("�� ���� �� : %d", );

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
	printf("���� ��� : %d", x);

}

count()
{
	int i;
}