#include <stdio.h>



//1.����Ÿ���� ���� �Ķ���͵� ����

void output();//�Լ��� ������Ÿ�� <-���ΰ��忡 �������� ���� ����

void main()
{
	output(); //call : �Լ� ȣ��
	output(); //call : �Լ� ȣ��
	output(); //call : �Լ� ȣ��
	output(); //call : �Լ� ȣ�� ������ ����

}

void output(/*void*/)
{
	printf("Hello World!");

}





#include <stdio.h>

// 2. 
void output(); //�Լ��� ������Ÿ��

void main()
{
	int a;
	a = 10;

	output(a);//call :�Լ�ȣ��
           //�������� ���� ()���̿� ���´�. ���� ���� '��'�� ���ư��� �� (a��� ���ڰ� �ƴ� a�� ���� 10�� ������) call by value 
}

//��±���� ���� �Լ�
void output(int x/*������*/) // a�� ���� ������ �� �ִ� ������ ������ �Ѵ�. int a != int x
{
	printf(" a: %d \n", x); //�ٸ� �����̴ϱ� ������ a���� �˾Ƶ��� �� ���� 
							//-> ���� a�� �ƴ� �纻x�� ���/ ���� ������ �ٸ� ���ھ�! 
} //int x ��� int a��� �ᵵ ������. ���� �ٸ� ���� �ִ� �̸��� ���� ���� .






void output(); 
void main()
{
	int a = 10;
	int b = 10;

	output(a,b);//call :�Լ�ȣ��
}

//��±���� ���� �Լ�
void output(int a, int b) //������ �ڷ���, ������ �¾ƾ���
{
	printf(" a: %d \n", a); 
	printf(" b: %d \n", b); //�ٸ� �����̴ϱ� ������ a���� �˾Ƶ��� �� ���� 
							//���ڰ� ����ư��°� �ƴ϶� a�� ���� ���ư�, ���ڸ� ������ ����� ����

}


int input();

void main()
{
	int a;

	input(); //����� ���忡�� �����ؼ��� n�� ������ �ٲ�� ����
	
	a=input(); //������ �� ������ �� ��(���)�� a�� �־��
				//�Լ��� �ִ°� �ƴ϶� �Լ��� ���� �ִ� ��
	
	int b;
	b = input();
	printf("b: %d\n", b); //scanf�� �ι� �� ȿ��

	printf(" a: %d \n", a); //n�� ���� �����
}

int input()//�����Ϸ��� �ڷ����� ������� : �� int�� ������ ���ư��� ! �ڡڡڡڡڡڸ���Ÿ���� �Ѱ��ۿ� �� �����ȡڡڡڡڡڡ�
{
	int n, s;           //�ϴ� n�� ������Ű�� main �������� �ٽ� ��������
	printf("input : ");
	scanfs_s("%d", &n); //ex. ����ڰ� �Է��� �� 50

	return n; //�ƹ��͵� �Ⱦ��� �׳� ����. "���ư� �� n�� ���� ��������" //�Լ��� ������ �� (����)
}				// ����ڰ� �� '��'�� ������ ���ư�. n�̶�� ������ ���� ���� �ƴ�.
				//���ϰ��� �ϳ��� ����


//������ �Է��� �ް� �ҷ����� ������ [�Լ� ȣ���� ������] �ϸ� �ȴ�!!







#include <stdio.h>


//������Ÿ��
void display(); //1.00
void output(int a, int b, int sum);//4.01
int input();//2.10
int cal(int x, int y); //3.11


void main()
{
	//1.�ȳ��޼��� ���
	display();

	int a, b;

	//2.�Է±��
	a = input();
	b = input();

	int sum;
	//3.���� ����
	sum = cal(a,b); //������ �޾ƿ� a,b�� cal�� ����


	//4.��� ���
	output(a, b, sum);
}


//1.�ȳ��޼��� ��±��
void display() //����Ÿ�� void & �Ķ���� ����
{
	printf("�� ������ �Է¹޾� ������ ����� ����ϴ� ���α׷��Դϴ�.\n\n");
}


//2.�Է±��
int input()
{
	int n;

	printf("input : ");
	scanf_s("%d", &n);

	return n; //���ϵǴ� ���� �ڷ��� = ����Ÿ�� => int
}


//3.����������
int cal(int x, int y) //z�� ���� int�̹Ƿ� ����Ÿ���� int
{
	 int z = x + y;
	 
	 return z;

}


