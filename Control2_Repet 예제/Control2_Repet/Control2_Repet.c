/* ���� 7-1
#include <stdio.h>

void main()
{
	int num = 0;
	while (num < 5)
	{
		printf("�ݺ� ����: %d \n", num);
		num++;

	}
	printf("�ݺ����� ������ ��: %d \n", num);
}*/




/* 7-2
#include <stdio.h>

void main()
{
	int i = 0;
	int sum = 0; //������ �ϴ� ������ ���� ���� ������ ��������� ����

	while (i <= 10)
	{
		sum += i;
		printf("i=%d, sum=%d \n", i, sum);
		i++;
	}

	printf("------�ݺ��� ����------\n");

}*/



/* 7-3
#include <stdio.h>

void main()
{
	int i = 0;
	while (1) //������ ��
	{
		printf("�ݺ� Ƚ��: %d \n", i);
		i++;


		if (i > 10)
			break;
	}
}*/


/* 7-4
#include <stdio.h>

void main()
{
	int a = 2;
	int b = 1;
	int result = 0;

	while (a < 10)
	{
		while (b < 10)
		{
			result = a * b;
			printf(" %d * %d = %d \n", a, b, result);
			b++;
		}
		a++;
		b = 1;
		printf("==============\n");
	}
}*/



/* 7-5
#include <stdio.h>

void main()
{
	int num = 0, j = 9, result = 0;
	printf("���ڸ� �Է��ϼ���.: ");
	scanf_s("%d", &num);

	while (num > 0)
	{
		while (j > 0)
		{
			result = num * j;
			printf(" %d * %d = %d \n", num, j, result);
			j--;
		}
		num--;
		j = 9;
		printf("==========\n");
	}
}*/



/* 7-6
#include <stdio.h>

void main()
{
	int num;
	for (num = 0; num < 5; num++)
	{
		printf("�ݺ� ����: %d \n", num);
	}
	printf("�ݺ����� ������ �� : %d \n", num);
}*/


/* 7-7
#include <stdio.h>

void main()
{
	int i, sum = 0;
	for (i = 0; i <= 10; i++)
	{
		sum += i;
		printf("i=%d, sum=%d \n", i, sum);
	}
	printf("-------�ݺ��� ����--------\n");
}
	*/


/* 7-8
#include <stdio.h>

void main()
{
	int num = 0, i, result = 0;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s(" %d", &num);

	for (i = 1; i < 10; i += 2)
	{
		result = num = num * i;
		printf("%d * %d = %d�Դϴ�.\n", num, i, result);
	}
}*/




/* 7-9
#include <stdio.h>

void main()
{
	int i;
	for (i = 0; 1; i++) //���� ����
	{
		printf("�ݺ� Ƚ��: %d \n", i);
	}
}*/



/* 7-10
#include <stdio.h>

void main()
{
	int dan, b;
	int result = 0;

	for (dan = 2; dan < 10; dan++)
	{
		for (b = 1; b < 10; b++)
		{
			result = dan * b;
			printf(" %d * %d = %d \n", dan, b, result);
		}
		printf("==========\n");

	}
}*/



/*
#include <stdio.h>

void main()
{
	int num, j = 9, result = 0;

	printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &num);

	for (; num > 0; num--)
	{
		for (j = 9; j > 0; j--)
		{
			result = num * j;
			printf(" %d * %d = %d \n", num, j, result);

		}
		printf("=========\n");
	}
}*/



/* 7-12
#include <stdio.h>

void main()
{
	int i;
	int f = 1;
	
	for (i = 1; i <= 10; i++)
	{
		f *= i;
	}
	printf("1���� 10������ �� : %d \n", f);
}
*/



/* 7-13
#include <stdio.h>

void main()
{
	int i=1, f = 1;
	
	for (; i <= 10; i++)
	{
		f *= i;
	}
	printf("1���� 10������ ��: %d \n", f);

}
*/



/*7-14
#include <stdio.h>

void main()
{
	int i, f = 1;
	for (i = 1;; i++)
	{					// �� ���̿� if(i>10)�� �������
		f = f * i;

		if (i>10)
			break; // ���� 11! 10�� 10���� �۾�? ���� -> i++ ������ i =11 �� �ǰ� 10!*11�� ����� ��Ȳ
	}
	printf("1���� 10������ ��: %d \n", f);

}


/* 7-15
#include <stdio.h>

void main()
{
	int i, f = 1;
	for (i = 1; i <= 10;)
	{
		f = f * i;
		i++;
	}
	printf("1���� 10������ ��: %d \n", f);

}*/


/*7-16
#include <stdio.h>

void main()
{
	int num = 10;


	do
	{
		printf("%d", num);
		num++;

	} while (num < 10);

	printf("\n **while ���� �����մϴ�.** \n");
}
*/


/* 8-2

#include <stdio.h>

void main()
{
	int num;

	printf("5�� ���: ");
	for (num = 1; num <= 100; num++)
	{
		if (num % 5 == 0)
			printf("%-3d \n", num);
	}
}*/




/* 8-12
#include <stdio.h>

void main()
{
	char ch;

	printf("���ڸ� �Է��ϼ��� (q�� �Է��ϸ� ����) : ");
	for (;;)
	{
		scanf_s("%c", &ch, 1);
		if (ch == 'q')
			break;
	}
	printf("�ݺ����� �����մϴ�. \n");
}*/



/* 8-13
#include <stdio.h>

void main()
{
	int num;

	for (num = 0; num < 101; num++)
	{
		if (num % 2 == 1) //¦���� ���
			continue;

		printf("%d \n", num);
	}
}*/


