#include <iostream>
using namespace std;


//���ο� �ڷ��� ���� : ���赵��

struct Student //������ ���� ���� �ƴϴ�
{

	char* name;
	int kor;
	int eng;
	double aver;
	
};

//Student ����ü������ ����� ����ϴ� ��� �Լ�
void show ( Student student )//call by value
{
	
	cout << "name : " << student.name << endl;
	cout << "korean : " << student.kor << endl;
	cout << "english : " << student.eng << endl;
	cout << "average : " << student.aver << endl;
}


void main()
{
	//����ü ���� �����! ����) �ڷ��� ������;
	Student stu = {0}; //�ʱ�ȭ

	//������� ������ ����
	stu.name = (char*)"Sam"; //����ȯ
	stu.kor = 80;
	stu.eng = 70;
	stu.aver = 75.0;

	//����ü ���� ����ϱ�
	show( stu );

	//2��° �л� ������ �Է�
	Student stu2 = { (char*)"Robin", 90, 85, 87.5 };

	//���
	show( stu2 );


}