/*p.195 1��

#include <stdio.h>

void main()
{
	int num, a, b;
	

	printf("�Է�(���� ����) : ");
	scanf_s("%d", &num);


	printf("%d�� ���: ", num);


	for (a=1; a <= 100;a++)
	{

		if (a % num == 0)
		{
			printf("%d ", a);
		}

	}
	b = 100 / num;
	printf("\n");
	printf("%d�� ��� ���� : %d ", num, b);
}*/


/*4��
#include <stdio.h>

void main()
{

	int dan, a, b;
	
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &dan);

	for (a=0; a < 10; a++)
	{
		b = dan * a;
		printf(" %d * %d = %d�Դϴ�.\n", dan, a, b);
	}

}*/






#include <stdio.h>

void main()
{
	int a, b;

	printf("ù ��° ���� �Է��� �ּ��� : ");
	scanf_s("%d", &a);
	printf("�� ��° ���� �Է��� �ּ��� : ");
	scanf_s("%d", &a);

	printf("%d + &d = &d", a, b, a + b);

}


/* 7��
#include <stdio.h>

void main()
{
	int score, a, sum = 0;

	printf("�� ������ ������ ����� ����մϴ�. \n");

	for (a = 0; a < 10; a++)
	{
		printf("������ �Է��� �ּ��� : ");
		scanf_s("%d", &score);
		sum = sum + score;

	}

	printf("�� ���� ������ ����� %f�Դϴ�.", (float)sum / 10);
}















/*
#include <stdio.h>

void main()
{
	int num, f=1;
	
	printf("���ڸ� �Է��Ͻÿ�. :");
	scanf_s("%d", &num);

	for (;num>0;num--)
	{
		f = f * num;

	}
	printf("%d! = %d", num, f);
}*/