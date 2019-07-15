
//객체지향 = 개인주의 (니껀 니가! 대신 너의 값은 건드리지 않을게)

#include <iostream>
using namespace std;


//새로운 자료형 정의 : 설계도면

//변수와 함수를 가진 자료형  만드는 new 문법 : class
//객체를 만드는 자료형 (struct 대신 class 사용)

class Student //변수를 만든 것이 아니다
{
private://접근제어 지시자 - 일종의 안내판
	//정보은닉
	//멤버변수
	const char* name;
	int kor;
	int eng;
	double aver;

public: 
	// 여기서부터 아래 멤버들은 모두 외부에 공개!

	//객체가 생성될 때 (new될 때) 자동으로 실행되는 함수
	//멤버변수들의 값을 초기화하기 위한 목적으로 설계된 특별한 함수
	//생성자 함수: Constructor
	//1.함수명==클래스명
	//2.리턴타입의 존재 자체가 X (!= 리턴타입이 없다)
	Student()
	{
		cout << "Student 객체 생성" << endl;
	}
	//2.

	//멤버변수들의 값을 입력해주는 기능 함수 생성
	void setMembers (const char* n, int k, int e)
	{
		name = n;
		kor = k;
		eng = e;
		aver = double(kor + eng) / 2;
	}


	//★Student 구조체 내에서★
	//구조체 변수의 멤버를 출력하는 기능 함수 생성

	//멤버함수 - 멤버변수를 마음대로 사용 가능 - 멤버변수가 마치 전역변수처럼 보임

	void show () //call by value
	{
		cout << "name : " << n << endl;	 
		cout << "korean : " << k << endl;
		cout << "english : " << e << endl;
		cout << "average : " << aver << endl << endl;

	}

	
};

//C언어의 구조체는 변수만
//C++의 구조체는 변수+함수 = 객체(object)

struct AAA() //변수만 있으면 struct
{
	int a;
	int b;
};

void main()
{
	//Student형 객체 만들기! 문법) 자료형(class명) 객체명;
	Student stu = {0}; //초기화
	
	//멤버변수 값들을 대입해주는 함수를 호출
	stu.setMembers("Sam", 80, 70);

	//구조체 변수 출력하는 기능 호출!
	stu.show();


	
	//2번째 학생 데이터 입력
	Student stu2;
	stu.setMembers ("Robin", 90, 85, 87.5 );

	//출력
	stu2.show();

	
	//3번째 학생 데이터 : heap 메모리 사용
	
	Student* p = new Student;

	//(*p).setMembers( "kim", 95, 80); //p안에 있는 변수가 아니라 p가 가리키는 녀석에게 
	//(*p).show();

	//더욱 쉽게 표현
	p->setMembers("kim", 95, 80);
	p->show();
}

void main()
{
	//객체 생성
	Student* p = new Student; //자동으로 생성자 함수도 호출됨

	p->setMembers();
	
}
*/









#include <iostream>
using namespace std;


class Student 
{

private:
	const char* name;
	int kor;
	int eng;
	double aver;

public:

	//생성자 함수: Constructor
	
	//객체가 생성될 때 (new될 때) 자동으로 실행되는 함수
	//멤버변수들의 값을 초기화하기 위한 목적으로 설계된 특별한 함수

	//1.함수명==클래스명
	//2.리턴타입의 존재 자체가 X (!= 리턴타입이 없다)

	Student()
	{
		cout << "Student 객체 void 생성" << endl;
		name = "익명";
		kor = 0;
		eng = 0;
		aver = 0.0;
	}

	//함수 오버로딩(overloading): 함수명은 같고 파라미터가 다른!
	Student (const char* name, int kor, int eng)
	{
		cout << "Student 객체 생성" << endl;
		//전달받은 매개변수의 값들을 멤버변수에 대입하기

		//본인 객체의 주소를 가리키는 특별한 포인터 멤버변수
		this->name = name;
		this->kor = kor;
		this->eng = eng;
		this->aver = (double)(kor + eng) / 2.0;
	}
	

	//멤버변수들의 값을 입력해주는 기능 함수 생성
	void setMembers(const char* n, int k, int e)
	{
		name = n;
		kor = k;
		eng = e;
		aver = double(kor + eng) / (double)2;
	}


	
	void show() //call by value
	{
		cout << "name : " << n << endl;
		cout << "korean : " << k << endl;
		cout << "english : " << e << endl;
		cout << "average : " << aver << endl << endl;

	}


};

void main()
{
	//객체 생성
	Student* p = new Student("Sam",80,70);
	p->show();

	Student* p2 = new Student("Robin", 90, 85);
	p2->show();

	Student* p3 = new Student();
	p3->setMembers("kim", 50, 70);
}



