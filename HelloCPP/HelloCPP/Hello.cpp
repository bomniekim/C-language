#include <iostream>


int main()
{
	char a[6] = "Hello";
	std::cout << a << "\n" << 20 << "\n";


	return 0; //���α׷��� �� �����ٴ� ���� �˸��� ��
} 





//�Լ� �����ε� : �Լ����� ���� �Ķ���Ͱ� �ٸ� �� - ����Ÿ���� �Ű�x
#include <iostream>

void aaa()
{
	std::cout << "Hello";
}

void aaa(int a)
{
	std::cout << "Nice";
}

void main()
{
	aaa();
	aaa(10);
}




//�Լ� �Ķ������ ����Ʈ ��

#include <iostream>

void aaa(int a = 5)
{
	std::cout << a << std::endl;
}

void main()
{
	aaa(); //���� �������� �ʾƵ� default���� 5
}

// ����Ʈ���� �Լ��� �����ε��� �縳�� �� ����






//inline�Լ� : �޸��� ��Ȳ�� ���� �� ���� �� �� ���� ..

#include <iostream>

inline void aaa() //��ũ�ΰ����鼭�� ������ ����
{
	std::cout << "aaa" << std::endl;
}

void main()
{
	aaa();
	aaa();
	aaa();
}

#define add(x,y) x+y //��ũ�� �Լ�: �ڷ����� �������̴�/ ª�� �� �ٷθ� ������ �� ����

void main()
{
	std::cout << add(5.5, 3.2);
	std::cout << add(5, 3); //�ڷ����� ���ֹ��� �ʰ� �ܼ�ġȯ
}



//namespace

#include <iostream>

int a;


