/* ���� 8-1
#include <stdio.h>

void main()
{
	int num;
	printf("���ڸ� �Է��ϼ��� :");
	scanf_s("%d", &num);

	if (num >= 0)
	{
		printf("����Դϴ�.\n");
	}
	
	if (num < 0)
	{
		printf("�����Դϴ�.\n");
	}
}*/


/* 8-3
#include <stdio.h>

void main()
{
	int age;

	printf("���� �Է� : \n");
	scanf_s("%d", &age);

	if (age >= 15 && age <= 100)
	{
		printf("ȸ�� ������ �����մϴ�. \n");
	}
	else
	{
		printf("ȸ�� ������ �Ұ����մϴ�.\n");
	}
}*/


/* 8-4
#include <stdio.h>

void main()
{
	int num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);

	if (num > 0)
	{
		printf("0���� ū ���� num�� ���� \n");
	}
	else
	{
		printf("0 �Ǵ� 0���� ���� ���� num�� ���� \n");
	}
}
*/



/* 8-5
#include <stdio.h>

void main()
{
	int num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);

	if (num > 0)
	{
		printf("0���� ū ���� num�� ���� \n");
	}
	else
	{
		if (num == 0)
		{
			printf("0�� num�� ���� \n");
		}
		else
		{
			printf("0 �Ǵ� 0���� ���� ���� num�� ���� \n");
		}
	}
}*/



/* 8-6 //8-5������ �߰�ȣ ����
#include <stdio.h>

void main()
{
	int num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);

	if (num > 0)
	{
		printf("0���� ū ���� num�� ���� \n");
	}
	else if (num == 0)
		{
			printf("0�� num�� ���� \n");
		}
	else
		{
			printf("0 �Ǵ� 0���� ���� ���� num�� ���� \n");
		}
	}
}*/


/* 8-7
#include <stdio.h>

void main()
{
	int num;

	printf("C��� ���� �Է� : ");
	scanf_s("%d", &num);

	if (num >= 95)
	{
		printf("A+�Դϴ�. \n");
	}
	else
	{
		if (num >= 90)
		{
			printf("A�Դϴ�. \n");
		}
		else
		{
			if (num >= 85)
			{
				printf("B+�Դϴ�. \n");
			}
			else
			{
				if (num >= 80)
				{
					printf("B�Դϴ�. \n");
				}
				else
				{
					printf("F�Դϴ�. \n");
				}
			}
		}
	}
}*/


/* 8-8
#include <stdio.h>

void main()
{
	int num;

	printf("C��� ���� �Է� : ");
	scanf_s("%d", &num);

	if (num >= 95)
	{
		printf("A+�Դϴ�. \n");
	}
	else if (num >= 90)
	{
		printf("A�Դϴ�. \n");
	}
	else if (num >= 85)
	{
		printf("B+�Դϴ�. \n");
	}
	else if (num >= 80)
	{
		printf("B�Դϴ�. \n");
	}
	else printf("F�Դϴ�. \n");
}*/


/* 8-9
#include <stdio.h>

void main()
{
	int num;

	printf("C��� ���� �Է� : ");
	scanf_s("%d", &num);

	if (num >= 95)
	{
		printf("A+�Դϴ�. \n");
	}
	if (num >= 90) // else if (num >= 90)
	{
		printf("A�Դϴ�. \n");
	}
	if (num >= 85) // else if (num >= 85)
	{
		printf("B+�Դϴ�. \n");
	}
	if (num >= 80) // else if (num >= 80)
	{
		printf("B�Դϴ�. \n");
	}
	else printf("F�Դϴ�. \n");
}*/


/*8-10
#include <stdio.h>

void main()
{
	int num;

	printf("�� �� ����ġ�� �����ðڽ��ϱ�?");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1:
		printf("������ ���� \n");
		break;

	case 2:
		printf("������ ���� \n");
		break;

	case 3:
		printf("���� \n");
		break;

	default:
		printf("����ġ ����: �츮�� ����ġ�� 1�� ~ 3�������� �ֽ��ϴ�. \n");
	}
}*/



/* 8-11
#include <stdio.h>

void main()
{
	char ch;

	printf(" (T)hursday, (F)riday, (S)aturday \n");
	printf(" ���� �Է� (T, F, S) : ");
	scanf_s("%c", &ch, 1);

	switch (ch)
	{
	case 'T':
	case 't':
		printf("Thurday \n");
		break;

	case 'F':
	case 'f':
		printf("Friday \n");
		break;

	case 'S':
	case 's':
		printf("Saturday \n");
		break;

	default:
		printf("�߸� �ԷµǾ����ϴ�. \n");
	}
}*/



/* p.222 1��
#include <stdio.h>

void main()
{
	int a, b;
	
	printf("�� ���� ������ �Է��ϼ���. :");
	scanf_s("%d, %d", &a, &b);

	if (a > b)
	{
		printf("ū ���� %d�Դϴ�.", a);
	}
	else if (a == b)
	{
		printf("�� ���� �����ϴ�.");
	}
	else
	{
		printf("ū ���� %d�Դϴ�.", b);
	}
	
}*/



/* 2��
#include <stdio.h>

void main()
{
	int num;

	printf("3�ڸ� �������� �Է��ϼ���. : ");
	scanf_s("%d", &num);
	

	int num1, num2, num3;

	num1 = num / 100;
	num2 = (num % 100) / 10;
	num3 = (num % 100) % 10;

	if (num1 % 2 == 0)
		printf("%d : ¦�� ", num1);
	else 
		printf("%d : Ȧ�� ", num1);

	if (num2 % 2 == 0)
		printf("%d : ¦�� ", num2);
	else
		printf("%d : Ȧ�� ", num2);

	if (num3 % 2 == 0)
		printf("%d : ¦�� ", num3);
	else
		printf("%d : Ȧ�� ", num3);

}*/


/* 3��
#include <stdio.h>

void main()
{
	int score;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &score);

	if (score <= 100)
	{
		switch (score / 10)
		{
		case 10:
		case 9:
			printf("A");
			break;

		case 8:
			printf("B");
			break;

		default:
			printf("F");
		}
	}
	else
		printf("������ �߸� �Է��ϼ̽��ϴ�.");

}*/



/*4��*/
#include <stdio.h>

void main()
{
	int num;

	for (num = 0; num < 100; num++)
	{
		if (num % 2 == 0) //Ȧ���� ���
			continue;

		printf("%d \n", num);
	}
}



/* 5��
#include <stdio.h>

void main()
{
	int a, b, c;

	printf("input :");
	scanf_s("%d", &a);
	printf("input :");
	scanf_s("%d", &b);
	printf("input :");
	scanf_s("%d", &c);

	if (a >= b && a >= c)
		printf("result: %d \n", a);
	else if (b > a && b > c)
		printf("result: %d \n", b);
	else
		printf("result: %d \n", c);
}*/