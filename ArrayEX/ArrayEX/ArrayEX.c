
/* ���� 1-1

#include <stdio.h>

void main()
{
	int student[5];

	student[0] = 90;
	student[1] = 80;
	student[2] = 70;

	printf("ù ��° �л��� ����: %d \n", student[0]);
	printf("�� ��° �л��� ����: %d \n", student[1]);
	printf("�� ��° �л��� ����: %d \n", student[2]);
	printf("�� ��° �л��� ����: %d \n", student[3]);
	printf("�ټ� ��° �л��� ����: %d \n", student[4]);

}*/


/* 1-2
#include <stdio.h>

void main()
{
	int arr1[5] = { 90, 80, 70, 60, 50 }; 
	int arr2[] = { 90, 80, 70, 60, 50 }; //�迭 ���̸� �������� ���� ��쿡�� �������� ������ŭ �迭 ���̰� �ڵ� ����
	int arr3[5] = { 90, 80, 70 };     //�� ���� �����ϰ� ������ ������ 0���� ä����

	printf("%d %d %d %d %d \n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4]);
	printf("%d %d %d %d %d \n", arr2[0], arr2[1], arr2[2], arr2[3], arr2[4]);
	printf("%d %d %d %d %d \n", arr3[0], arr3[1], arr3[2], arr3[3], arr3[4]);

}*/


/* 1-3
#include <stdio.h>

void main()
{
	int arr[3] = { 87,99,80 };
	int total = 0;

	total = arr[0] + arr[1] + arr[2];
	printf("������ %d�̰�", total);
	printf("����� %.2lf�Դϴ�. \n", (double)total / 3);
}*/



/* 1-4
#include <stdio.h>

void main()
{
	int arr[3] = { 87,65,78 };
	int i, total = 0;

	for (i = 0; i < 3; i++)
	{
		total = total + arr[i];
		printf("�迭�� ��� array[%d]�� ��: %d \n", i, arr[i]);
	}

	printf("������ %d�̰�", total);
	printf("����� %.2lf�Դϴ�. \n", (double)total / 3);
}*/

/* 1-5
#include <stdio.h>

void main()
{
	int arr1[3] = { 1,2,3 };
	char arr2[3] = { 'A','B','C' };

	printf("%x %x %x \n", &arr1[0], &arr1[1], &arr1[2]);
	printf("%x %x %x \n", &arr2[0], &arr2[1], &arr2[2]);

}*/


/* p.295 1��
#include <stdio.h>

void main()
{
	char arr[3] = { 'A','B','C' };

	for (int i = 0; i < 3; i++)
	{
		printf("%c", arr[i]);
	}
	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		printf("%c", arr[i]);
	}
	for (int i = 2; i >= 0 ; i--)
	{
		printf("%c", arr[i]);
	}
}*/



/* 2��
#include <stdio.h>

void main()
{
	int score[11]; // score[0]�� �����Ⱚ������ ����
	int total = 0;


	
		for (int i = 1; i <= 10; i++)
		{
			printf("%d��° �л��� �����Է�: ", i);
			scanf_s("%d", &score[i]);

			total += score[i];		
		}

	double aver = (double)total / 10;

	printf(" ���� : %d \n", total);
	printf(" ��� : %.2lf \n", aver);

}*/

/* 3��
#include <stdio.h>

void main()
{
	int garo1[5] = { 90,78,77,98,98 };
	int garo2[5] = { 80,45,67,88,57 };
	int garo3[5] = { 88,99,65,55,74 };
	
	int garo1sum=0, garo2sum=0, garo3sum = 0;


	for (int i = 0; i < 5; i++)
	{
		garo1sum = garo1sum + garo1[i];
		garo2sum = garo2sum + garo2[i];
		garo3sum = garo3sum + garo3[i];

	}
	printf("���� ��: %d \n", garo1sum);
	printf("���� ��: %d \n", garo2sum);
	printf("���� ��: %d \n\n", garo3sum);
	
	for (int i = 0; i < 5; i++)
	{
		printf("���� ��: %d\n", garo1[i]+garo2[i]+garo3[i]);
	}

	int total = 0;
	total = garo1sum + garo2sum + garo3sum;

	printf("\n��� ���� ��: %d\n\n", total);
}*/



/*4��
#include <stdio.h>

void main()
{
	int dan;
	
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &dan);

	int gugu[9];
	
	for (int i = 1; i < 10; i++)
	{
		printf("%d ", dan * i);

	}
}*/


/*5��
#include <stdio.h>

void main()
{
	double arr1[] = { 2.2, 3.5, 2.5, 10.1, 4.0 };
	double arr2[] = { 3.3, 2.0, 4.0, 1.0, 2.5 };

	for (int i = 0; i < 5; i++)
	{
		printf("���� �迭 ��� ���� ����: %.2lf\n", arr1[i] * arr2[i]);
	}
}*/