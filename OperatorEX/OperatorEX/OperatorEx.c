/* 예제 5-2
#include <stdio.h>

void main()
{
	int i = 0, j = 0, k = 0;
	printf("i= %d, j = %d, k = %d \n", i, j, k);

	i = 1;
	j = 5;
	k = 7;

	printf("i = %d, j = %d, k = %d \n", i, j, k);
}*/


/*예제 5-5
#include <stdio.h>

void main()
{
	int num1 = 1, num2 = 2, num3 = 3, num4 = 4, num5 = 5;

	num1 = num1 + num2;
	printf("복합 덧셈 연산 결과 : num1의 최종 값: %d \n", num1);

	num2 = num2 - 2;
	printf("복합 뺄셈 연산 결과 : num2의 최종 값: %d \n", num2);

	num3 = num3 * 2;
	printf("복합 곱셈 연산 결과 : num3의 최종 값: %d \n", num3);

	num4 = num4 / 2;
	printf("복합 나눗셈 연산 결과 : num4의 최종 값: %d \n", num4);

	num5 = num5 % 2;
	printf("복합 나머지 연산 결과 : num5의 최종 값: %d \n", num5);

	printf("%d, %d, %d, %d, %d \n", num1, num2, num3, num4, num5);
}*/


/*예제 5-6
#include <stdio.h>

void main()
{
	int num1 = 0;
	printf("%d \n", num1);

	num1++;
	printf("%d \n", num1);

	++num1;
	printf("%d \n", num1);

	--num1;
	printf("%d \n", num1);

	num1--;
	printf("%d \n", num1);


}*/


/* 예제 5-7
#include <stdio.h>

void main()
{
	int num1 = 10, num2 = 20;
	int a, b;

	a = ++num1; //선연산 후출력
	printf("%d, %d \n", a, num1); // 11,11

	b = num2++; //선출력 후연산
	printf("%d, %d \n", b, num2); //20,21

}*/


/* 예제 5-8
#include <stdio.h>

void main()
{
	int num1 = 10, num2 = 10;
	int a, b;
	
	num1 = num1 + 1;
	a = num1;
	printf("%d, %d \n", a, num1); // 

	b = num2;
	num2 = num2 + 1;
	printf("%d, %d \n", b, num2); // 

}*/


/* 예제 5-9
#include <stdio.h>

void main()
{
	int num1 = 10, num2 = 10;

	printf("%d \n", ++num1);
	printf("%d \n", num1);

	printf("%d \n", num2++);
	printf("%d \n", num2);

}*/



/* 예제 5-10
#include <stdio.h>

void main()
{
	int num1 = 2, num2 = 4;
	int result1, result2, result3, result4;

	result1 = (num1 > num2); //거짓
	result2 = (num1 <= num2);//참
	result3 = (num1 == num2);//거짓
	result4 = (num1 != num2);//참

	printf("result1에 저장된 값 %d \n", result1);
	printf("result2에 저장된 값 %d \n", result2);
	printf("result3에 저장된 값 %d \n", result3);
	printf("result4에 저장된 값 %d \n", result4);

}*/


/* 예제 5-11
#include <stdio.h>

void main()
{
	int num1 = 2, num2 = 3, num3 = 5;
	int result1, result2, result3;

	result1 = (num1 > 0) && (num2 < 10); //1 && 1 ->1
	result2 = (num2 <= 2) || (num3 > 5); //0 || 0 ->0
	result3 = !num3; // 5는 0이 아니고 1 -> !1 ->0

	printf("result1에 저장된 값 %d \n", result1);
	printf("result2에 저장된 값 %d \n", result2);
	printf("result3에 저장된 값 %d \n", result3);

}*/


/* 예제 5-12
#include <stdio.h>

void main()
{
	int num1 = 2, num2 = 3;
	int result1;

	result1 = (num1 > num2) ? num1 : num2;
	printf("result1에 저장된 값 %d \n", result1); //3
}*/



