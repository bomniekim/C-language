
//6월24일 고정소수점과 부동소수점 표기방법
/*
#include <stdio.h>

void main()
{
	float a = 10.1234567890123456789;
	double b = 10.1234567890123456789;

	//float(4byte)과 double(8byte)의 차이점 :  소수점 이후의 값의 정확성

	printf(" %.20f  \n", a); // 10.12345695495605468750
	printf(" %.20lf  \n", b); // 10.12345678901234613534    double일때가 정확도가 훨씬 높음 <- 더 선호

}*/
/*
★★★★★
int a = 10; // 변수 '초기화' (initialize): a의 공간을 만들면서 자체의 쓰레기값을 지우고 10을 입력 (자체로 4byte차지) 별도의 메모리 공간 차지 X

int a;    // 변수 선언, 메모리에 공간을 할당 받는다 (RAM에 있는 공간을 차지한다.)
a = 10; // 변수에 값 '대입' ★(오른쪽 메모리 공간을 copy해서 왼쪽 메모리 공간에 paste)★
			 //(a라는 4byte의 + 10이라는 4byte = 메모리에서 8byte 차지)

		 //위와 아래의 값은 같지만 메모리에서 동작하는 방법이 다름


float a;
a = 3.14; //실수는 "기본이 double (8byte)"이므로 필요없는 메모리의 공간을 낭비 ->double에서 float으로 잘립니다. (error)
a = 3.14f; //f를 붙이면 애초에 float(4byte)으로 설정되어 4byte만 차지하게 됨
★★★★★ */

/*
string을 만들지 못한 이유: 사용자에게서 입력받을 데이터의 byte를 가늠할 수 없었기 때문/ 임의로 정할 시 너무 많은 용량 차지
									   -> '배열'로 처리
									   */



/* 상수
1. literal상수
2. 매크로상수
3. 상수화된 변수(const)

//매크로상수
#define MAX 10
#define p printf

void main()
{
	printf(" %d", MAX);
	p("Hello"); //ㅋㅋㅋㅋㅋㅋ
}

//const 상수 (상수화된 변수) 자바에서는 final
void main()
{
	const int a = 10; //변수값 고정

	const int a;
	a=10;                  //이 경우에는 원래 a에 있던 쓰레기값이 고정된거-> 이렇게 하지마

	a = 20;// a는 오류, a는 10으로 freezing된 상수값
}

*/