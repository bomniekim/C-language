#include <Stdio.h>

void main()
{
	char str[30];
	int i;
	int max = 0;

	printf("���ܾ� �Է� : ");
	for (i = 0; i < 30; i++)
	{
		scanf("%c", &str[i]);
		//�Է¹��� ���ڰ� �ִ밪(�ƽ�Ű�ڵ尡 ����ū ��)�̳�?
		if (max < str[i]) max = str[i];

		//Ȥ�� �Էµ� �ѹ��ڰ� ����(ASCII : 10)����??
		if (str[i] == 10 || str[i] == 32) break;
	}

	//�ᱹ max���� �Է¹��� ���� ���� ū ���� ��������.
	printf(" ���� ū ���� : %c  \n", max);
}