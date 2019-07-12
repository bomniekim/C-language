//����ü(Struct): �����(���α׷���) ���� �ڷ��� -> ���� �����ִ� ������ ��� �����ϴ� ���
//(���� �ٸ� �ڷ����� ����)!!!!!!!!!




#include <stdio.h>

// ���ο� [�ڷ���] �����ϱ�: ����ü ����
// ������ �ƴ� �ڷ����� ����� ��! 
// 7��° �ڷ����� �����س� ��

struct Student //17byte			//�ϰ� ���� �ڷ���(Student)�� ù ���ڷ� �빮�ڸ� ���� (�Ϲ��� ���)
{

	//�������
	char name;		//1byte
	int korean;		//4byte
	int english;	//4byte
	double average;	//8byte

};

//����ü ������ ���� ����ϴ� ��� �Լ�
void output( struct Student a)
{
	printf("%c \n", a.name); //����ü ������ �̸��� ��!
	printf("%d \n", a.korean);
	printf("%d \n", a.english);
	printf("%lf \n", a.average);
}


void main()
{

	//1��° �л� ����
	//�ڷ��� struct Student ������ stu:
	struct Student stu;	//����ü ���� ����: [[�̶� �޸𸮿� �Ҵ��]]
	stu.name = 'A';		//�� ������ // ū �ڽ��� ���� ����
	stu.korean = 80;
	stu.english = 70;
	stu.average = (double)(stu.korean + stu.english) / 2;


	output(stu);



	//2��° �л� ����
	struct Student stu2;
	stu2.name = 'B';
	stu2.korean = 50;
	stu2.english = 40;
	stu2.average = (double)(stu2.korean + stu2.english) / 2;

	output(stu2);



	//3��° �л� ����
	struct Student stu3 = { 'C', 50, 70 }; //����ü �ڷ����� ������ ������� ���� �ʱ�ȭ
							//�߰�ȣ�� �ʱ�ȭ�Ҷ��� �� �� ���� = �迭
	stu3.average = (stu3.korean + stu3.english) / 2;

	output(stu3);

	//����ü ���������� ����
	//�ڷ����� ���� �ٸ����� ����
	stu3 = stu + stu2; //error-����ü ���������� ������ �Ұ���

	

	//����ü ������ �迭�� ���� ����
	struct Student arr[3];

	for (int i = 0; i < 3; i++)
	{
		printf("%d��° �л����� �Է�: ", i + 1);

		//Ű���忡 �����ִ� ��� �����
		rewind(stdin);

		printf("�̸�: "); scanf_s("%c", &arr[i].name,1);
		printf("����: "); scanf_s("%d", &arr[i].korean);
		printf("����: "); scanf_s("%d", &arr[i].english);
	
		arr[i].average = (double)(arr[i].korean + arr[i].english) / 2;
	}


	for (int i = 0; i > 3; i++)
	{
		output( arr[i] );
		printf("\n"); //�ݺ��� �Լ� ȣ�� ����
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

	//�������
	char name;		
	int korean;		
	int english;	
	double average;	

};
void main()
{
	struct Student stu = { 'A',80,70,70.5 };
	
	//����ü �����ͺ���
	struct Student* p =NULL; //4byte
	p = &stu; //�����Ϳ� �ּҸ� ����



	printf("name : &c \n", (*p).name);
	printf("korean : &d \n", (*p).korean); //p�� ����Ű�� �ּ��� ���� ��� //������ �켱����
	printf("enlgish : &d \n", stu.english);
	printf("average: %lf \n", (*p).average);
	printf("\n");



	printf("name : &c \n", p->name);
	printf("korean : &d \n", p->korean); //p�� ����Ű�� �ּ��� ���� ��� //������ �켱����
	printf("enlgish : &d \n", p->english);
	printf("average: %lf \n", p->average);


}


#include <stdio.h>

struct Student //17byte			
{

	//�������
	char name;
	int korean;
	int english;
	double average;

};

void output(struct Student* p)
{
	printf("%c \n", p->name); //p�� ����Ű�� ���� �迭�� �ƴ� ����ü
	printf("%d \n", p->korean);
	printf("%d \n", p->english);
	printf("%lf \n", p->average);

	//p++; //�ּҰ��� ������ �� �������� �̵� -> �ι�° ����ü�� ����


	printf("%c \n", (p + 1)->name); 
	printf("%d \n", (p + 1)->korean);
	printf("%d \n", (p + 1)->english);
	printf("%lf \n",(p + 1)->average);

	printf("%c \n", p[2].name);
	printf("%d \n", p[2].korean); //arr[0] = *(arr+0)�̹Ƿ� ->�� .���� �ٲ�
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

		//�������
		char name;
		int korean;
		int english;
		double average;

	};

void main()
{
	
	//�� ������ ����ü ���� ������ �Ҵ�

	struct Student stu = { 'A',80,70,70.5 };
	struct Student* p = malloc(sizeof(struct Student));

	p->name = 'A';
	p->korean = 80;
	p->english = 70;
		
}
