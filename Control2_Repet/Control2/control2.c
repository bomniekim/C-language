/*
#include <stdio.h>

void main()
{
	int a;

	a = 0;
	while (a < 5)
	{
		printf(" %d \n", a);
		a++;
	}
}*/


/*
#include <stdio.h>

void main()
{
	int a, b;
	
	a = 0;
	while (a < 3)
	{
		printf("aaa\n");

		b = 0;
		while (b < 5)
		{
			printf("bbb\n");
			b++;
		}
	}
}
*/

/*
//������

#include <stdio.h>

void main()
{
	int a, b;

	a = 1;

	while (a < 10)
	{

		b = 1;
		while (b < 10)
		{
			printf(" %d * %d = %d \n", a, b, a*b);
			b++;
		}
		printf("\n");
		a++;
	}

}*/


/*
#include <stdio.h>

void main()
{
	int a;
	int i;
	int sum = 0; //������ ������ ���� ��������� Ȯ��.. ���� �ջ��� ����


	i = 0;
	while (i < 3)
	{
		printf("�����Է� : ");
		scanf_s("%d", &a); //scanf�� �ݺ��غ���

		sum = sum + a;

		i++;
	}

	printf("�Էµ� ������ �� : %d \n", sum);

}



#include <stdio.h>

void main()
{
	int num;
	
	while (0 < 1) // ����� 1 -> ��  while(1)�� ���� ����! �ǵ������� ����. ������ scanf���� 
	{
		scanf_s("%d", &num);
	}

	printf("���α׷� ���� \n");
}



#include <stdio.h>

void main()
{
	int i;
	while (i < 5)
	{
		printf("AAA\n");
		i++;
	}

	printf("���α׷� ���� \n");
}


//���� ���� ���α׷��ε� for�� �ٲٱ�
#include <stdio.h>

void main()
{
	int i;
	for (i=0; i<5; i++) //������ ���ָ� �ڵ� ��
	{
		printf("AAA\n");
	}

	printf("���α׷� ���� \n");
}
//�� ���� �ݺ��ؾ��ϴ� �� �˶� for�� ����ϸ� ȿ����



/*
#include <stdio.h>

void main()
{
	int a = 0;
	int sum = 0;

	for (a = 1; a <= 50; a++)
	{
		sum += a;
	}

	printf("�������: %d \n", sum);
	printf("���α׷� ���� \n");

}*/



/* //for ������
#include <stdio.h>

void main()
{
	int dan;
	int a;

	for (dan = 2; dan < 10; dan++)
	{
		for (a = 1; a < 10; a++)
		{
			printf(" %d * %d = %d\n", dan, a, dan * a);
		}

		printf("\n");
	}
}*/




#include <stdio.h>
/*
void main()
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("  %d \n", a);
		break; //!!!!!!!�ݺ���!!!!!!!�� ��������
	}

	printf("���α׷� ����\n");
}


#include <stdio.h>

void main()
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a == 5)
		{
			break; // ���� ���δ� ''�ݺ���''�� �������� -> if���� ����!
		}
		printf("  %d \n", a);
	}

	printf("���α׷� ����\n");
}




void main()
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a == 5)
		{
			continue; // ���� ���� �۾��� ���߰� ���� �ݺ��۾��� ���� -> Ư�� ��Ȳ�� �Ǹ� �� ��Ȳ�� ������
		}
		printf("  %d \n", a);
	}

	printf("���α׷� ����\n");
}


void main()
{
	int a = 10;

	do //��� �ѹ��� ������ ������ ���ǿ� �´��� ��        >���� ��쿡�� while�� ������ �����϶� ��¦ �ٸ�
	{
		printf("aaa\n");
		a++;
	} while (a < 5);


	printf("���α׷� ����\n");
}*/


void main()
{
	int dan;
	int i;


	do
	{
		printf("�ܼ��Է�: ");
		scanf_s("%d", &dan);

	} while (dan < 2 || dan>9);

	
	{
		for (i = 0; i < 10; i++)
		{
			printf("%d * %d =%d \n", dan, i, dan * 1);
		}
	}
}