/* p.129 1번
#include <stdio.h>

void main()
{
	int x, y, z;

	printf("input x : ");
	scanf_s("%d", &x);
	printf("input x : ");
	scanf_s("%d", &y);
	printf("input x : ");
	scanf_s("%d", &z);

	printf("(x+y)*(x+z)/(y%%z) = %d", (x + y) * (x + z) / (y % z)); //%%를 잊지말자
}*/


/* 2번
#include <stdio.h>

void main()
{
	int num1, num2;

	printf("input : ");
	scanf_s("%d", &num1);
	printf("input : ");
	scanf_s("%d", &num2);

	printf("Smlaller Number : %d", (num1 <= num2) ? num1 : num2);
}*/


/* 3번
#include <stdio.h>

void main()
{
	int x = 3, y = 5, z = 3, k = 2;
	int a;
	
	a = x < y || x < z && z < k; // 1 || 0 && 0 -> 1 || 0 -> 1      
	printf("결과 값 1 a : %d \n", a);

	a = (x < y || x < z) && z < k; // (1 || 0) && 0 -> 0 && 0 -> 0
	printf("결과 값 2 a : %d \n", a);


	// () && || 순서로 처리
}*/


/* 4번
#include <stdio.h>

void main()
{
	int a, b, c;

	printf("첫 번째 정수를 입력하시오. : ");
	scanf_s("%d", &a);
	printf("두 번째 정수를 입력하시오. : ");
	scanf_s("%d", &b);
	printf("세 번째 정수를 입력하시오. : ");
	scanf_s("%d", &c);

	printf("다음 중 가장 큰 정수의 값은 %d입니다. \n\n", a > b && b > c ? a : b > c ? b : c);
}*/

/* 5번
#include <stdio.h>

void main()
{
	const float dollar = 1.15570;
	int won;


	printf("원달러 환율 계산 프로그램입니다. KRW을 입력하세요. :");
	scanf_s("%d", &won);

	printf("%.0f원 입니다.\n\n", (float)won * dollar);

}*/


/* 8번
#include <stdio.h>

void main()
{
	int h, m, s;

	printf("현재의 시각(시, 분, 초)를 각각 입력하시오. \n");

	printf("시 :");
	scanf_s("%d", &h);
	printf("분 :");
	scanf_s("%d", &m);
	printf("초 :");
	scanf_s("%d", &s);

	printf("\n 오늘 00시 00분 00초를 기준으로 %d초가 흘렀습니다.\n", 60 * 60 * h + 60 * m + s);

}*/


/* 9번
#include <stdio.h>

void main()
{
	int p;

	printf("파운드를 입력하시오: ");
	scanf_s("%d", &p);

	printf("%.0f파운드는 %.0fkg입니다.", (float)p, (float)p * 0.45);  //형변환 연산자를 사용해서 계산
										//-> RAM의 '또 다른 공간'에 임시적으로 메모리를 할당받아 float형 10.0으로 저장하고 cpu로 복사
										// 다음줄로 내려오면 임시 메모리는 모두 사라짐. a,b는 여전히 int형 자료!!!!!!
}*/



/* 10번
#include <stdio.h>

void main()
{
	int feet;

	printf("피트를 입력하세요: ");
	scanf_s("%d", &feet);

	printf("%.0f피트는 지상에서 %.0f미터 떨어져 있는 것입니다. \n", (float)feet, (float)feet * 0.3048);

}*/



/* 7번
#include <stdio.h>

void main()
{
	int num;
	int a,b,c,d;
	
	printf("0000과 1111사이의 2진수 숫자를 입력하시오. :");
	scanf_s("%d", &num);
	
	a = num / 1000;
	b = (num % 1000) / 100;
	c = (num % 1000) / 10;
	d = (num % 1000) % 10;

	printf("변환된 10진수의 값은 %d입니다.\n\n", a * 8 + b * 4 + c * 2 + d * 1);
}*/



#include <stdio.h>

void main()
{
	int a, b;

	a = 20 * 365 * 2000 * 40;
	b = 100 * 365 * 24 * 60 - a;

	printf("수명이 %d분 줄어들었다. \n", a);
	printf("이 사람은 %d살까지 살 수 있다.", b);
}

b = 100 * 365 * 24 * 60 - 20 * 365 * 2000 * 40;
