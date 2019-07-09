/* 예제2-3
#include <stdio.h>

void main()
{
	printf("\t Hello C! \n Hello world! \n");
	printf("큰따옴표 : \" \" \n");
	printf("작은따옴표 : \' \' \n");
	printf("역슬래시 : \\ \n");
}
*/

/* 예제2-4
#include <stdio.h>

void main()
{
		printf("%d 더하기 %d는 %d입니다. \n", 3, 5, 3 + 5);
		printf("%i 더하기 %i는 %i입니다. \n", 3, 5, 3 + 5);
		printf("%d - %d = %d입니다. \n", 3, 5, 3 - 5);
		printf("%i - %i = %i입니다. \n", 3, 5, 3 - 5);
}
*/

/* 예제 2-5
#include <stdio.h>

void main()
{
	printf("10진수 : %d는 16진수 : %x, 8진수 : %o입니다. \n", 50, 50, 50);
	printf("10진수 : %d는 16진수 : %x, 8진수 : %o입니다. \n", -50, -50, -50);
	//16진수와 8진수는 음수표현이 불가
}
*/

/* 예제2-6
#include <stdio.h>

void main()
{
	printf("10진수 정수 : %d \n", 0.5);
	printf("10진수 실수 : %f \n", 0.5);
	printf("10진수 실수 : %lf \n", 0.5);

	printf("소수점 이하 6자리 이상 : %f \n", 0.56556789);
	printf("소수점 이하 6자리 이상 : %lf \n", 0.56556789);
}
*/

/* 예제2-7
#include <stdio.h>

void main()
{
	printf("a를 대문자로 표현하면 %c입니다.\n", 'A');
	printf("%s는 %c입니다. \n", "a를 대문자로 표현하면", 'A');
	printf("%s %d %s \n", "2 곱하기 3은", 2 * 3, "입니다.");

}*/


/* 예제2-8
#include <stdio.h>

void main()
{
	printf("%d \n", 2147483647);
	printf("%d \n", 2147483650);
	printf("%u \n", 4294967295);
}*/


/* 예제2-9 
#include <stdio.h>

void main()
{
	printf("%f \n", 0.000123);
	printf("%f \n", 0.0001236);

	printf("%e \n", 0.000123);
	printf("%e \n", 0.0001237);

	printf("%g \n", 0.000123);
	printf("%g \n", 0.0000123456);

	printf("올해 우리나라 경제 성장률은 5%%입니다. \n");
}*/

/* 예제 2-10
#include <stdio.h>

void main()
{
	printf("%03d, %03d, %03d \n", 1, 20, 300);
	printf("%-3d, %-3d, %-3d \n", -1, 20, 300);
	printf("%+3d, %+3d, %+3d \n", 1, 20, 300);
	printf("%+3d, %+3d, %+3d \n", 1, 20, -300);
}*/


/* p.53 1번
#include <stdio.h>

void main()
{
	printf("\t   %c \n", '*');
	printf("\t  %s \n", "***");
	printf("\t %s \n", "*****");
	printf("\t  %s \n", "***");
	printf("\t   %c \n", '*');

}*/

/* p.53 2번
#include <stdio.h>

void main()
{
	printf("%d * %d = %d \n", 2, 1, 2 * 1);
	printf("%d * %d = %d \n", 2, 2, 2 * 2);
	printf("%d * %d = %d \n", 2, 3, 2 * 3);
	printf("%d * %d = %d \n", 2, 4, 2 * 4);
	printf("%d * %d = %d \n", 2, 5, 2 * 5);
	printf("%d * %d = %d \n", 2, 6, 2 * 6);
	printf("%d * %d = %d \n", 2, 7, 2 * 7);
	printf("%d * %d = %d \n", 2, 8, 2 * 8);
	printf("%d * %d = %d \n", 2, 9, 2 * 9);

}*/