/*
#include <stdio.h>

void main()
{
	int a;
	int b;

	a = 10; //다음줄로 넘어가는 경우 int안에 저장되고 RAM에서는 삭제됨
	b = 4;

	printf("%d \n", a + b); //cpu 내의 레지스터에 저장된 복사본의 개념 - cpu의 가산기가 계산 후 누산기(acc)에 저장-> 결과를 다시 RAM으로 이동 (임시변수) 연산결과의 자료형의 기준은 '피연산자를 기반으로' 만들어짐. 결과 출력 후에는 임시변수는 사라짐.
}*/

/*
#include <stdio.h>

void main()
{
	int a = 2.5; //제어장치가 RAM으로 옮기는 과정에서 int a =(int)2.5로 묵시적 형변환을 내부적으로 해줌. C언어만.

	printf("%d", a);
}*/


/*
#include <stdio.h>

void main()
{
	float a, b;

	a = 10.0f;
	b = 4.0f;

	printf("%f \n", a / b); //불편 -> 형변환 연산자 사용 typecasting
}


#include <stdio.h>

void main()
{
	int a;
	int b;

	a = 10;
	b = 4;

	printf("%f \n", (float)a / (float)b); //형변환 연산자를 사용해서 계산
										//-> RAM의 '또 다른 공간'에 임시적으로 메모리를 할당받아 float형 10.0으로 저장하고 cpu로 복사
										// 다음줄로 내려오면 임시 메모리는 모두 사라짐. a,b는 여전히 int형 자료!!!!!!
}*/

//자료형이 다른 경우 작은 크기의 자료형이 큰 크기의 자료형으로 변환되어 RAM에 새로운 공간에 할당받은 후 계산됨.
/*
#include <stdio.h>

void main()
{
	int a;
	int b;

	a = 10;
	b = 3;

	printf(" %d \n", a % b); //나머지 연산자
}*/


/*
#include <stdio.h>

void main()
{
	int a;
	int b;

	a = 10;
	b = 3;

	printf(" %d \n", a>b);// 참이면 1, 거짓이면 0
}*/


/*
#include <stdio.h>

void main()
{
	printf("%d \n", 1 && 0); //&& and연산
	printf("%d \n", 0 || 0); //||  or 연산
	printf("%d \n", !0); //! not 연산

	printf("%d \n", 10 > 5 && 10 < 50); // 비교연산자와 논리연산자를 함께 -결과 1
	printf("%d \n", !(10 < 5)); //결과 1
}


#include <stdio.h>

void main()
{
	printf("당신의 나이를 입력하세요 :");

	int age;
	scanf_s("%d", &age);
	if (age >= 20 && age<40) // 비교연산자와 논리연산자를 함께
	{
		printf("환영합니다. 입장하세요. \n")
	}
	else
	{
		printf("꺼져.");
	}
}


#include <stdio.h>

void main()
{
	printf("당신의 나이를 입력하세요 :");

	int age;
	scanf_s("%d", &age);
	if (age<20 || age>40) // 비교연산자와 논리연산자를 함께 // 위 아래의 코드는 다르지만 동작은 같음 // 여러방법으로 해결가능하게
	{
		printf("꺼져. \n");
	}
	else
	{
		printf("환영합니다. 입장하세요. \n");
	}
}


#include <stdio.h>

void main()
{
	int a = 10;

	a = a + 1;
	a++; // a=a+1;

	printf("%d \n", a); //a=11
}


#include <stdio.h>

void main()
{
	int a = 10;
	int b = a++;

	printf("a: %d \n", a);// a=11
	printf("b: %d \n", b);// b=10 a를 먼저 b로 넘기고 (선출력) 나중에 ++ (후연산)

}

#include <stdio.h>

void main()
{
	int a = 10;
	int b = ++a;

	printf("a: %d \n", a);// a=11
	printf("b: %d \n", b);// b=11
}


void main()
{
	int a = 10;

	a += 3; // a = a + 3; / 변수의 반복작성을 피하기 위해.. "더하고(연산하고) 넣어" (복합대입연산자) += -= *= /=
	printf("a: %d \n", a);// a=13
}*/



//삼항연산자(조건연산자) 
// 비교문 ? 참data : 거짓 data ; 

/*
#include <stdio.h>

void main()
{
	int a = 10;


	a = (5 > 3 && 5<7) ? 7 : 100; //비교문에 괄호를 쓰는 편이 좋다

	printf("a: %d \n", a); //a=100
}

#include <stdio.h>

void main()
{
	int a = 10;


	int b = (a < 5) ? 50 : (a > 0) ? 100 : 150; // 거짓인 경우 또 한번의 조건을 걸 수 있다.

	printf("a: %d \n", a); //a=100
}*/


//학점산출프로그램

#include <stdio.h>

void main()
{

	printf("점수를 입력하면 학점을 산출해주는 프로그램입니다. \n\n");

	int score; //점수를 저장하는 정수형 변수

	printf("당신의 점수를 입력해주세요. : ");
	scanf_s("%d", &score);

	char grade; //학점을 저장하는 한 문자 변수

	//점수에 따른 학점을 계산
	grade = (score >= 90) ? 'A' : (score >= 80 /*&& score < 90*/) ? 'B' : (score >= 70 /*&& score < 80*/) ? 'C' : (score >= 60 /*&& score < 70*/) ? 'D' : 'F';
		
	//계산된 학점을 출력
	printf("\n\n\n");
	printf("당신의 학점은 [%c]입니다. \n", grade);

}