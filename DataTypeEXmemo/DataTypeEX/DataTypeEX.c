/* �޸��� 2��

#include <stdio.h>

void main()
{
	double num1;
	double num2;

	printf("ù ��° �Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%f", &num1);
	printf("�� ��° �Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%f", &num2);

	printf("�� ���� ���� %f�Դϴ�. \n", num1 + num2);
	printf("�� ���� ���� %f�Դϴ�. \n", num1 - num2);
	printf("�� ���� ���� %f�Դϴ�. \n", num1 * num2);
	printf("�� ���� ���� ���� %f�Դϴ�. \n", num1 / num2);

}*/

//�޸��� 1��

#include <stdio.h>

void main()
{
	int x1, y1;
	int x2, y2;

	printf("�»���� x, y ��ǥ�� �Է��Ͻÿ� :\n");
	scanf_s("%d, %d", &x1, &y1);
	printf("���ϴ��� x, y ��ǥ�� �Է��Ͻÿ� :\n");
	scanf_s("%d, %d", &x2, &y2);

	printf("\n");
	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�.\n\n", (x2 - x1) * (y2 - y1));

}



/* 3, 4��
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