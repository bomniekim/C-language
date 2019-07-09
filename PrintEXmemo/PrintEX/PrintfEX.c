//메모장 연습문제
/* 1번
#include <stdio.h>

void main()
{
	printf("%s \n %s \n %s \n"," 홍길동", "홍  길  동", "홍    길    동");
}*/


/* 2번
#include <stdio.h>

void main()
{
	printf("%s \n", "김보민");
	printf("%s \n", "서울 성동구 도선동 123");
	printf("%s \n", "010-5156-3592");
}*/

/* 3번
#include <stdio.h>

void main()
{
	printf("%s \n", "제 이름은 홍길동입니다.");
	printf("%s %d%s \n", "제 나이는", 20, "살이고요.");
	printf("%s %d%c%d %s", "제가 사는 곳의 번지수는", 123,'-',456, "입니다.");
}*/

/* 4번
#include <stdio.h>

void main()
{
	printf("%d %c %d %c %d \n", 4, '*', 5, '=', 4*5);
	printf("%d %c %d %c %d \n", 7, '*', 9, '=', 7 * 9);
}*/

#include <stdio.h>

void main()
{
	printf("문자열 출력 : [%-20s]\n", "대한민국");
	printf("문자열 출력 : [%20s]\n", "대한민국");
	printf("문자 출력 : [%10c]\n", 'a');
	printf("문자 정수값 출력 : [%-10d]\n", 'a');
	printf("오른쪽 정렬 : [%10d]\n", 1234);
	printf("0 삽입 : [%010d]\n", 1234);
	printf("음수의 0 삽입 : [%010d]\n", -1234);
	printf("부동소수점 출력 : [%8.2f]\n", 123.4567);
	printf("부동소수점 출력 : [%-8.2f]\n", 123.4567);
	printf("부동소수점 출력 : [%10.2f]\n", 0.0012345);
	printf("부동소수점 출력 : [%10.3e]\n", 0.0012345);
	printf("부동소수점 출력 : [%10.7g]\n", 0.00012345);

}