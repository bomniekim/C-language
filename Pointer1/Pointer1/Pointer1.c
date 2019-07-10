//Pointer: 메모리 주소를 통해 data를 제어하는 기법 //1.pointer변수 2.pointer상수
/*
#include <stdio.h>

void main()
{
	int a = 10;// 일반 정수형변수

	//포인터변수 선언문법
	// 자료형 *변수명;  pointing하는 변수의 자료형
	int *p = NULL; //주소를 가짐으로써 누군가를 가리킴 (시작주소를): 4byte

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
	}
	*/






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


//2. 지역 배열 변수를 함수의 파라미터로 전달하고자
#include <stdio.h>


//void output(int arr[5]) //이렇게 쓰면 자동으로 포인터 변수를 만든것..
void output(int *p) //int *arr //*까먹지마라
{

	//printf("  %d \n", *(p + 0));
	//printf("  %d \n", *(p + 1));
	//printf("  %d \n", *(p + 2));
	//printf("  %d \n", *(p + 3));
	//printf("  %d \n", *(p + 4));
	
	printf("  %d \n", p[0]); //	==printf("  %d \n", arr[0]);
	printf("  %d \n", p[1]); //	==printf("  %d \n", arr[1]);
	printf("  %d \n", p[2]); //	==printf("  %d \n", arr[2]);
	printf("  %d \n", p[3]); //	==printf("  %d \n", arr[3]);
	printf("  %d \n", p[4]); //	==printf("  %d \n", arr[4]);


}

void main()
{
	int arr[5] = { 10,20,30,40,50 };
	int *p; //역참조 연산자를 통해 값을 가져와// 5가지맛 아이스크림을 스푼 하나로 퍼먹는거

	
	p = arr;//p = &arr[0]; //배열의 첫 주소를 가리키는거 //배열 중에 !첫번째인 0번방만! 가리키는 포인터
	printf("  %d \n", *p); //10

	p++; //p = &arr[1]; //p(#100) + 1은 주소에 +1 = 옆 집! #104번지
	printf("  %d \n", *p); //20

	p++; //p = &arr[2];
	printf("  %d \n", *p); //30
	
	p++; //p = &arr[3];
	printf("  %d \n", *p); //40
	
	p++; //p = &arr[4];
	printf("  %d \n", *p); //50

	//arr[0]==p[0]
	//*p=*arr
	//배열과 포인터는 둘다 주소를 가지고 있기 때문에 서로 바꿔서 쓰는것 가능

	//*arr+1 =10
	//*(arr+1)=20
	
	//arr[4]=*(arr+4) 배열의 []는 arr의 첫집의 n번째 옆집을 역참조한다는 의미 //변수명이 아니였다~!

}



//3. 문자열 저장

void main()
{
	char str[6] = "Hello"; //문자열 끝 문자 (\0)때문에 5+1로 배열 처리 -> 초기화

	// str="Hello"; 가 에러가 나는 이유는 배열의 이름은 pointer상수이므로 값을 바꿀 수 없다. // 4byte의 주소를 str에 넣을 수 없다. 

	str[2] = '\0';

	printf("%s", &str[0]); //%s는 값이 아닌 주소를 달라고 함			&str[0]=str

	printf("%s", "Hello"); //문자열은 값을 주는 것이 아니라 H의 주소를 주는 것 
}


void main()
{
	char str[6];
	//str="Hello"; //에러!

	char* p;
	p = "Hello"; //문자열 저장 (문자열을 가리키는 것) //오른쪽에 값이 아닌 주소를 주는 것


	printf("  %p  \n", p); //p의 값인 '주소 출력'
	printf("  %s  \n", *p); //*p가 가리키는 것은 'H' = 72 // %s는 주소를 달라고 함 -> #72의 값을 줌 ->에러
	printf("  %s  \n", p); //OK : %s는 주소를 달라고 하니깐 



	char str[6] = "Hello"; 
	printf("%s \n", str);

	//위 아래의 값은 같아. 

	char* p = "Hello"; 
	printf("  %s  \n", p);

	//<<배열과 포인터의 차이>>
	//배열은 길이값에 민감하지만 포인터는 문자열의 시작 주소만을 저장하니깐 길이와 상관없음
	//배열은 사용자로부터 값을 입력받을 수 있지만 포인터는 불가 -> 포인터의 유일한 단점

}

void main()
{
	char* name1 = "sam";
	char* name2 = "robin";
	char* name3 = "kim";


	char* names[3]; //char형 포인터 변수 배열

	names[0] = "sam";//시작주소
	names[1] = "robin";//시작주소
	names[2] = "kim";//시작주소

	char* names[3] = { "sam", "robin", "kim" }; //3층으로 된 2차원 배열로 간주가능


	printf(" %s \n", names[0]); //sam
	printf(" %s \n", names[1]); //robin
	printf(" %s \n", names[2]); //kim

	printf(" %s \n", names[1][2]); //robin의 b!

	names[2][2] = 's'; //에러! 문자 상수인 m에 s 대입 불가



}

void main()
{
	int a = 10;
}

