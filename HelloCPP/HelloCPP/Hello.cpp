
//C언어 -> C++언어로의 전환

#include <iostream>


//1. cout, cin
//2. 변수 선언 위치 free
int main()
{
	char a[6] = "Hello";
	std::cout << a << "\n" << 20 << "\n";


	return 0; //프로그램이 잘 끝났다는 것을 알리는 것
} 





//3. 함수 오버로딩 : 함수명이 같고 파라미터가 다른 것 - 리턴타입은 신경x
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




//4. 함수 파라미터의 디폴트 값

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






//5. inline함수 : 메모리의 상황에 따라 될 수도 안 될 수도 ..

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






//6. namespace[이름공간] '::범위지정연산자'

#include <iostream>

namespace chanwoo //찬우라는 이름을 나타내는 공간 : 영역구분
{
	int hp = 50;
	void attack()
	{
		std::cout << "침뱉어!" << std::endl;
	}
}

namespace hyeongwoo //형우라는 이름을 나타내는 공간:
{
	int hp = 100;
	void attack()
	{
		std::cout << "총 쏴!" << std::endl;
	}
}


using chanwoo::hp; //찬우의 hp가 main hp가 되는것
using chanwoo::attack; //찬우의 attack이 main attack이 되는 것
						//함수라고 ()쓰지 말고 함수명만 쓰기


using namespace chanwoo; //chanwoo로 지정된 namespace를 통째로 모두 풀어주는 방법


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
using std::cin; //매번 3줄 쓰기 귀찮...

using namespace std; //std의 모든 것을 풀어주는 것 - 개발자들이 선호

void main()
{
	cout << "aaa" << endl;
	cout << 10 << endl;

	int a;
	cin >> a;
}




//::의 사용 : 전역변수를 지역 내에 쓰는 방법
#include <iostream>
using namespace std;

int a = 10; //전역변수

void main()
{
	int a = 20; //지역변수

	cout << ::a + a << endl; //전역변수 a를 지칭하는 방법 10+20=30
}





//7. 새로운 data type 논리값 : bool -> boolean
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


//8. 참조자(Reference) : 별명 부여하기

void main()
{
	int a = 10;
	int& k=a; //참조자를 만드는 문법 - k는 a의 별명이다
			//참조값이 넘어갔다.

	int& s = a;
	int& b = s;//별명에 별명을 붙이는 것이 가능

	cout << k << endl;

	k++; 

	cout << a << endl;
}


//9. 동적 메모리 할당 (사용자 영역 정의)

//생성: new
//소멸: delete

void main()
{
	int* p=new int; //원하는 자료형을 쓰는 것 - malloc은 byte수만 써서 자료형 저장X
	//힙메모리에는 이름을 줄 수 없다.

	*p = 10;

	cout << *p << endl;
	
	delete p; //소멸
}



//10. string.h 대신 cstring의 사용