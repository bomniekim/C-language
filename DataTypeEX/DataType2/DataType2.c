/* ���� 6-1
#include<stdio.h>

void main()
{
	//������
	char num1 = 10;
	short num2 = 20;
	int num3 = 30;
	long num4 = 40;

	//�Ǽ���
	float num5 = 3.14;
	double num6 = 3.15;
	long double num7 = 3.17;

	printf("\n-------������ �ڷ����� ������ �޸� ũ��------ \n");
	printf("char���� ũ�� %d ����Ʈ, %d ����Ʈ \n", sizeof(char), sizeof(num1));
	printf("short���� ũ�� %d ����Ʈ, %d ����Ʈ \n", sizeof(short), sizeof(num2));
	printf("int���� ũ�� %d ����Ʈ, %d����Ʈ \n", sizeof(int), sizeof(num3));
	printf("long���� ũ�� %d ����Ʈ, %d ����Ʈ \n", sizeof(long), sizeof(num4));

	printf("\n-------������ �ڷ����� ������ �޸� ũ��------ \n");
	printf("float���� ũ�� %d ����Ʈ, %d ����Ʈ \n", sizeof(float), sizeof(num5));
	printf("double���� ũ�� %d ����Ʈ, %d ����Ʈ \n", sizeof(double), sizeof(num6));
	printf("long double���� ũ�� %d ����Ʈ, %d ����Ʈ \n", sizeof(long double), sizeof(num7));

}*/

/* ����6-4
#include <stdio.h>

void main()
{
	char num1 = -129; //��ȯ
	char num2 = 128;

	printf(" %d \n", num1);
	printf(" %d \n", num2);

	num1 = -130;
	num2 = 129;

	printf(" %d \n", num1);
	printf(" %d \n", num2);

}*/

/* ���� 6-7
#include <stdio.h>

void main()
{
	float num1 = 0.123456789012345;
	double num2 = 0.123456789012345;

	printf("float�� : %f \n", num1);
	printf("double�� : %f \n", num2); // �� ���� ��Ȯ���� ��Ÿ���� -> �� ��ȣ -> �Ǽ��� �ڷ��� standard

	printf("float�� : %.15f \n", num1);
	printf("double�� : %.15f \n", num2);

}*/

/* ���� 6-9
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

/* ���� 6-10
#include <stdio.h>

void main()
{
	char val1;
	int val2;

	printf("�����Է� : ");
	scanf_s ("%c", &val1, 1); //�Է¹��� ������ ũ�⵵ ���� �Է�������Ѵ�..?
	printf("ASCII �ڵ� �� %d�Դϴ�. \n", val1);

	printf("ASCII �ڵ� �� �Է� : ");
	scanf_s("%d", &val2);
	printf("���ڷ� %c�Դϴ�. \n", val2);
}*/

/*p.165 1��
#include <stdio.h>

void main()
{
	float num; // double�� �ϸ� ������ ���� ����..?

	printf("�Ǽ��� �Է��ϼ��� : ");
	scanf_s("%f", &num);

	printf("����� �Է��� ���� %f�Դϴ�. \n ", num);

}*/

/* 2��
#include <stdio.h>

void main()
{
	int c = 200;

	printf("c=%d \n", c);
}*/


/* 6��
#include <stdio.h>

void main()
{
	float r;
	float v;
	const float PI = 3.14;

	printf("���� Ʈ���� �������� �Է��Ͻÿ� : \n");
	scanf_s("%f", &r);
	printf("�ڵ����� �ӷ��� �Է��Ͻÿ� : \n");
	scanf_s("%f", &v);

	printf("%.3f", 2 * PI * r / v);
}*/

/* 7��
#include <stdio.h>

void main()
{
	float r;

	printf("���� �������� �Է��Ͻÿ� : ");
	scanf_s("%f", &r);

	printf("���� ������ ������ �����ϴ�. : %f \n", 3.14 * r * r);
	printf("���� �ѷ��� ������ �����ϴ�. : %f \n ", 2 * 3.14 * r);

}*/

/* p.71 2��
#include <stdio.h>

void main()
{
	int jean;
	jean = 1;
	jean = jean + 1;

	printf("������ û������ ������ %d�� �Դϴ�. \n", jean);
	printf("���� �Ϸ� \n");
}*/

/* 3��
#include <stdio.h>

void main()
{
	int red = 1, blue = 2; //1�� ������ �ֽ�, 2�� ���̴�
	int yellow; // �� ��

	printf("before \n");
	printf("red = %d, blue = %d \n", red, blue);

	yellow = red;
	red = blue;
	blue = yellow;

	printf("after \n");
	printf("red = %d, blue = %d \n", red, blue);

}*/

/* 4��
#include <stdio.h>

void main()
{
	int y, m, d;

	printf("��������� �Է��Ͻÿ�.\n");
	printf("����");
	scanf_s("%d", &y);
	printf("��");
	scanf_s("%d", &m);
	printf("��");
	scanf_s("%d", &d);

	printf("%d�� %d�� %d�ϻ��Դϴ�.", y, m, d);
}
*/