
//�޸��� 1��
/*
#include <stdio.h>

void main()
{
	int mile;
	const float km = 1.609;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &mile);

	printf("%.0f������ %.2fų�ι����Դϴ�.\n\n", (float)mile, (float)mile * km);
}*/



/* 2��
#include <stdio.h>

void main()
{
	int money;
	int price;
	const float vat = 0.1;

	printf("���� ��: ");
	scanf_s("%d", &money);
	printf("��ǰ����:");
	scanf_s("%d", &price);

	printf("\n");
	printf("�ΰ���: %0.f \n", (float)price * vat);
	printf("�ܵ�: %0.f \n", (float)money - (float)price - (float)price * vat);

}*/

/* 3��
#include <stdio.h>

void main()
{
	double r;
	const double PI = 3.14;

	printf("���� �������� �Է��Ͻÿ� :");
	scanf_s("%lf", &r);

	printf("���� ������ %lf�Դϴ�.\n\n", PI * r * r);

}*/


/* 4��
#include <stdio.h>

void main()
{
	int a;

	printf("�ϳ��� ������ �Է��Ͻÿ�. :");
	scanf_s("%d", &a);

	printf("�Է��� ������ ���밪�� %d�Դϴ�.\n\n", a<0? -a : a);
}*/


/* 6��
#include <stdio.h>

void main()
{
	int num1, num2, num3;

	printf("ù ��° ������ �Է��Ͻÿ�. :");
	scanf_s("%d", &num1);
	printf("�� ��° ������ �Է��Ͻÿ�. :");
	scanf_s("%d", &num2);
	printf("�� ��° ������ �Է��Ͻÿ�. :");
	scanf_s("%d", &num3);

	printf("\n\n");
	printf("�� ���� ��: %d \n", num1 + num2 + num3);
	printf("�� ���� ���: %.2f \n", ((float)num1 + (float)num2 + (float)num3)/3);
	printf("�ִ밪: %d \n", num1>num2 && num1>num3? num1: num2>num3 && num2>num1? num2: num3);
	printf("�ּҰ�: %d \n", num1<num2 && num1<num3? num1: num2<num3 && num2<num1? num2 : num3);

}*/



/* 5��
#include <stdio.h>

void main()
{
	char ch;

	printf("�����Է� : ");
	scanf_s("%c", &ch, 1);

	printf("��°�� : %c", ch > 64 && ch <= 90 ? ch + 32 : ch > 96 && ch <= 122 ? ch - 32 : ch);

}*/

/*
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
}*/