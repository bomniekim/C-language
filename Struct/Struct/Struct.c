//����ü(Struct): �����(���α׷���) ���� �ڷ��� -> ���� �����ִ� ������ ��� �����ϴ� ���
//(���� �ٸ� �ڷ����� ����)!!!!!!!!!




#include <stdio.h>

// ���ο� [�ڷ���] �����ϱ�: ����ü ����
// ������ �ƴ� �ڷ����� ����� ��! 
// 7��° �ڷ����� �����س� ��

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
	//�ڷ��� struct student ������ stu:
	struct student stu;
	stu.name = 'A';
	stu.korean = 80;
	stu.english = 70;
	stu.average = 75.0; //�� ������ // ū �ڽ��� ���� ����

	printf("%c \n", stu.name);
	printf("%d \n", stu.korean);
	printf("%d \n", stu.english);
	printf("%lf \n", stu.average);

}