
/* 예제 1-1

#include <stdio.h>

void main()
{
	int student[5];

	student[0] = 90;
	student[1] = 80;
	student[2] = 70;

	printf("첫 번째 학생의 점수: %d \n", student[0]);
	printf("두 번째 학생의 점수: %d \n", student[1]);
	printf("세 번째 학생의 점수: %d \n", student[2]);
	printf("네 번째 학생의 점수: %d \n", student[3]);
	printf("다섯 번째 학생의 점수: %d \n", student[4]);

}*/


/* 1-2
#include <stdio.h>

void main()
{
	int arr1[5] = { 90, 80, 70, 60, 50 }; 
	int arr2[] = { 90, 80, 70, 60, 50 }; //배열 길이를 설정하지 않은 경우에는 데이터의 개수만큼 배열 길이가 자동 설정
	int arr3[5] = { 90, 80, 70 };     //세 개만 저장하고 나머지 공간은 0으로 채워짐

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
	printf("총점은 %d이고", total);
	printf("평균은 %.2lf입니다. \n", (double)total / 3);
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
		printf("배열의 요소 array[%d]의 값: %d \n", i, arr[i]);
	}

	printf("총점은 %d이고", total);
	printf("평균은 %.2lf입니다. \n", (double)total / 3);
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


/* p.295 1번
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



/* 2번
#include <stdio.h>

void main()
{
	int score[11]; // score[0]은 쓰레기값가지고 있음
	int total = 0;


	
		for (int i = 1; i <= 10; i++)
		{
			printf("%d번째 학생의 점수입력: ", i);
			scanf_s("%d", &score[i]);

			total += score[i];		
		}

	double aver = (double)total / 10;

	printf(" 총점 : %d \n", total);
	printf(" 평균 : %.2lf \n", aver);

}*/

/* 3번
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
	printf("가로 합: %d \n", garo1sum);
	printf("가로 합: %d \n", garo2sum);
	printf("가로 합: %d \n\n", garo3sum);
	
	for (int i = 0; i < 5; i++)
	{
		printf("세로 합: %d\n", garo1[i]+garo2[i]+garo3[i]);
	}

	int total = 0;
	total = garo1sum + garo2sum + garo3sum;

	printf("\n모든 수의 합: %d\n\n", total);
}*/



/*4번
#include <stdio.h>

void main()
{
	int dan;
	
	printf("단을 입력하세요 : ");
	scanf_s("%d", &dan);

	int gugu[9];
	
	for (int i = 1; i < 10; i++)
	{
		printf("%d ", dan * i);

	}
}*/


/*5번
#include <stdio.h>

void main()
{
	double arr1[] = { 2.2, 3.5, 2.5, 10.1, 4.0 };
	double arr2[] = { 3.3, 2.0, 4.0, 1.0, 2.5 };

	for (int i = 0; i < 5; i++)
	{
		printf("같은 배열 요소 간의 곱셈: %.2lf\n", arr1[i] * arr2[i]);
	}
}*/