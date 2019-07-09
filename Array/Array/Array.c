#include <stdio.h>
/*
void main()
{
	int a;

	int arr[5];

	arr[0] = 70; //아파트의 호실 개념
	arr[1] = 80;
	arr[2] = 60;
	arr[3] = 50;
	arr[4] = 70;
	

	for (int i = 0; i < 5; i++)
	{
	printf("   %d  \n", arr[i]); //대괄호 구분자로 가능하게 함
	}

}



void main()
{

	int arr[5];

	for (int i = 0; i < 10; i++)
	{
		printf("%d번 학생 점수 입력 : ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d번 학생 점수 입력 : ", i + 1);
	}

}



void main()
{
	
	int arr[5]; //배열 선언
	float arr2[5];
	char arr3[3];
	long arr4[12];

}

*/
/*
void main()
{
	int a, b, c, d, e;
	int arr[5];    //배열의 갯수를 상수값()으로만 쓰게 해놓음, 변수로 채울 수 없음

	printf("  %p  \n", &arr[0]);   //메모리에서 a의 시작 주소가 어딘지 16진수로 출력			p는 포인터의 약자
	printf("  %p  \n", &arr[1]); 
	printf("  %p  \n", &arr[2]); 
	printf("  %p  \n", &arr[3]); 
	printf("  %p  \n", &arr[4]); 
	printf("  %p  \n", &arr[5]); //cpu의 입장에서 4번 옆에 5번이긋지 하고 알아서 4번 옆의 쓰레기값을 가져옴

	printf(" arr : %p  \n", arr);  // arr==&arr[0]
	//배열을 만들 때 []안에는 반드시 
	상수만 쓸 수 있음.
}




void main()
{
	int a = 10;
	int arr[3] = { 10,20,30 }; //배열의 초기화 - 요소갯수보다 많이 쓰면 에러, 갯수보다 적게 놓으면 0으로 바꾸어 초기화
								//쓰레기값으로 두지 않고 0으로 초기화된다 // 중괄호르 쓰면 한개 이상의 값은 써야함
								//초기화할때 []에 쓰지 않으면 {}안의 사이에 맞춰 알아서 배열이 만들어짐




	for (int i = 0; i < 3, i++)
	{
		printf ( " %d  \n", arr[a])
	}
}*/


#include <stdio.h>

void main()
{
	int score[5]; //쓰레기값가지고 있음
	int total = 0;

	for (int i = 0; i < 5; i++)
	{
		printf("점수입력: ");
		scanf_s("%d", &score[i]);

		total += score[i];
	}

	/*
	int total=0;

	for (int i = 0; i < 5; i++)
	{
		total = total + score[i];
	}*/

	double aver = (double)total / 5;
	 
	printf(" 총점 : %d \n", total);
	printf(" 평균 : %.2lf \n", aver);

}

