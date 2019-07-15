#include <iostream>
using namespace std;


//새로운 자료형 정의 : 설계도면

struct Student //변수를 만든 것이 아니다
{

	char* name;
	int kor;
	int eng;
	double aver;
	
};

//Student 구조체변수의 멤버를 출력하는 기능 함수
void show ( Student student )//call by value
{
	
	cout << "name : " << student.name << endl;
	cout << "korean : " << student.kor << endl;
	cout << "english : " << student.eng << endl;
	cout << "average : " << student.aver << endl;
}


void main()
{
	//구조체 변수 만들기! 문법) 자료형 변수명;
	Student stu = {0}; //초기화

	//멤버변수 값들을 대입
	stu.name = (char*)"Sam"; //형변환
	stu.kor = 80;
	stu.eng = 70;
	stu.aver = 75.0;

	//구조체 변수 출력하기
	show( stu );

	//2번째 학생 데이터 입력
	Student stu2 = { (char*)"Robin", 90, 85, 87.5 };

	//출력
	show( stu2 );


}