#include <stdio.h>
/*
void main()
{
	int a;

	int arr[5];

	arr[0] = 70; //����Ʈ�� ȣ�� ����
	arr[1] = 80;
	arr[2] = 60;
	arr[3] = 50;
	arr[4] = 70;
	

	for (int i = 0; i < 5; i++)
	{
	printf("   %d  \n", arr[i]); //���ȣ �����ڷ� �����ϰ� ��
	}

}



void main()
{

	int arr[5];

	for (int i = 0; i < 10; i++)
	{
		printf("%d�� �л� ���� �Է� : ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d�� �л� ���� �Է� : ", i + 1);
	}

}



void main()
{
	
	int arr[5]; //�迭 ����
	float arr2[5];
	char arr3[3];
	long arr4[12];

}

*/
/*
void main()
{
	int a, b, c, d, e;
	int arr[5];    //�迭�� ������ �����()���θ� ���� �س���, ������ ä�� �� ����

	printf("  %p  \n", &arr[0]);   //�޸𸮿��� a�� ���� �ּҰ� ����� 16������ ���			p�� �������� ����
	printf("  %p  \n", &arr[1]); 
	printf("  %p  \n", &arr[2]); 
	printf("  %p  \n", &arr[3]); 
	printf("  %p  \n", &arr[4]); 
	printf("  %p  \n", &arr[5]); //cpu�� ���忡�� 4�� ���� 5���̱��� �ϰ� �˾Ƽ� 4�� ���� �����Ⱚ�� ������

	printf(" arr : %p  \n", arr);  // arr==&arr[0]
	//�迭�� ���� �� []�ȿ��� �ݵ�� 
	����� �� �� ����.
}




void main()
{
	int a = 10;
	int arr[3] = { 10,20,30 }; //�迭�� �ʱ�ȭ - ��Ұ������� ���� ���� ����, �������� ���� ������ 0���� �ٲپ� �ʱ�ȭ
								//�����Ⱚ���� ���� �ʰ� 0���� �ʱ�ȭ�ȴ� // �߰�ȣ�� ���� �Ѱ� �̻��� ���� �����
								//�ʱ�ȭ�Ҷ� []�� ���� ������ {}���� ���̿� ���� �˾Ƽ� �迭�� �������




	for (int i = 0; i < 3, i++)
	{
		printf ( " %d  \n", arr[a])
	}
}*/


#include <stdio.h>

void main()
{
	int score[5]; //�����Ⱚ������ ����
	int total = 0;

	for (int i = 0; i < 5; i++)
	{
		printf("�����Է�: ");
		scanf_s("%d", &score[i]);

		total += score[i];
	}

	/*
	int total=0;

	for (int i = 0; i < 5; i++)
	{
		total = total + score[i];
	}*/

	double aver = (double)total / 5;
	 
	printf(" ���� : %d \n", total);
	printf(" ��� : %.2lf \n", aver);

}