//4.������
void output(int a, int b, int sum)
{
	printf("\n %d + %d = %d \n\n", a, b, sum);

}






#include <stdio.h>

void bbb()
{
	printf("bbb\n");
}

void aaa()
{
	printf("aaa\n");
	bbb(); //�Լ�ȣ�� ���� -> ��û��ü�� ����û�ϴ� �Ͱ� ���� �ý���

}

void main()
{
	aaa();
	bbb();

	printf("main����\n");
}





#include <stdio.h>


int a; //�������� ���� ���� //���������� �ʱⰪ�� 0
int c = 20;// ���� �ʱ�ȭ�� ���� (������ �ƴϴϱ�): ����鼭 �ִ°� ����

a = 30; //���� : ���Կ���

void main()
{
	int b; //�������� ���� - ������ �޶����� �� �˾Ƶ��
}

void aaa()
{
	int k; //��������
}
//���������� ���α׷��� �����Ҷ����� ����� ���� �޸𸮸� ��� (��ȿ����)
//���������� ȣ���� �޾� {�� ���������� }������������ �޸𸮸� ��� (ȿ����)




#include <stdio.h>

void aaa();

static int a = 10;//���� ��������

void main()
{
	static int a = 50; //���� �������� ---->���������� ���� ������ == ���� ��������
	{
		printf(" %d ", a);
	}

	printf(" %d ", a);
}










void main()
{
	printf("aaa");
	aaa();
}


void aaa()
{
	int k; //�������� -- main���� ȣ���ؾ� �������� ������
	static int k; //���� ��������  -- main���� ȣ������ �ʾҾ �̹� �޸𸮿� int k�� ������ ���� (���α׷��� �����Ҷ����� ����� �� ���� ����)
					// ��ġ ���������� ���� Ư¡ / �Լ��� ���࿩�ο� ���� 
					//�ٸ� �������� �̷̹� ���α׷� ��ü�� ������ �ִ� ���� �ƴ϶� �Լ� �������� ���� 
					// �� �׸��� ���� �� �� �־�!!!!!!!!!
}





#include <stdio.h>

void aaa();
void bbb();

int count = 0;
int countb = 0; //������ �����Ҷ� ����ϴ� ��� -> ������ ��� �ټ��� count ������ �ʿ�? ����.. -----> �׷��� static ������ ����ϴ� ��
				//  �ٰ��� �Դ� ���̺� ���� ������ ���ϴ� ���� ��

void main()
{
	aaa();
	aaa();
	bbb();
	aaa();
	aaa();
	bbb();
}

void aaa()
{
	int count = 1; //��������
	count++;
	printf("  %d��° aaaȣ��\n", count);
} // count�� ���� 2�� ���·� ȣ���� ������ ����� -> �ݺ�-> ��� 2��° ȣ��� ��µ� 
void bbb()
{
	countb++;
	printf("%d��° bbbȣ��\n", countb);
}






//�׷��� ���������� ����. //��ǻ�ʹ� ���α׷��� �����Ҷ� ��ó���� ó�� �� �ٷ� static ���� ó��

#include <stdio.h>

void aaa();
void bbb();


void main()
{
	aaa();
	aaa();
	bbb();
	aaa();
	aaa();
	bbb();
}

void aaa()
{
	static int count = 0;  //���������̹Ƿ� �̸��� ������ �ٸ� ���ڷ� ��� //�޸𸮴� �̹� ���α׷� ���۵� �� �����������
	count++;
	printf("  %d��° aaaȣ��\n", count);
} 
void bbb()
{
	static int count = 0; //���������̹Ƿ� �̸��� ������ �ٸ� ���ڷ� ��� // ȣ�� ������ �̹� ������ �����־� -- �� �ѹ��� ����!
	countb++; // bbb�� ȣ��޾��� �� �ٷ� countb++;�� �����Ͽ� ���� ����
	printf("%d��° bbbȣ��\n", countb);
}




//��� ȣ�� Recursive Call

#include <stdio.h>


int bbb()
{
	return 5;
}

int aaa()
{
	return bbb()*4; //�Լ��� ��� '��'�� 5�� ���� ��
}


void main()
{
	printf(" %d  \n", aaa() + 8);   //28
}



#include <stdio.h>

void aaa(int n)
{
	if (n <= 0) return;

	printf("aaa\n");
	aaa(n-1); //�����Լ��� �� ȣ�Ⱑ����. ���ȣ��
				//���� ���� ���� �ٲپ� ��Ʈ�� 
}

void main()
{
	aaa(4);
}

