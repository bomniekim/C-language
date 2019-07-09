//Pointer: 메모리 주소를 통해 data를 제어하는 기법 //1.pointer변수 2.pointer상수
/*
#include <stdio.h>

void main()
{
	int a = 10;// 일반 정수형변수

	//포인터변수 선언문법
	// 자료형 *변수명;  pointing하는 변수의 자료형
	int *p; //주소를 가짐으로써 누군가를 가리킴 (시작주소를): 4byte

	p = &a; //포인터 변수에 주소값 대입


	//포인터변수 p가 가리키는 대상 변수 a의 값에 접근하기 -> 역참조: *
	printf(" %d  \n", *p);//역참조 연산자 / 50
	printf(" %d  \n", a);//역참조 연산자 / 50

}

void main()
{
	char ch = 'A';
	char* p; //포인트 변수는 무조건 4바이트

	p = &ch;

	printf("%c \n", *p); //포인터 변수가 가리키는 곳의 값
}

void main()
{
	double a = 3.14;
	double *p; //포인트변수가 가리킬 대상의 자료형

	printf(" %lf \n ", a);
	printf(" %lf \n ", *p);

	*p = *p + 1.5;
	printf(" %lf \n ", a); //4.640000

}


void main()
{
	int a = 10;
	int* p; // int *p;

	p = &a; //a의 주소를 알게된다.

	printf(" %d  \n ", *p);

	printf(" %p  \n ", *p); //10을 주소라고 생각하고 찍는다. -> 16진수로 0000000A

	printf(" %p  \n ", p); // p의 값 = a의 주소

	p++; //4바이트의 주소를 뛰어넘는다. char인 경우에는 1바이트 증가

	*p++;//  ++을 먼저 - >주소를 ++ / #100에서 ++하면 #104
	(*p)++;// 포인터 변수의 값은 여전히 #100을 가리키고 그 값에 ++

	int b = 20;

	p = &b; //포인트 변수!이니깐 계속적인 값의 변경이 가능 ------자바의 참조변수
	printf(" %d  \n ", *p);
	*/





}
//포인터를 쓰는 4가지 이유

//1. 다른 지역(함수)의 지역변수 제어
//2. 지역 배열 변수를 함수의 파라미터로 전달하고자
//3. 문자열을 저장하는 용도
//4. 동적 메모리(heap영역)의 사용을 위해 ->자바에서 열심히 사용




//1. 다른 지역(함수)의 지역변수 제어
#include <stdio.h>

int swap(int* a, int* b);


//값을 치환하는 기능을 가진 함수
int swap(int* a, int* b)
{
	int temp;
	//temp = a; //이렇게 하면 그냥 주소를 보내는것 
	temp = *a; //a의 주소를 역참조하여 값을 출력
	*a = *b;
	*b = temp;
}

void main()
{
	int a = 10; //지역변수
	int b = 20;

	printf("변경 전 a : %d \n", a);
	printf("변경 전 b : %d \n", b);

	//a<->b 서로의 값 치환
	//임시변수 필요 int temp

	swap(&a, &b);

	printf("\n\n");
	printf("변경 후 a : %d \n", a);
	printf("변경 후 b : %d \n", b);

}