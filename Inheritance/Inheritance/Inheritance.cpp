/*
#include <iostream>
using namespace std;

class Robot
{
public:
	//멤버변수
	int hp;
	int power;

	//멤버함수
	//공격기능
	void attack()
	{
		cout << " 주먹발사! " << endl;
	}
	
};

//새로운 캐릭터 : 날 수 있는 로봇 유닛
class Flyingbot
{
public:
	int hp;
	int power;
	int wing;

	//날 수 있는 기능 추가
	void flying()
	{
		cout << "날아간닷~!" << endl;
	}

	void attack()
	{
		cout << " 미사일 발사! " << endl;
	}

};

//새로운 유닛 : 수영가능한 로봇

class Swimmingbot
{
public:
	int hp;
	int power;

	void swimming()
	{
		cout << "음파!음파!" << endl;
	}

	
};
void main()
{
	//Robot 객체 생성
	Robot* r = new Robot();
	Robot* r2 = new Robot();

	r->attack();
	r2->attack();


	Flyingbot* fb = new Flyingbot();
	fb->flying();
	fb->attack();

}
*/




//상속!

#include <iostream>
using namespace std;

class Robot
{
public:
	//멤버변수
	int hp;
	int power;

	//멤버함수
	//공격기능
	void attack()
	{
		cout << " 주먹발사!! " << endl;
	}

};

//새로운 캐릭터 : 날 수 있는 로봇 유닛 
//Robot class 상속받기!

class Flyingbot :public Robot //설계도면을 복사해오는 문법!
{
public: //변수 하나 함수 하나 + 상속받은 것
	int wing;
	
	void flying()
	{
		cout << " 날아간닷~!" << endl;

	}


	// 상속받은 공격기능(attack())이 맘에 들지 않으면 기능을 수정
	// 같은 이름의 함수를 만들기!
	// 상속받은 기능을 바꾸는 함수
	//함수 오버라이딩(overriding)이라고 함 - 기존의 attack 위에 올라탐 / 없어지는 게 아님
	void attack()
	{
		cout << " 미사일 발사~~~~~" << endl;
	}
};


//새로운 유닛 : 수영할 수 있는 로봇 - Robot 상속받기

class Swimmingbot :public Robot
{
public:
	void swim()
	{
		cout << " 음파!음파!" << endl;
	}

	
	//상속받은 기능 바꾸기 : overriding
	void attack()
	{
		cout << " 어뢰 발싸~!" << endl;
	}
};

void main()
{
	//Robot 객체 생성
	Robot* r = new Robot();

	r->attack();

	Flyingbot* f = new Flyingbot();
	f->flying();
	f->attack();

	Swimmingbot* s = new Swimmingbot();
	s->swim();
	s->attack();
}


//객체지향
//상속, 다형성, 정보은닉, 캡슐화