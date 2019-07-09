#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	printf("숫자맞추기 게임!\n\n");

	int u, c;//유저가 키보드로 입력한 값, 컴퓨터가 가지고 있는 임의의 값
	
	//컴퓨터가 만들 임의의 숫자 ()
	//rand()이 다르게 만들어지려면....... 랜덤값을 만들기를 시작한다라는 초기화 작업이 필요함

	srand( time(NULL) );

	int n = rand();

	c = rand()%21; //0~20중의 임의의 수      //-5~5사이의 수 : rand()%11-5

	while (1)
		//입력받은 값과 정답을 비교
	{	
		printf("0~20 사이의 정수를 입력하시오 : ");
		scanf_s("%d", &u);

		if (u > c)
			printf("%d보다 작은 값입니다.\n\n", u);
		else if (u < c)
			printf("%d보다 큰 값입니다. \n\n", u);
		else
		{
			printf("축하합니다. 정답입니다! \n\n"); 
			printf("프로그램 종료!"); break;
		}
			
	}
}


