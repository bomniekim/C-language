/*
#include <iostream>
using namespace std;

class Robot
{
public:
	//�������
	int hp;
	int power;

	//����Լ�
	//���ݱ��
	void attack()
	{
		cout << " �ָԹ߻�! " << endl;
	}
	
};

//���ο� ĳ���� : �� �� �ִ� �κ� ����
class Flyingbot
{
public:
	int hp;
	int power;
	int wing;

	//�� �� �ִ� ��� �߰�
	void flying()
	{
		cout << "���ư���~!" << endl;
	}

	void attack()
	{
		cout << " �̻��� �߻�! " << endl;
	}

};

//���ο� ���� : ���������� �κ�

class Swimmingbot
{
public:
	int hp;
	int power;

	void swimming()
	{
		cout << "����!����!" << endl;
	}

	
};
void main()
{
	//Robot ��ü ����
	Robot* r = new Robot();
	Robot* r2 = new Robot();

	r->attack();
	r2->attack();


	Flyingbot* fb = new Flyingbot();
	fb->flying();
	fb->attack();

}
*/




//���!

#include <iostream>
using namespace std;

class Robot
{
public:
	//�������
	int hp;
	int power;

	//����Լ�
	//���ݱ��
	void attack()
	{
		cout << " �ָԹ߻�!! " << endl;
	}

};

//���ο� ĳ���� : �� �� �ִ� �κ� ���� 
//Robot class ��ӹޱ�!

class Flyingbot :public Robot //���赵���� �����ؿ��� ����!
{
public: //���� �ϳ� �Լ� �ϳ� + ��ӹ��� ��
	int wing;
	
	void flying()
	{
		cout << " ���ư���~!" << endl;

	}


	// ��ӹ��� ���ݱ��(attack())�� ���� ���� ������ ����� ����
	// ���� �̸��� �Լ��� �����!
	// ��ӹ��� ����� �ٲٴ� �Լ�
	//�Լ� �������̵�(overriding)�̶�� �� - ������ attack ���� �ö�Ž / �������� �� �ƴ�
	void attack()
	{
		cout << " �̻��� �߻�~~~~~" << endl;
	}
};


//���ο� ���� : ������ �� �ִ� �κ� - Robot ��ӹޱ�

class Swimmingbot :public Robot
{
public:
	void swim()
	{
		cout << " ����!����!" << endl;
	}

	
	//��ӹ��� ��� �ٲٱ� : overriding
	void attack()
	{
		cout << " ��� �߽�~!" << endl;
	}
};

void main()
{
	//Robot ��ü ����
	Robot* r = new Robot();

	r->attack();

	Flyingbot* f = new Flyingbot();
	f->flying();
	f->attack();

	Swimmingbot* s = new Swimmingbot();
	s->swim();
	s->attack();
}


//��ü����
//���, ������, ��������, ĸ��ȭ