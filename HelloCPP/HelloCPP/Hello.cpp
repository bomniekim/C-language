#include <iostream>


int main()
{
	char a[6] = "Hello";
	std::cout << a << "\n" << 20 << "\n";


	return 0; //프로그램이 잘 끝났다는 것을 알리는 것
} 





//함수 오버로딩 : 함수명이 같고 파라미터가 다른 것 - 리턴타입은 신경x
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




//함수 파라미터의 디폴트 값

#include <iostream>

void aaa(int a = 5)
{
	std::cout << a << std::endl;
}

void main()
{
	aaa(); //값을 전달하지 않아도 default값이 5
}

// 디폴트값과 함수의 오버로딩은 양립할 수 없음






//inline함수 : 메모리의 상황에 따라 될 수도 안 될 수도 ..

#include <iostream>

inline void aaa() //매크로같으면서도 여러줄 가능
{
	std::cout << "aaa" << std::endl;
}

void main()
{
	aaa();
	aaa();
	aaa();
}

#define add(x,y) x+y //매크로 함수: 자료형에 독립적이다/ 짧게 한 줄로만 정의할 수 있음

void main()
{
	std::cout << add(5.5, 3.2);
	std::cout << add(5, 3); //자료형에 구애받지 않고 단순치환
}



//namespace

#include <iostream>

int a;


