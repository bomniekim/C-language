#include <Stdio.h>

void main()
{
	char str[30];
	int i;

	printf("영단어 입력 : ");
	for (i = 0; i < 30; i++)
	{
		scanf("%c", &str[i]);
		//혹시 입력된 한문자가 엔터(ASCII : 10)인지??
		if (str[i] == 10 || str[i] == 32) break;
	}

	printf(" 글자수 : %d \n", i);
}