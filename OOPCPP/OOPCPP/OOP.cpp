
//��ü���� = �������� (�ϲ� �ϰ�! ��� ���� ���� �ǵ帮�� ������)

#include <iostream>
using namespace std;


//���ο� �ڷ��� ���� : ���赵��

//������ �Լ��� ���� �ڷ���  ����� new ���� : class
//��ü�� ����� �ڷ��� (struct ��� class ���)

class Student //������ ���� ���� �ƴϴ�
{
private://�������� ������ - ������ �ȳ���
	//��������
	//�������
	const char* name;
	int kor;
	int eng;
	double aver;

public: 
	// ���⼭���� �Ʒ� ������� ��� �ܺο� ����!

	//��ü�� ������ �� (new�� ��) �ڵ����� ����Ǵ� �Լ�
	//����������� ���� �ʱ�ȭ�ϱ� ���� �������� ����� Ư���� �Լ�
	//������ �Լ�: Constructor
	//1.�Լ���==Ŭ������
	//2.����Ÿ���� ���� ��ü�� X (!= ����Ÿ���� ����)
	Student()
	{
		cout << "Student ��ü ����" << endl;
	}
	//2.

	//����������� ���� �Է����ִ� ��� �Լ� ����
	void setMembers (const char* n, int k, int e)
	{
		name = n;
		kor = k;
		eng = e;
		aver = double(kor + eng) / 2;
	}


	//��Student ����ü ��������
	//����ü ������ ����� ����ϴ� ��� �Լ� ����

	//����Լ� - ��������� ������� ��� ���� - ��������� ��ġ ��������ó�� ����

	void show () //call by value
	{
		cout << "name : " << n << endl;	 
		cout << "korean : " << k << endl;
		cout << "english : " << e << endl;
		cout << "average : " << aver << endl << endl;

	}

	
};

//C����� ����ü�� ������
//C++�� ����ü�� ����+�Լ� = ��ü(object)

struct AAA() //������ ������ struct
{
	int a;
	int b;
};

void main()
{
	//Student�� ��ü �����! ����) �ڷ���(class��) ��ü��;
	Student stu = {0}; //�ʱ�ȭ
	
	//������� ������ �������ִ� �Լ��� ȣ��
	stu.setMembers("Sam", 80, 70);

	//����ü ���� ����ϴ� ��� ȣ��!
	stu.show();


	
	//2��° �л� ������ �Է�
	Student stu2;
	stu.setMembers ("Robin", 90, 85, 87.5 );

	//���
	stu2.show();

	
	//3��° �л� ������ : heap �޸� ���
	
	Student* p = new Student;

	//(*p).setMembers( "kim", 95, 80); //p�ȿ� �ִ� ������ �ƴ϶� p�� ����Ű�� �༮���� 
	//(*p).show();

	//���� ���� ǥ��
	p->setMembers("kim", 95, 80);
	p->show();
}

void main()
{
	//��ü ����
	Student* p = new Student; //�ڵ����� ������ �Լ��� ȣ���

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

	//������ �Լ�: Constructor
	
	//��ü�� ������ �� (new�� ��) �ڵ����� ����Ǵ� �Լ�
	//����������� ���� �ʱ�ȭ�ϱ� ���� �������� ����� Ư���� �Լ�

	//1.�Լ���==Ŭ������
	//2.����Ÿ���� ���� ��ü�� X (!= ����Ÿ���� ����)

	Student()
	{
		cout << "Student ��ü void ����" << endl;
		name = "�͸�";
		kor = 0;
		eng = 0;
		aver = 0.0;
	}

	//�Լ� �����ε�(overloading): �Լ����� ���� �Ķ���Ͱ� �ٸ�!
	Student (const char* name, int kor, int eng)
	{
		cout << "Student ��ü ����" << endl;
		//���޹��� �Ű������� ������ ��������� �����ϱ�

		//���� ��ü�� �ּҸ� ����Ű�� Ư���� ������ �������
		this->name = name;
		this->kor = kor;
		this->eng = eng;
		this->aver = (double)(kor + eng) / 2.0;
	}
	

	//����������� ���� �Է����ִ� ��� �Լ� ����
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
	//��ü ����
	Student* p = new Student("Sam",80,70);
	p->show();

	Student* p2 = new Student("Robin", 90, 85);
	p2->show();

	Student* p3 = new Student();
	p3->setMembers("kim", 50, 70);
}



