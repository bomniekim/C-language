//Pointer: �޸� �ּҸ� ���� data�� �����ϴ� ��� //1.pointer���� 2.pointer���
/*
#include <stdio.h>

void main()
{
	int a = 10;// �Ϲ� ����������

	//�����ͺ��� ���𹮹�
	// �ڷ��� *������;  pointing�ϴ� ������ �ڷ���
	int *p; //�ּҸ� �������ν� �������� ����Ŵ (�����ּҸ�): 4byte

	p = &a; //������ ������ �ּҰ� ����


	//�����ͺ��� p�� ����Ű�� ��� ���� a�� ���� �����ϱ� -> ������: *
	printf(" %d  \n", *p);//������ ������ / 50
	printf(" %d  \n", a);//������ ������ / 50

}

void main()
{
	char ch = 'A';
	char* p; //����Ʈ ������ ������ 4����Ʈ

	p = &ch;

	printf("%c \n", *p); //������ ������ ����Ű�� ���� ��
}

void main()
{
	double a = 3.14;
	double *p; //����Ʈ������ ����ų ����� �ڷ���

	printf(" %lf \n ", a);
	printf(" %lf \n ", *p);

	*p = *p + 1.5;
	printf(" %lf \n ", a); //4.640000

}


void main()
{
	int a = 10;
	int* p; // int *p;

	p = &a; //a�� �ּҸ� �˰Եȴ�.

	printf(" %d  \n ", *p);

	printf(" %p  \n ", *p); //10�� �ּҶ�� �����ϰ� ��´�. -> 16������ 0000000A

	printf(" %p  \n ", p); // p�� �� = a�� �ּ�

	p++; //4����Ʈ�� �ּҸ� �پ�Ѵ´�. char�� ��쿡�� 1����Ʈ ����

	*p++;//  ++�� ���� - >�ּҸ� ++ / #100���� ++�ϸ� #104
	(*p)++;// ������ ������ ���� ������ #100�� ����Ű�� �� ���� ++

	int b = 20;

	p = &b; //����Ʈ ����!�̴ϱ� ������� ���� ������ ���� ------�ڹ��� ��������
	printf(" %d  \n ", *p);
	*/





}
//�����͸� ���� 4���� ����

//1. �ٸ� ����(�Լ�)�� �������� ����
//2. ���� �迭 ������ �Լ��� �Ķ���ͷ� �����ϰ���
//3. ���ڿ��� �����ϴ� �뵵
//4. ���� �޸�(heap����)�� ����� ���� ->�ڹٿ��� ������ ���




//1. �ٸ� ����(�Լ�)�� �������� ����
#include <stdio.h>

int swap(int* a, int* b);


//���� ġȯ�ϴ� ����� ���� �Լ�
int swap(int* a, int* b)
{
	int temp;
	//temp = a; //�̷��� �ϸ� �׳� �ּҸ� �����°� 
	temp = *a; //a�� �ּҸ� �������Ͽ� ���� ���
	*a = *b;
	*b = temp;
}

void main()
{
	int a = 10; //��������
	int b = 20;

	printf("���� �� a : %d \n", a);
	printf("���� �� b : %d \n", b);

	//a<->b ������ �� ġȯ
	//�ӽú��� �ʿ� int temp

	swap(&a, &b);

	printf("\n\n");
	printf("���� �� a : %d \n", a);
	printf("���� �� b : %d \n", b);

}