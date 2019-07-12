
//C��� -> C++������ ��ȯ

#include <iostream>


//1. cout, cin
//2. ���� ���� ��ġ free
int main()
{
	char a[6] = "Hello";
	std::cout << a << "\n" << 20 << "\n";


	return 0; //���α׷��� �� �����ٴ� ���� �˸��� ��
} 





//3. �Լ� �����ε� : �Լ����� ���� �Ķ���Ͱ� �ٸ� �� - ����Ÿ���� �Ű�x
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




//4. �Լ� �Ķ������ ����Ʈ ��

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






//5. inline�Լ� : �޸��� ��Ȳ�� ���� �� ���� �� �� ���� ..

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






//6. namespace[�̸�����] '::��������������'

#include <iostream>

namespace chanwoo //������ �̸��� ��Ÿ���� ���� : ��������
{
	int hp = 50;
	void attack()
	{
		std::cout << "ħ���!" << std::endl;
	}
}

namespace hyeongwoo //������ �̸��� ��Ÿ���� ����:
{
	int hp = 100;
	void attack()
	{
		std::cout << "�� ��!" << std::endl;
	}
}


using chanwoo::hp; //������ hp�� main hp�� �Ǵ°�
using chanwoo::attack; //������ attack�� main attack�� �Ǵ� ��
						//�Լ���� ()���� ���� �Լ��� ����


using namespace chanwoo; //chanwoo�� ������ namespace�� ��°�� ��� Ǯ���ִ� ���


void main()
{
	hp=50;
	hyeongwoo::hp = 100;

	attack();
	hyeongwoo::attack();

}



#include <iostream>

using std::cout;
using std::endl;
using std::cin; //�Ź� 3�� ���� ����...

using namespace std; //std�� ��� ���� Ǯ���ִ� �� - �����ڵ��� ��ȣ

void main()
{
	cout << "aaa" << endl;
	cout << 10 << endl;

	int a;
	cin >> a;
}




//::�� ��� : ���������� ���� ���� ���� ���
#include <iostream>
using namespace std;

int a = 10; //��������

void main()
{
	int a = 20; //��������

	cout << ::a + a << endl; //�������� a�� ��Ī�ϴ� ��� 10+20=30
}





//7. ���ο� data type ���� : bool -> boolean
#include <iostream>
using namespace std;

int a = 10;

void main()
{
	bool a = 5 > 3; //true;
	bool b = false;

	if (a)
	{
		cout << "aaa";
	}
}






void main()
{
	int a = 10;
	int* p = &a;

	cout << *p << endl;
}


//8. ������(Reference) : ���� �ο��ϱ�

void main()
{
	int a = 10;
	int& k=a; //�����ڸ� ����� ���� - k�� a�� �����̴�
			//�������� �Ѿ��.

	int& s = a;
	int& b = s;//���� ������ ���̴� ���� ����

	cout << k << endl;

	k++; 

	cout << a << endl;
}


//9. ���� �޸� �Ҵ� (����� ���� ����)

//����: new
//�Ҹ�: delete

void main()
{
	int* p=new int; //���ϴ� �ڷ����� ���� �� - malloc�� byte���� �Ἥ �ڷ��� ����X
	//���޸𸮿��� �̸��� �� �� ����.

	*p = 10;

	cout << *p << endl;
	
	delete p; //�Ҹ�
}



//10. string.h ��� cstring�� ���