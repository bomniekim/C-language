/*
#include <stdio.h>

void main()
{
	int array[5];

	array[0] = 10;

	printf(" d% \n", array); // 배열의 이름 == 배열의 첫번째 요소의 시작 주소
	printf(" d% \n", array[0]); // 10이 출력됨
}*/


//다차원 배열
#include <stdio.h>

void main()
{
	//     [동][층][호]
	int array[3][5]; //15개의 변수가 만들어진 것 ->  필연적으로 중첩반복문이 사용됨

	//int array[5];
	//int array2[5];
	//int array3[5];

	/*
	array[0][0] = 10;
	array[0][1] = 20;
	array[0][2] = 30;
	array[0][3] = 40;
	array[0][4] = 50;

	array[1][0] = 50;
	array[1][1] = 60;
	array[1][2] = 70;
	array[1][3] = 80;
	array[1][4] = 90;

	array[2][0] = 50;
	array[2][1] = 80;
	array[2][2] = 90;
	array[2][3] = 30;
	array[2][4] = 90;
	*/

	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 5; k++)
		{
			printf("%d반 %d번 학생 input : ", i+1,k+1); //0반 0번 -> 1반 1번
			scanf_s("%d", &array[i][k]);
		}
		printf("\n");
	}

	
	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 5; k++)
		{
			printf(" %d ", array[i][k]);
		}
		printf("\n");
	}
	
	
	
	

	
}

#include<stdio.h>

void main()
{
		//	 [지구][단지][동][층][호]
	int array/*[3][4]*/[2][3][5]; //3차원 배열

	for (int i = 0; i < 2; i++)
	{
		for (int k = 0; k < 3; k++)
		{
			for (int g = 0; g < 5; g++)
			{
				printf("  %d  ", array[i][k][g]);
			}
		}
	}

}



#include <stdio.h>

void main()
{
	int array[3][5]; //메모리상에서 옆으로 이동
						//호실의 값을 잘못 쓰면 다른 데가 영향


	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 5; k++)

		{
			printf("  %d  ", array[i][k]);
		}
		printf("\n");
	}
	printf("\n\n");


}

void main()
{
	int array[3][5] = { 
	{10,20,30,40,50,},
	{10,20,300,400,500},
	{10000,2000,3000,5000,411} 
	}; // 중첩괄호 - 각 층마다 보기쉽게
	
	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 5; k++)
		{
			printf(" %5d ", array[i][k]);
		}
	}
}


#include <stdio.h>


//문자열(String)저장 -> char 배열
void main()
{
	char str[5]; // { 'H', 'e', 'l', 'l', 'o' } //초기화 연산자{}; 같은의미
	//str = "Hello" // 대입 연산 -> 에러

	/*
	scanf_s("%c", &str[0], 1);//A
	scanf_s("%c", &str[1], 1);//Enter //입력이 끝났다는 것을 Enter/Space로 인식
	scanf_s("%c", &str[2], 1);//B
	scanf_s("%c", &str[3], 1);//Enter
	scanf_s("%c", &str[4], 1);//C		//문자열로 인식하도록 한번에 치자
	printf("\n\n");
	*/

	printf("문자열 입력: ");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%c", &str[i], 1);
	}
	printf("\n\n");

	str[4] = 0;


	printf("%c", "A"); 

	printf("출력: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%c", &str[i]);
	}
	printf("\n\n");

	/*
	printf("%c", str[0]); //65
	printf("%c", str[1]); //10 (아스키코드) //
	printf("%c", str[2]); //66
	printf("%c", str[3]); //10
	printf("%c", str[4]); //67
	printf("\n\n");*/

	printf("%s\n", "Hello"); // 문자열 상수는 주소를 넘겨준것.. //6바이틀 차지함
	printf("%s\n", str);    //요상 : 쓰레기가 나온거임 -> %d는 메모리에 가서 4byte를 고정소수점 방식으로 읽어와
					//배열을 준게 아니라 '주소'를 준것	 //	%f는 메모리에 가서 4byte를 부동소수점 방식으로 읽어와
					// str == &str[0]== #100		 //  %s만 유별나게 문자열의 시작 주소값을 달라고 함.. 그 주소부터 읽어서 0을 만날때 멈춘다
}													// 쓰레기 값을 찍다가 메모리의 범위를 벗어나서 멈춤 -> 에러나지는 않는다

//문자열 끝문자 : NULL 문자, \0





#include <stdio.h>


//문자열(String)저장 -> char 배열
void main()
{
	char str[6];

	str[0] = 'H';
	str[1] = 'i';

	printf("  %s \n", str);
}


#include <stdio.h>


//문자열(String)저장 -> char 배열
void main()
{
	char str[6] = {'H','i'};

	printf("  %s \n", str); //Hi만 찍힘. 0을 만나면 멈추니깐
}

#include <stdio.h>


//문자열(String)저장 -> char 배열
void main()
{
	char str[6] = "Hi"; //""는 뒤에 한자리 더 차지함

	printf("  %s \n", str); //Hi만 찍힘. 0을 만나면 멈추니깐/ %s는 enter와 space를 0으로 인식
}

void main()

{
	char str[6] = "Hello"; //내가 원하는 글자의 수보다 하나 더 길게 설정

	printf("  %c  \n\n", str[0]); //문자열,문자열 상수는 값이 아니라 !!!!!주소!!!!!

	printf("  %c  \n\n", "Hello");
}


void main()
{
	char str[6];

	printf("문자열 입력 : ");
	scanf_s("%s", &str[0], 6); // 자동으로 반복문을 쓴것  --- 문자열의 길이 ,뒤에 입력 //마지막은 enter자리

	printf("출력: %s \n", &str[0]);// %s는 enter/space를 0으로 인식
}



% s
==
int i = 0;
while (1)
{
	scanf_s("%c", str[i]);
	
	if (str[i] = 0) break;
	i++;
}


void main()
{
	char str[15] = "Hello World";

	printf("출력 : %s \n", &str[0]);  //출력결과 Hello World
}



//중간에 띄어쓰기를 입력받고 싶으면 %c로 입력받아야 한다.
void main()
{
	char str[15];

	for (int i = 0; i < 15; i++)
	{
		scanf_s("%c", &str[i], 1);
		if (str[i] == 10)
		{
			str[i] = 0;		// enter값을 0으로 바꾸게 되고 출력을 멈춤
			break; //enter치면 멈춰
		}
	}

	printf("출력 : %s \n", str[0]); // %c로 입력을 받으면 space도 출력 가능// %s는 불가능
	if 
}