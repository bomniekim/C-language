/* ���� 3-8
#include <stdio.h>

void main()
{
	int applebox = 30;
	int grapebox = 20;
	int total;

	total = applebox + grapebox;
	printf("�� %d �ڽ��� �ֽ��ϴ�. \n", total);
}*/

/* ���� 3-9
#include <stdio.h>

void main()
{
	int a = 3;
	int b = 4;

	printf("a�� �� : %d \n", a);
	printf("b�� �� : %d \n", b);

	printf("���� a�� ���� �ּ� : %x \n", &a);
	printf("���� b�� ���� �ּ� : %x \n", &b);
}*/

/* ����2-11
#include <stdio.h>

void main()
{
	int age;
	printf("What is your age? : ");
	scanf_s("%d", &age);
	printf("Wow! Really? Are you %d years old? \n", age);
}*/

/* ����2-12
#include <stdio.h>

void main()
{
	int a, b, c;

	printf("10���� ���� 1�� �Է� : ");
	scanf_s("%d", &a);
	printf("10���� : %d, 16���� : %x, 8���� : %o \n", a, a, a);

	printf("16���� ���� 1�� �Է� : ");
	scanf_s("%x", &b);
	printf("10���� : %d, 16���� : %x, 8���� : %o \n", b, b, b);

	printf("8���� ���� 1�� �Է� : ");
	scanf_s("%o", &c);
	printf("10���� : %d, 16���� : %x, 8���� : %o \n", c, c, c);
}*/

/* ���� 2-13
#include <stdio.h>

void main()
{
	float f1, f2;
	double d1, d2;

	printf("float�� ù ��° �Ǽ� �Է� : ");
	scanf_s("%f", &f1);
	printf("float�� �� ��° �Ǽ� �Է� : ");
	scanf_s("%e", &f2);
	printf("float�� ù ��° �Ǽ� ��� : f1=%f, \n", f1);
	printf("float�� �� ��° �Ǽ� ��� : f2=%f, \n", f2);

	printf("double�� ù ��° �Ǽ� �Է� : ");
	scanf_s("%lf", &d1);
	printf("double�� �� ��° �Ǽ� �Է� : ");
	scanf_s("%le", &d2);
	printf("float�� ù ��° �Ǽ� ��� : d1=%lf \n", d1);
	printf("float�� �� ��° �Ǽ� ��� : d2=%le \n", d2);

}*/

/* p.54 3��
#include <stdio.h>

void main()
{
	int a, b;
	printf("���� ���̸� �Է��ϼ��� : ");
	scanf_s("%d", &a);

	printf("���� ���̸� �Է��ϼ��� : ");
	scanf_s("%d", &b);

	printf("���簢���� ���̴� %d�Դϴ�. \n", a * b);
}*/


#include <stdio.h>

void main()
{
	float r;
	double pi = 3.14;

	printf("�������� �Է��ϼ��� : ");
	scanf_s("%f", &r);

	printf("���� ���̴� %lf�Դϴ�. \n", r * r * pi);
}

