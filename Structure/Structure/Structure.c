//구조체(Struct): 사용자(프로그래머) 정의 자료형 -> 서로 연관있는 변수를 묶어서 관리하는 기법
//(서로 다른 자료형도 가능)!!!!!!!!!




#include <stdio.h>

// 새로운 [자료형] 설계하기: 구조체 정의
// 변수가 아닌 자료형을 만드는 것! 
// 7번째 자료형을 설계해낸 것

struct Student //17byte			//니가 만든 자료형(Student)은 첫 글자로 대문자를 쓰자 (암묵적 약속)
{

	//멤버변수
	char name;		//1byte
	int korean;		//4byte
	int english;	//4byte
	double average;	//8byte

};

//구조체 변수의 값을 출력하는 기능 함수
void output( struct Student a)
{
	printf("%c \n", a.name); //구조체 변수의 이름은 값!
	printf("%d \n", a.korean);
	printf("%d \n", a.english);
	printf("%lf \n", a.average);
}


void main()
{

	//1번째 학생 성적
	//자료형 struct Student 변수명 stu:
	struct Student stu;	//구조체 변수 선언: [[이때 메모리에 할당됨]]
	stu.name = 'A';		//닷 연산자 // 큰 박스를 여는 행위
	stu.korean = 80;
	stu.english = 70;
	stu.average = (double)(stu.korean + stu.english) / 2;


	output(stu);



	//2번째 학생 성적
	struct Student stu2;
	stu2.name = 'B';
	stu2.korean = 50;
	stu2.english = 40;
	stu2.average = (double)(stu2.korean + stu2.english) / 2;

	output(stu2);



	//3번째 학생 성적
	struct Student stu3 = { 'C', 50, 70 }; //구조체 자료형을 정의한 순서대로 값을 초기화
							//중괄호는 초기화할때만 쓸 수 있음 = 배열
	stu3.average = (stu3.korean + stu3.english) / 2;

	output(stu3);

	//구조체 변수끼리의 대입
	//자료형이 같냐 다르냐의 문제
	stu3 = stu + stu2; //error-구조체 변수끼리의 연산은 불가능

	

	//구조체 변수도 배열로 선언 가능
	struct Student arr[3];

	for (int i = 0; i < 3; i++)
	{
		printf("%d번째 학생성적 입력: ", i + 1);

		//키보드에 남아있는 찌꺼기 지우기
		rewind(stdin);

		printf("이름: "); scanf_s("%c", &arr[i].name,1);
		printf("국어: "); scanf_s("%d", &arr[i].korean);
		printf("영어: "); scanf_s("%d", &arr[i].english);
	
		arr[i].average = (double)(arr[i].korean + arr[i].english) / 2;
	}


	for (int i = 0; i > 3; i++)
	{
		output( arr[i] );
		printf("\n"); //반복적 함수 호출 가능
	}
	
	/*
	arr[0].name = 'A';
	arr[0].korean = 80;
	arr[0].english = 70;
	arr[0].average = 75.0;

	arr[1].name = 'B';
	arr[1].korean = 90;
	arr[1].english = 60;
	arr[1].average = 75.0;

	arr[2].name = 'C';
	arr[2].korean = 40;
	arr[2].english = 80;
	arr[2].average = 60.0;*/
}




#include <stdio.h>

struct Student //17byte			
{

	//멤버변수
	char name;		
	int korean;		
	int english;	
	double average;	

};
void main()
{
	struct Student stu = { 'A',80,70,70.5 };
	
	//구조체 포인터변수
	struct Student* p =NULL; //4byte
	p = &stu; //포인터에 주소를 저장



	printf("name : &c \n", (*p).name);
	printf("korean : &d \n", (*p).korean); //p가 가리키는 주소의 값을 출력 //연산자 우선순위
	printf("enlgish : &d \n", stu.english);
	printf("average: %lf \n", (*p).average);
	printf("\n");



	printf("name : &c \n", p->name);
	printf("korean : &d \n", p->korean); //p가 가리키는 주소의 값을 출력 //연산자 우선순위
	printf("enlgish : &d \n", p->english);
	printf("average: %lf \n", p->average);


}


#include <stdio.h>

struct Student //17byte			
{

	//멤버변수
	char name;
	int korean;
	int english;
	double average;

};

void output(struct Student* p)
{
	printf("%c \n", p->name); //p가 가리키는 것은 배열이 아닌 구조체
	printf("%d \n", p->korean);
	printf("%d \n", p->english);
	printf("%lf \n", p->average);

	//p++; //주소값의 증가는 옆 집으로의 이동 -> 두번째 구조체로 점프


	printf("%c \n", (p + 1)->name); 
	printf("%d \n", (p + 1)->korean);
	printf("%d \n", (p + 1)->english);
	printf("%lf \n",(p + 1)->average);

	printf("%c \n", p[2].name);
	printf("%d \n", p[2].korean); //arr[0] = *(arr+0)이므로 ->이 .으로 바뀜
	printf("%d \n", p[2].english);
	printf("%lf \n",p[2].average);

	/*
	for (int i = 0; i < 3; i++)
	{
		printf("%c \n", p[i].name);  
		printf("%d \n", p[i].korean); 
		printf("%d \n", p[i].english);
		printf("%lf \n", p[i].average);
	}*/

}

void main()
{
	struct Student stus[3] = {
	{'A',80,70,70.5},
	{'B',100,40,70.0},
	{'C', 90,70,80.0} };

	output(stus);


#include <stdio.h>
#include <stdlib.h>

	struct Student //17byte			
	{

		//멤버변수
		char name;
		int korean;
		int english;
		double average;

	};

void main()
{
	
	//힙 영역에 구조체 변수 공간을 할당

	struct Student stu = { 'A',80,70,70.5 };
	struct Student* p = malloc(sizeof(struct Student));

	p->name = 'A';
	p->korean = 80;
	p->english = 70;
		
}
