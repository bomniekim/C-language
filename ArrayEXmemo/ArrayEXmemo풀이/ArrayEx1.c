#include <stdio.h>

void main()
{

	//���̰� 5�� int�� �迭��ü ����
	int arr[5];
		
	int sum=0; //����
	int max, min; //�ִ밪, �ּҰ�
		
	//�迭�� ù��° ��ҿ� ���� �Է¹ް�
	//�̰��� �ִ밪,�ּҰ� ������ ����
	//ó�� �Էµ� ���̹Ƿ� �񱳴���� ���⿡ �ּҰ��̸鼭 �ִ밪
	printf("input : ");
	scanf("%d" &arr[0]);

	max= min = arr[0];

	//�迭�� 1�� �ε������� ������ ���� �Է¹ް�
	//�ִ밪�� �ּҰ� ������ ���ϸ鼭 �� ��ü
	for(int i=1; i<5 ; i++){
		printf("input : ");
		scanf("%d" &arr[i]);
		sum+= arr[i];
		if(arr[i]>max) max=arr[i]; //���� �Էµ� ���� max������ ����� ������ ũ�� ���簪���� max�� ����
		if(arr[i]<min) min=arr[i]; //���� �Էµ� ���� min������ ����� ������ ������ ���簪���� min�� ����
	}
		
	printf("max : %d\n", max);
	printf("min : %d\n", min);
	printf("sum : %d\n", sum);
}