//�޸���

/* 1��
#include <stdio.h>

void main()
{
	int a;

	printf("���� ������ �Է��Ͻÿ�. : ");
	scanf_s("%d", &a);

	for (; a > 0; a--)				//�Է¹��� ���� 0�� �ȴ�. -> �Է¹��� ���� ��ȭ�Ǵ� �� ���� ����
									//����� ������ ���� ������
	{
		printf("Hello World! \n");

	}

}
//������ Ǯ��
#include <stdio.h>

void main()
{
	int num;

	printf("���� �Է�: ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)			//for(int i=a; i>0; i--)
	{
		printf("Hello World! \n");

	}
}*/


/*2��
#include <stdio.h>

void main()
{
	int a=1, num;

	printf("���� ������ �Է��Ͻÿ�. : ");
	scanf_s("%d", &num);

	for (;a<=num;a++) //~�Ҷ����� ==�̰Ŵ� �������� ���..
	{
		printf("%d ", 3 * a);
	}
}*/


//������ Ǯ��
/*
#include <stdio.h>

void main()
{
	int num;

	printf("���� ������ �Է��Ͻÿ�. : ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf(" %d ", 3 * (i+1));
	}
}*/

/* 3��
#include <stdio.h>

void main()
{
	int num, sum=0;

	printf("���� ������ �Է��Ͻÿ�. : \n");

	for (;;)
	{
		scanf_s("%d", &num);

		if (num == 0)
			break;

		sum = sum + num;
	}

	printf("�������: %d \n", sum);
	printf("���α׷� ���� \n");

}*/


//������ Ǯ��
/*
#include <stdio.h>

void main()
{
	int num, sum=0; //sum�� 0���� �ʱ�ȭ�Ǿ� �־����


	do //�ϴ� �ѹ��� �Է��ϰ�

		{
			printf("���� �Է�: ");
			scanf_s("%d", &num);


			//if (num == 0); break;

			//�Էµ� ���� ��� ����

			sum += num;
		}	while (num != 0); // num�� ���� 0�� �ƴҶ� ��� �ݺ�



		printf ("�Էµ� ���� ����: %d \n", sum);
		printf("���α׷� ���� \n");

}*/


/*4��
#include <stdio.h>

void main()
{
	int dan, a = 9;

	printf("���� �Է��Ͻÿ�. : ");
	scanf_s("%d", &dan);

	for (; a > 0; a--)
	{
		printf(" %d * %d = %d \n", dan, a, dan * a);
	}
}*/


//������ Ǯ��
/*
#include <stdio.h>

void main()
{
	int dan;

	printf("���ϴ� �ܼ� �Է�: ");
	scanf_s("%d", &dan);

	for (int i = 9; i >0; i--)
	{
		printf(" %d * %d = %d \n", dan, i, dan * i);
	}

}*/

/* 5��
#include <stdio.h>

void main()
{
	int a;

	for (a = 1; a < 100; a++)
	{
		if ((a % 7 == 0) || (a % 9 == 0))
		printf("%d  ", a);
	}
		
}*/


//������ Ǯ��
/*
#include <stdio.h>

void main()
{
	int n;
	
	for (n = 1; n < 100; n++)
	{
		if (n %7 == 0 || n % 9 == 0)
		printf("%4d", n); //������ ȿ��
	}
}*/


/*6��
#include <stdio.h>

void main()
{
	int a, b;

	printf("�ΰ��� ������ �Է��Ͻÿ�: ");
	scanf_s("%d, %d", &a, &b);

	if (a > b)
		printf("�� ���� ��: %d \n", a - b);
	else
		printf("�� ���� ��: %d \n", b - a);

}*/

//������ Ǯ��
/*
#include <stdio.h>

void main()
{
	int a, b;

	printf("�Է�: ");
	scanf_s("%d", &a);

	printf("�Է�: ");
	scanf_s("%d", &b);

	int c = a - b;
	if (c < 0) c = -c;

	printf("�� ���� ��: %d \n", c);

}*/

/* 7��
#include <stdio.h>

void main()
{
	int a, b;

	printf("�ΰ��� ������ �Է��Ͻÿ�(,�� ����): ");
	scanf_s("%d, %d", &a, &b);

	printf("�� ���� ��: %d \n", a > b ? a - b : b - a);
}*/

/*
#include <stdio.h>

void main()
{
	int a, b;

	printf("�Է�: ");
	scanf_s("%d", &a);

	printf("�Է�: ");
	scanf_s("%d", &b);

	int c = a - b;
	c = (c < 0)? -c; c;

	printf("�� ���� ��: %d \n", c);

}*/


