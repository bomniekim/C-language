/*
#include <stdio.h>

void main()
{
	//변수만들기
	//데이터를 담을 수 있는그릇의 종류(data type:자료형)를 작성
	//정수형 숫자 10을 저장할 수 있는 공간을 메모리에 만들어 주세요.
	float a;
	//위 공간 a에 10이라는 숫자를 넣어주세요.
	a = 10.5;

	//a라는 공간에 저장되어 있는 값을 출력해보기
	printf("%.2f", a);
}*/


/*
#include <stdio.h>

void main()
{
	short a;
	a = 20;
	printf("%d", a);
}*/

/*
#include <stdio.h>

void main()
{
	double a;
	a = 3.14;
	printf("%lf", a);
}*/

/*
#include <stdio.h>

void main()
{
	int a;
	a = 10+5;
	printf("%d \n", a + 3);
	printf("%d", a);
}*/

/*
#include <stdio.h>

void main()
{
	int a;
	a = 10;
	printf("%d \n", a);

	a + 3 = 13;
	printf("%d", a); //이렇게 해도 a는 10으로 출력됨

}*/

/*
#include <stdio.h>

void main()
{
	int a;
	a = 10;
	printf("%d \n", a);

	a = 20;
	printf("%d \n", a); 
	//기존값은 없어지고 새로운 값이 생김, 변수는 한번에 한 가지만 저장가능

	a = 30;
	printf("%d \n", a);
}*/

/*
#include <stdio.h>

void main()
{
	float a;
	a = 10.5;
	printf("%f \n", a + 3.0) //같은 자료형끼리 연산하게 
		;
}*/

#include <stdio.h>

void main()
{
	int a;
	int b = a + 5; // a의 값이 미지정-쓰레기값 (램에 저장되어 있는 기본값)
	printf("%d \n", b);
}

#include <stdio.h>

void main()
{
	int a = 10; // 변수 초기화 (initialize)
	
	int a;    // 변수선언
	a = 10; // 변수에 값 대입          위와 아래의 값은 같지만 메모리에서 동작하는 방법이 다름
}

#include <stdio.h>

void main()
{
	int a, b, c, d; //변수의 연결연산 (자료형은 쓰면 안됨-모두 같은 자료형인 경우에만 가능/다른 자료형일 경우에는 따로 씀)
}

