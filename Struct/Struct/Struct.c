//구조체(Struct): 사용자(프로그래머) 정의 자료형 -> 서로 연관있는 변수를 묶어서 관리하는 기법
//(서로 다른 자료형도 가능)!!!!!!!!!




#include <stdio.h>

// 새로운 [자료형] 설계하기: 구조체 정의
// 변수가 아닌 자료형을 만드는 것! 
// 7번째 자료형을 설계해낸 것

struct student //17byte
{
	char name;
	int korean;
	int english;
	double average;

};

void main()
{
	int a;
	//자료형 struct student 변수명 stu:
	struct student stu;
	stu.name = 'A';
	stu.korean = 80;
	stu.english = 70;
	stu.average = 75.0; //닷 연산자 // 큰 박스를 여는 행위

	printf("%c \n", stu.name);
	printf("%d \n", stu.korean);
	printf("%d \n", stu.english);
	printf("%lf \n", stu.average);

}