/* 8��
#include <stdio.h>

void main()
{
	int dan, num;

	dan =2;

	while (dan<10)
	{

		num = 1;
		while (num < 10)
		{
			printf(" %d * %d = %d \n", dan, num, dan * num);
			num++;

			if (dan < num)
				break;
		}
		printf("\n");
		dan+=2;
	}
}*/

//������ Ǯ��
/*
#include <stdio.h>

void main()
{
	int dan, i;

	for (dan = 1; dan < 10; dan++)
	{
		//Ȥ�� Ȧ�����̸� �Ʒ� ����� ������
		if (dan % 2 == 1) continue;			//Ư����Ȳ�϶��� ���߰� �ϱ� ���� ---�������α׷� ©�� ����

		for(i=1; i<10; i++)			//for(int i=1; i<=dan; i++) //���ڰ��� Ư������ �ƴ� ������
		{
			if (dan < i) break;
			printf(" %d * %d = %d \n", dan, i, dan * i);
		}
		printf("\n");
	}
}*/

/* 9��
#include <stdio.h>

void main()
{
	int a, b=0, num, sum=0;

	printf("�Է��Ͻ� ������ ���� :");
	scanf_s("%d", &a);

	for (; b<a; b++)
	{
		printf("���� �Է�: ");
		scanf_s("%d", &num);

		sum = sum + num;

	}

		printf("�Է��Ͻ� �������� ���: %.2f \n", (float)sum / a);
	
}*/


//������ Ǯ��
/*
#include <stdio.h>

void main()
{
	int n; //�Էµ� Ƚ���� ���� ����
	int num; //�Էµ� ���� ���� ������ ����
	int sum = 0; 

	printf("�Է��Ͻ� ������ ����: ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("input : ");
		scanf_s("%d", &num);

		sum += num;
	}

	printf("�Է°��� ���: %.2f \n", (float)sum / (float)n);
}*/


/* 10��
#include <stdio.h>

void main()
{
	int a=0, num, sum=0;

	printf("1 �̻��� 5���� ������ �Է��Ͻÿ�. \n");

	while ( a < 5)
	{
		printf("���� �Է�: ");
		scanf_s("%d", &num);

		if (num < 1)
		{
			printf("���Է����ּ��� \n\n");
			continue;
		}

		else
		a++;
		sum = sum + num;
		
	}

	
		printf("\n��: %d", sum);

}*/

/* ������ Ǯ��
#include <stdio.h>

void main()
{
	int num, sum=0, i=0;

	while (i<5)
	{
		printf("input : ");
		scanf_s("%d", &num);
		
		if (num < 1)
		{
			continue;
		}
		sum = sum + num;
		i++;
	}
	printf("\n");
	printf(" total : %d\n", sum);
}

#include <stdio.h>

void main()
{
	int num, sum = 0, i = 0;

	for (; i < 5; i++)
	{
		printf("input : ");
		scanf_s("%d", &num);

		//Ư����Ȳ: 1 �̸��̸� �������� ���� Ƚ���� �߰����� ���ƶ�
		if (num < 1)
		{
			i--; //�ļ�..���� �ö󰡸� ++�� Ƚ���� �ö󰡴ϱ� �ٽ� ����ġ�� ���� �Ŀ� �÷�
			continue;
		}
		sum = sum + num;
}
*/



//11�� ��ǯ..
/*
#include <stdio.h>

void main()
{

	for (int i = 0; i < 5; i++)
	{

		for (int k = 0; k < i; k++)
		{
			printf("o ");
		}

		printf("*\n");
	}
	
}
*/


//���ﰢ���� ���� ����� ���α׷� å ����
/*
#include <stdio.h>

void main()

{

	for (int i = 0; i < 5; i++)
	{

		for (int k = 0; k < i; k++)
		{
			printf(" ");
		}

		for (int x = 0; x < 9-i*2; x++)
		{
			printf("*");
		}
		printf("\n");
	}


}



/*
for (int i = 0; i < 5; i++)
{
	for (int k = 0; k < i; k++) printf("o");

	printf("*");
	printf("\n");
}*/


//3�� ������ ���
/*
#include <stdio.h>

void main()
{
	int dan, i;
	
	for (dan = 1; dan < 10; dan+=3)

	{
		for (i = 1; i < 10; i++)
		{
			for (int k = 0; k < 3; k++)
			{
				printf("% d * % d = %d \t", dan + k, i, (dan + k) * i);
			}
			printf("\n");

		}
		printf("\n");
	}
}*/

#include <stdio.h>

void main()
{
	for (int i = 0; i < 5; i++)
	{

		for (int k = 0; k < i; k++)		//k�� i�� ���� �������� ���� ��� �����ϱ� o�� ������ ������ ����°��� ����
		{
			printf("o ");
		}
		printf("*\n");

	}
}