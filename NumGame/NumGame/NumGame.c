#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	printf("���ڸ��߱� ����!\n\n");

	int u, c;//������ Ű����� �Է��� ��, ��ǻ�Ͱ� ������ �ִ� ������ ��
	
	//��ǻ�Ͱ� ���� ������ ���� ()
	//rand()�� �ٸ��� �����������....... �������� ����⸦ �����Ѵٶ�� �ʱ�ȭ �۾��� �ʿ���

	srand( time(NULL) );

	int n = rand();

	c = rand()%21; //0~20���� ������ ��      //-5~5������ �� : rand()%11-5

	while (1)
		//�Է¹��� ���� ������ ��
	{	
		printf("0~20 ������ ������ �Է��Ͻÿ� : ");
		scanf_s("%d", &u);

		if (u > c)
			printf("%d���� ���� ���Դϴ�.\n\n", u);
		else if (u < c)
			printf("%d���� ū ���Դϴ�. \n\n", u);
		else
		{
			printf("�����մϴ�. �����Դϴ�! \n\n"); 
			printf("���α׷� ����!"); break;
		}
			
	}
}


