/*
#include <stdio.h>

void main()
{
	int a;
	int b;

	a = 10; //�����ٷ� �Ѿ�� ��� int�ȿ� ����ǰ� RAM������ ������
	b = 4;

	printf("%d \n", a + b); //cpu ���� �������Ϳ� ����� ���纻�� ���� - cpu�� ����Ⱑ ��� �� �����(acc)�� ����-> ����� �ٽ� RAM���� �̵� (�ӽú���) �������� �ڷ����� ������ '�ǿ����ڸ� �������' �������. ��� ��� �Ŀ��� �ӽú����� �����.
}*/

/*
#include <stdio.h>

void main()
{
	int a = 2.5; //������ġ�� RAM���� �ű�� �������� int a =(int)2.5�� ������ ����ȯ�� ���������� ����. C��.

	printf("%d", a);
}*/


/*
#include <stdio.h>

void main()
{
	float a, b;

	a = 10.0f;
	b = 4.0f;

	printf("%f \n", a / b); //���� -> ����ȯ ������ ��� typecasting
}


#include <stdio.h>

void main()
{
	int a;
	int b;

	a = 10;
	b = 4;

	printf("%f \n", (float)a / (float)b); //����ȯ �����ڸ� ����ؼ� ���
										//-> RAM�� '�� �ٸ� ����'�� �ӽ������� �޸𸮸� �Ҵ�޾� float�� 10.0���� �����ϰ� cpu�� ����
										// �����ٷ� �������� �ӽ� �޸𸮴� ��� �����. a,b�� ������ int�� �ڷ�!!!!!!
}*/

//�ڷ����� �ٸ� ��� ���� ũ���� �ڷ����� ū ũ���� �ڷ������� ��ȯ�Ǿ� RAM�� ���ο� ������ �Ҵ���� �� ����.
/*
#include <stdio.h>

void main()
{
	int a;
	int b;

	a = 10;
	b = 3;

	printf(" %d \n", a % b); //������ ������
}*/


/*
#include <stdio.h>

void main()
{
	int a;
	int b;

	a = 10;
	b = 3;

	printf(" %d \n", a>b);// ���̸� 1, �����̸� 0
}*/


/*
#include <stdio.h>

void main()
{
	printf("%d \n", 1 && 0); //&& and����
	printf("%d \n", 0 || 0); //||  or ����
	printf("%d \n", !0); //! not ����

	printf("%d \n", 10 > 5 && 10 < 50); // �񱳿����ڿ� �������ڸ� �Բ� -��� 1
	printf("%d \n", !(10 < 5)); //��� 1
}


#include <stdio.h>

void main()
{
	printf("����� ���̸� �Է��ϼ��� :");

	int age;
	scanf_s("%d", &age);
	if (age >= 20 && age<40) // �񱳿����ڿ� �������ڸ� �Բ�
	{
		printf("ȯ���մϴ�. �����ϼ���. \n")
	}
	else
	{
		printf("����.");
	}
}


#include <stdio.h>

void main()
{
	printf("����� ���̸� �Է��ϼ��� :");

	int age;
	scanf_s("%d", &age);
	if (age<20 || age>40) // �񱳿����ڿ� �������ڸ� �Բ� // �� �Ʒ��� �ڵ�� �ٸ����� ������ ���� // ����������� �ذᰡ���ϰ�
	{
		printf("����. \n");
	}
	else
	{
		printf("ȯ���մϴ�. �����ϼ���. \n");
	}
}


#include <stdio.h>

void main()
{
	int a = 10;

	a = a + 1;
	a++; // a=a+1;

	printf("%d \n", a); //a=11
}


#include <stdio.h>

void main()
{
	int a = 10;
	int b = a++;

	printf("a: %d \n", a);// a=11
	printf("b: %d \n", b);// b=10 a�� ���� b�� �ѱ�� (�����) ���߿� ++ (�Ŀ���)

}

#include <stdio.h>

void main()
{
	int a = 10;
	int b = ++a;

	printf("a: %d \n", a);// a=11
	printf("b: %d \n", b);// b=11
}


void main()
{
	int a = 10;

	a += 3; // a = a + 3; / ������ �ݺ��ۼ��� ���ϱ� ����.. "���ϰ�(�����ϰ�) �־�" (���մ��Կ�����) += -= *= /=
	printf("a: %d \n", a);// a=13
}*/



//���׿�����(���ǿ�����) 
// �񱳹� ? ��data : ���� data ; 

/*
#include <stdio.h>

void main()
{
	int a = 10;


	a = (5 > 3 && 5<7) ? 7 : 100; //�񱳹��� ��ȣ�� ���� ���� ����

	printf("a: %d \n", a); //a=100
}

#include <stdio.h>

void main()
{
	int a = 10;


	int b = (a < 5) ? 50 : (a > 0) ? 100 : 150; // ������ ��� �� �ѹ��� ������ �� �� �ִ�.

	printf("a: %d \n", a); //a=100
}*/


//�����������α׷�

#include <stdio.h>

void main()
{

	printf("������ �Է��ϸ� ������ �������ִ� ���α׷��Դϴ�. \n\n");

	int score; //������ �����ϴ� ������ ����

	printf("����� ������ �Է����ּ���. : ");
	scanf_s("%d", &score);

	char grade; //������ �����ϴ� �� ���� ����

	//������ ���� ������ ���
	grade = (score >= 90) ? 'A' : (score >= 80 /*&& score < 90*/) ? 'B' : (score >= 70 /*&& score < 80*/) ? 'C' : (score >= 60 /*&& score < 70*/) ? 'D' : 'F';
		
	//���� ������ ���
	printf("\n\n\n");
	printf("����� ������ [%c]�Դϴ�. \n", grade);

}