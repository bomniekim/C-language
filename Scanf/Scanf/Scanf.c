/*
#include <stdio.h>

void main()
{
	int a;
	printf("�Է�: ");
	scanf_s("%d", &a);
	printf("���: %d, \n", a);

	scanf_s("%d", &a);
	printf("���: %d \n", a);
}
*/

#include <stdio.h>

void main()
{
	printf("�� ���� ������ �Է¹޾� �����ϴ� ���α׷��Դϴ�. \n\n");
	int a;
	int b;

	printf("�����Է� : ");
	scanf_s("%d", &a);
	printf("�����Է� : ");
	scanf_s("%d", &b);

	int c;
	c = a + b;

	printf("\n");
	printf("�� ���� ��������� ����մϴ�.\n");
	printf(" %d + %d = %d \n", a, b, c);
}

