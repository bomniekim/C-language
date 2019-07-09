#include <Stdio.h>

void main()
{
	char str[30];
	int i;
	int max = 0;

	printf("영단어 입력 : ");
	for (i = 0; i < 30; i++)
	{
		scanf("%c", &str[i]);
		//입력받은 글자가 최대값(아스키코드가 제일큰 값)이냐?
		if (max < str[i]) max = str[i];

		//혹시 입력된 한문자가 엔터(ASCII : 10)인지??
		if (str[i] == 10 || str[i] == 32) break;
	}

	//결국 max에는 입력받은 값중 가장 큰 값이 남아있음.
	printf(" 가장 큰 문자 : %c  \n", max);
}