// ����ü: ���� �����ִ� ������ ��� �����ϴ� ��� 

#include <stdio.h>

struct Personal
{
	//�������
	char* name;
	int age;
	char* address; //���ڿ��� �����ּҸ� �����ͷ� ����Ű�� ��� 
};

void main()
{
	// sam, 20, seoul �����ϱ�
	struct Personal user = { "sam", 20, "seoul" }; //�ʱ�ȭ�߱� ������ �������� 0

	user.name = "park"; 
	user.age = 20;
	user.address = "seoul"; //seoul�� �ּҸ� ������ �ִ� ������ ����

	printf(" %s \n", user.name);
	printf(" %d \n", user.age);
	printf(" %s \n", user.address);

}