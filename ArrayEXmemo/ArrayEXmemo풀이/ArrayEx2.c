#include <Stdio.h>

void main()
{
	char str[30];
	int i;

	printf("���ܾ� �Է� : ");
	for (i = 0; i < 30; i++)
	{
		scanf("%c", &str[i]);
		//Ȥ�� �Էµ� �ѹ��ڰ� ����(ASCII : 10)����??
		if (str[i] == 10 || str[i] == 32) break;
	}

	printf(" ���ڼ� : %d \n", i);
}