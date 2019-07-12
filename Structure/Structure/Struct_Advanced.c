// 구조체: 서로 연관있는 변수를 묶어서 관리하는 기법 

#include <stdio.h>

struct Personal
{
	//멤버변수
	char* name;
	int age;
	char* address; //문자열의 시작주소를 포인터로 가리키는 방법 
};

void main()
{
	// sam, 20, seoul 저장하기
	struct Personal user = { "sam", 20, "seoul" }; //초기화했기 때문에 나머지는 0

	user.name = "park"; 
	user.age = 20;
	user.address = "seoul"; //seoul의 주소를 가지고 있는 포인터 변수

	printf(" %s \n", user.name);
	printf(" %d \n", user.age);
	printf(" %s \n", user.address);

}