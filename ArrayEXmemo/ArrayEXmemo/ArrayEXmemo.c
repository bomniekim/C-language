/* 1번


#include <stdio.h>

void main()
{
	int arr[5];
	int max, min;
	int total = 0;


	for (int i = 0; i <5; i++)
	{
		printf("%d번째 정수를 입력하시오: ", i+1);
		scanf_s("%d", &arr[i]); //배열의 이름은 배열의 주소
	}
	
	max = arr[0]; //for문 안에 쓰면 max의 값이 arr[0]으로 초기화되므로 for문 밖에 써야 변화된 max값을 그대로 유지
	min = arr[0];

	for (int k = 0; k < 5; k++)
	{	
	
		if (arr[k] > max) max = arr[k];
		if (arr[k] < min) min = arr[k];
		total = total + arr[k];
	}
	printf("최대값은 %d입니다. \n", max);
	printf("최소값은 %d입니다. \n", min);
	printf("입력된 값의 총합은 %d입니다.\n", total);
}*/


/*2번
#include <stdio.h>

void main()
{
	char arr[30];
	int count = 0;


	printf("영단어를 입력하시오: ");
	scanf_s("%s", &arr, 30);

	for (int i = 0; i < 30; i++)
	{
		if(arr[i]==0) break;
		count++;

	}
	printf("단어의 길이는 %d입니다.\n", count);
}
*/

/* 3번
#include <stdio.h>

void main()
{
	char arr[30];
	int max;


	printf("영단어를 입력하시오: ");
	scanf_s("%s", &arr, 30);

	max = arr[0];

	for (int i = 0; i < 30; i++)
	{
		if (arr[i] > max) max = arr[i];

	}
	printf("아스키 코드 값이 가장 큰 문자는 %c입니다.\n", max);
}*/


/*
#include <stdio.h>

void main()
{
	char arr[30];

	printf("영단어를 입력하시오: ");
	scanf_s("%s", &arr, 30);

	for (int i = 0; i < 31; i++)
	{
		if (arr[i]==0)
		printf("%s", &arr[30 - i]);
	}

}*/


/* 5번
#include <stdio.h>

void main()
{
	int student;
	int score[10];
	int sum=0;

	printf("학생의 수를 입력하시오: ");
	scanf_s("%d", &student);

	for (int i = 0; i < 10; i++)
	{
		printf("학생 %d의 성적을 입력하세요 : ", i + 1);
		scanf_s("%d", &score[i]);
	
		if (score[i] > 100)
		{
			printf("잘못된 성적입니다. 다시 입력하시오.\n");
			i--;
			continue;
		}
		
		sum = sum + score[i];

		if (student == i+1) break;
		
	}

	printf("\n성적 평균은 %.1f 입니다. ", (float)sum / (float)student);
}*/


/*
#include <stdio.h>

void main()
{
	int arr[10];
	int i = 0;

	printf("0~100사이의 10개의 정수를 enter로 입력하시오. \n");

	for (; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);

		if (arr[i] < 0 || arr[i]>100)
		{
			printf("잘못된 정수입니다. 다시 입력하시오.\n");
			i--;
			continue;
		}

		if (arr[i])
	}

		{
		}
	




}*/

/* 6번 교수님 풀이
#include <stdio.h>

void main()
{
	int arr[10] = { 0 }; //히스토그램 카운터 배열변수 -> 초기화 값 0 //배열에 입력받은 값을 저장하는게 아니고 입력받아 그에 맞는 범위의 값을 1씩 키우기
	int num; //입력받은 값

	for (int i = 0; i < 10; i++)
	{
		printf("input: ");
		scanf_s("%d", &num);

		//입력받은 값의 범위 찾기
		for (int k = 0; k < 10; k++) //num으로 받은 값 하나를 10번 돌려서 체크해야 하므로 중첩반복문 사용
		{
			if (num >= 10 * k + 1 && num <= 10 * (k + 1))
			{
				arr[k]++;
				break; //
			}
		}
	}


		//반복해서 *모양 찍기
		for (int i = 0; i < 10; i++)
		{
			printf(" %2d - %3d : ", 10 * i + 1, (i + 1) * 10);

			for (int k = 0; k < arr[i]; k++) //arr[i]의 값은 카운터
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



/* 8번
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
		//중복값 검사

		for (int k = 0; k < i; k++)//검사를 몇번 하게 될지 정해지지 않았으니깐
		{
			if (arr[i] == arr[k]) //중복되었다.
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
		//1차원 -> 2차원
		y = i / 5; // 몫: 2차원의 층수
		x = i % 5; //나머지:2차원의 호실
		arr2[x][y] = arr[i];

		for (int i = 0; i < 5; k++)
		{
			for (int k = 0; k < 5; k++)
			{
				printf("%2d", arr2[i][k]);
			}
			printf(" \n");
		}
	}//참고로 2차원->1차원은 반대
	i = y*5 + x; //층번호* 한줄의 개수 + 호실번호


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
		//중복값 검사
		for (int k = 0; k < i; k++)//검사를 몇번 하게 될지 정해지지 않았으니깐
		{
			if (arr[i] == arr[k]) //중복되었다.
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