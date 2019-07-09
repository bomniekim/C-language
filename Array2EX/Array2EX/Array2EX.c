
// 예제 2-1
/*
#include <stdio.h>

void main()
{
	//2차원 배열의 선언
	int array[4][3];


	array[0][0] = 1; array[0][1] = 2; array[0][2] = 3;
	array[1][0] = 4; array[1][1] = 5; array[1][2] = 6;
	array[2][0] = 7; array[2][1] = 8; array[2][2] = 9;
	array[3][0] = 10; array[3][1] = 11; array[3][2] = 12;

	printf("%3d %3d %3d \n", array[0][0], array[0][1], array[0][2]);
	printf("%3d %3d %3d \n", array[1][0], array[1][1], array[1][2]);
	printf("%3d %3d %3d \n", array[2][0], array[2][1], array[2][2]);
	printf("%3d %3d %3d \n", array[3][0], array[3][1], array[3][2]);
}*/



// 2-2
/*
#include <stdio.h>

void main()
{
	//2차원 배열 선언과 동시에 데이터 초기화
	int array1[4][3] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int array2[4][3] = { 1,2,3,4,5 };

	//2차원 배열 array1의 데이터 출력
	printf("%3d %3d %3d \n", array1[0][0], array1[0][1], array1[0][2]);
	printf("%3d %3d %3d \n", array1[1][0], array1[1][1], array1[1][2]);
	printf("%3d %3d %3d \n", array1[2][0], array1[2][1], array1[2][2]);
	printf("%3d %3d %3d \n", array1[3][0], array1[3][1], array1[3][2]);

	printf("------------------\n");

	printf("%3d %3d %3d \n", array2[0][0], array2[0][1], array2[0][2]);
	printf("%3d %3d %3d \n", array2[1][0], array2[1][1], array2[1][2]);
	printf("%3d %3d %3d \n", array2[2][0], array2[2][1], array2[2][2]);
	printf("%3d %3d %3d \n", array2[3][0], array2[3][1], array2[3][2]);

}*/

//2-3
/*
#include <stdio.h>

void main()
{
	//2차원 배열 선언과 동시에 '행 단위로' 데이터 초기화
	int array1[4][3] = { {1,2},{3},{4},{5}};
	int array2[4][3] = { {1,2,3},{4,5,6},{7,8,9},{10}};

	//2차원 배열 array1의 데이터 출력
	printf("%3d %3d %3d \n", array1[0][0], array1[0][1], array1[0][2]);
	printf("%3d %3d %3d \n", array1[1][0], array1[1][1], array1[1][2]);
	printf("%3d %3d %3d \n", array1[2][0], array1[2][1], array1[2][2]);
	printf("%3d %3d %3d \n", array1[3][0], array1[3][1], array1[3][2]);

	printf("------------------\n");

	printf("%3d %3d %3d \n", array2[0][0], array2[0][1], array2[0][2]);
	printf("%3d %3d %3d \n", array2[1][0], array2[1][1], array2[1][2]);
	printf("%3d %3d %3d \n", array2[2][0], array2[2][1], array2[2][2]);
	printf("%3d %3d %3d \n", array2[3][0], array2[3][1], array2[3][2]);

}*/

//2-4
/*
#include <stdio.h>

void main()
{
	//2차원 배열의 선언
	int array[2][2];
	int i, k;


	//2차원 배열에 데이터 입력
	for (i = 0; i < 2; i++)
	{
		for (k = 0; k < 2; k++)
		{
			printf("정수를 입력하세요 : ");
			scanf_s("%d", &array[i][k]);
		}
	}

	//2차원 배열에 데이터 출력
	for (i = 0; i < 2; i++)
	{
		for (k = 0; k < 2; k++)
		{
			printf("%3d", array[i][k]);
		}
		printf("\n");
	}
}*/



/* 2-5
#include <stdio.h>

void main()
{
	int i, j, k;
	int array[3][3][3] = {
		{1,2,3,4,5,6,7,8,9},
	{10,11,12,13,14,15,16,17,18},
	{19,20,21,22,23,24,25,26,27}
	};

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 3; k++)
			{
				printf("%3d", array[i][j][k]);
			}
			printf("\n");

		}printf("\n");

		

	}

}*/

/* 2-6
#include <stdio.h>

void main()
{
	int array[2][3] = { 1,2,3,4,5,6 };
	printf("%p %p %p \n", &array[0][0], &array[0][1], &array[0][2]);
	printf("%p %p %p \n", &array[1][0], &array[1][1], &array[1][2]);

}*/


//p.324 1번

/*
#include <stdio.h>

void main()
{
	int array1[2][4] = { {1,2,3,4},{5,6,7,8} };
	int array2[4][2] = { {5,1}, {6,2}, {7,3}, {8,4} };

	int i = 0, k=0;
	for (i = 0; i < 2; i++)
	{
		for (k = 0; k < 4; k++)
		{
			printf("%2d", array1[i][k]);
		}
		printf("\n");
	}

	printf("-----90도 회전-----\n");

	for (i = 0; i < 4; i++)
	{
		for (k = 0; k < 2; k++)
		{
			printf("%2d", array2[i][k]);
		}
		printf("\n");

	}
}*/


/* 2번
#include <stdio.h>

void main()
{
	int array[3][3];

	int i, k;
	int total = 0;


	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 3; k++)
		{
			printf("%d층 %d호의 가족은 몇 명입니까? ", i + 1, k + 1);
			scanf_s("%d", &array[i][k]);

			total = total + array[i][k];
		}
	}
	printf("\n");
	printf("열혈아파트 총 주민 수는 %d명입니다.", total);
}
*/

/*
#include <stdio.h>

void main()
{
	int array[9][9];

	int dan, i;

	for (dan = 0; dan < 9; dan++)
	{
		for (i = 0; i < 9; i++)
		{
			printf("%d", dan*i);
		}
		printf("\n");
	}

}*/


#include <stdio.h>

void main()
{
	int arr1[4][3] = { {23,75,85},{12,77,51},{25,66,30},{19,90,88} };
	int arr2[4][3] = { { 11,15,47 }, { 74,85,69 }, { 57,86,28 }, { 90,22,33 } };


	int i, k;
	int sum = 0;
	
	for (i = 0; i < 4; i++)
	{
		for (k = 0; k < 3; k++)
		{
		sum = sum + arr1[i][k];

		}	
		
		printf("행 간의 합: %d \n", sum);

	}		













	/*
	int i, k;

	for (i = 0; i < 4; i++)
	{
		for (k = 0; k < 3; k++)
		{
			int hangsum=0;
			hangsum = hangsum + arr1[i][k];

			printf("arr1의 %d행 간의 합: %d \n", i + 1, hangsum);

		}
		printf("\n");
		
	}*/


}


