/* 1��


#include <stdio.h>

void main()
{
	int arr[5];
	int max, min;
	int total = 0;


	for (int i = 0; i <5; i++)
	{
		printf("%d��° ������ �Է��Ͻÿ�: ", i+1);
		scanf_s("%d", &arr[i]); //�迭�� �̸��� �迭�� �ּ�
	}
	
	max = arr[0]; //for�� �ȿ� ���� max�� ���� arr[0]���� �ʱ�ȭ�ǹǷ� for�� �ۿ� ��� ��ȭ�� max���� �״�� ����
	min = arr[0];

	for (int k = 0; k < 5; k++)
	{	
	
		if (arr[k] > max) max = arr[k];
		if (arr[k] < min) min = arr[k];
		total = total + arr[k];
	}
	printf("�ִ밪�� %d�Դϴ�. \n", max);
	printf("�ּҰ��� %d�Դϴ�. \n", min);
	printf("�Էµ� ���� ������ %d�Դϴ�.\n", total);
}*/


/*2��
#include <stdio.h>

void main()
{
	char arr[30];
	int count = 0;


	printf("���ܾ �Է��Ͻÿ�: ");
	scanf_s("%s", &arr, 30);

	for (int i = 0; i < 30; i++)
	{
		if(arr[i]==0) break;
		count++;

	}
	printf("�ܾ��� ���̴� %d�Դϴ�.\n", count);
}
*/

/* 3��
#include <stdio.h>

void main()
{
	char arr[30];
	int max;


	printf("���ܾ �Է��Ͻÿ�: ");
	scanf_s("%s", &arr, 30);

	max = arr[0];

	for (int i = 0; i < 30; i++)
	{
		if (arr[i] > max) max = arr[i];

	}
	printf("�ƽ�Ű �ڵ� ���� ���� ū ���ڴ� %c�Դϴ�.\n", max);
}*/


/*
#include <stdio.h>

void main()
{
	char arr[30];

	printf("���ܾ �Է��Ͻÿ�: ");
	scanf_s("%s", &arr, 30);

	for (int i = 0; i < 31; i++)
	{
		if (arr[i]==0)
		printf("%s", &arr[30 - i]);
	}

}*/


/* 5��
#include <stdio.h>

void main()
{
	int student;
	int score[10];
	int sum=0;

	printf("�л��� ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &student);

	for (int i = 0; i < 10; i++)
	{
		printf("�л� %d�� ������ �Է��ϼ��� : ", i + 1);
		scanf_s("%d", &score[i]);
	
		if (score[i] > 100)
		{
			printf("�߸��� �����Դϴ�. �ٽ� �Է��Ͻÿ�.\n");
			i--;
			continue;
		}
		
		sum = sum + score[i];

		if (student == i+1) break;
		
	}

	printf("\n���� ����� %.1f �Դϴ�. ", (float)sum / (float)student);
}*/


/*
#include <stdio.h>

void main()
{
	int arr[10];
	int i = 0;

	printf("0~100������ 10���� ������ enter�� �Է��Ͻÿ�. \n");

	for (; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);

		if (arr[i] < 0 || arr[i]>100)
		{
			printf("�߸��� �����Դϴ�. �ٽ� �Է��Ͻÿ�.\n");
			i--;
			continue;
		}

		if (arr[i])
	}

		{
		}
	




}*/

/* 6�� ������ Ǯ��
#include <stdio.h>

void main()
{
	int arr[10] = { 0 }; //������׷� ī���� �迭���� -> �ʱ�ȭ �� 0 //�迭�� �Է¹��� ���� �����ϴ°� �ƴϰ� �Է¹޾� �׿� �´� ������ ���� 1�� Ű���
	int num; //�Է¹��� ��

	for (int i = 0; i < 10; i++)
	{
		printf("input: ");
		scanf_s("%d", &num);

		//�Է¹��� ���� ���� ã��
		for (int k = 0; k < 10; k++) //num���� ���� �� �ϳ��� 10�� ������ üũ�ؾ� �ϹǷ� ��ø�ݺ��� ���
		{
			if (num >= 10 * k + 1 && num <= 10 * (k + 1))
			{
				arr[k]++;
				break; //
			}
		}
	}


		//�ݺ��ؼ� *��� ���
		for (int i = 0; i < 10; i++)
		{
			printf(" %2d - %3d : ", 10 * i + 1, (i + 1) * 10);

			for (int k = 0; k < arr[i]; k++) //arr[i]�� ���� ī����
			{
				printf("*");
			}
			printf("\n");
		}

	
}*/



/*
#include <stdio.h>

void main()
{
	int seat[10];

}*/



/* 8��
#include <stdio.h>

void main()
{
	int arr1[5] = { 10, 20, 30, 40, 50 };
	int arr2[5] = { 1, 2, 3, 4, 5 };
	int arr3[5];

	printf("arr3[5]: {");
	
	for (int i = 0; i < 5; i++)
	{
		arr3[i] = arr1[i] + arr2[4 - i];
		printf("%3d", arr3[i]);
	}printf("}");

}*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()

{

	int n = rand();
	int i, k;
	int a;
	int arr[5][5];

	
	srand(time(NULL));

	for (int i = 0; i < 25; i++)
	{
		arr[i] = rand() % 25 + 1;
		//�ߺ��� �˻�

		for (int k = 0; k < i; k++)//�˻縦 ��� �ϰ� ���� �������� �ʾ����ϱ�
		{
			if (arr[i] == arr[k]) //�ߺ��Ǿ���.
			{
				i--;
				break;
			}

		}
	}

	int y, x;
	int arr2[5][5];

	for (int i = 0; i < 25; i++)
	{
		//1���� -> 2����
		y = i / 5; // ��: 2������ ����
		x = i % 5; //������:2������ ȣ��
		arr2[x][y] = arr[i];

		for (int i = 0; i < 5; k++)
		{
			for (int k = 0; k < 5; k++)
			{
				printf("%2d", arr2[i][k]);
			}
			printf(" \n");
		}
	}//����� 2����->1������ �ݴ�
	i = y*5 + x; //����ȣ* ������ ���� + ȣ�ǹ�ȣ


}


	
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()

{

	int n = rand();

	srand(time(NULL));

	int arr[25];
		

	for (int i = 0; i < 25; i++)
	{
		arr[i] = rand() % 25 + 1;
		//�ߺ��� �˻�
		for (int k = 0; k < i; k++)//�˻縦 ��� �ϰ� ���� �������� �ʾ����ϱ�
		{
			if (arr[i] == arr[k]) //�ߺ��Ǿ���.
			{
				i--;
				break;
			}

		}
	}

	for (int k = 0; k < 25; k++)
	{

		if (k % 5 == 0) printf("\n");
		printf(" %2d", arr[k]);
	}


}



}*/