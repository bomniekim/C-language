/* ���� 5-2
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


/*���� 5-5
#include <stdio.h>

void main()
{
	int num1 = 1, num2 = 2, num3 = 3, num4 = 4, num5 = 5;

	num1 = num1 + num2;
	printf("���� ���� ���� ��� : num1�� ���� ��: %d \n", num1);

	num2 = num2 - 2;
	printf("���� ���� ���� ��� : num2�� ���� ��: %d \n", num2);

	num3 = num3 * 2;
	printf("���� ���� ���� ��� : num3�� ���� ��: %d \n", num3);

	num4 = num4 / 2;
	printf("���� ������ ���� ��� : num4�� ���� ��: %d \n", num4);

	num5 = num5 % 2;
	printf("���� ������ ���� ��� : num5�� ���� ��: %d \n", num5);

	printf("%d, %d, %d, %d, %d \n", num1, num2, num3, num4, num5);
}*/


/*���� 5-6
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


/* ���� 5-7
#include <stdio.h>

void main()
{
	int num1 = 10, num2 = 20;
	int a, b;

	a = ++num1; //������ �����
	printf("%d, %d \n", a, num1); // 11,11

	b = num2++; //����� �Ŀ���
	printf("%d, %d \n", b, num2); //20,21

}*/


/* ���� 5-8
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


/* ���� 5-9
#include <stdio.h>

void main()
{
	int num1 = 10, num2 = 10;

	printf("%d \n", ++num1);
	printf("%d \n", num1);

	printf("%d \n", num2++);
	printf("%d \n", num2);

}*/



/* ���� 5-10
#include <stdio.h>

void main()
{
	int num1 = 2, num2 = 4;
	int result1, result2, result3, result4;

	result1 = (num1 > num2); //����
	result2 = (num1 <= num2);//��
	result3 = (num1 == num2);//����
	result4 = (num1 != num2);//��

	printf("result1�� ����� �� %d \n", result1);
	printf("result2�� ����� �� %d \n", result2);
	printf("result3�� ����� �� %d \n", result3);
	printf("result4�� ����� �� %d \n", result4);

}*/


/* ���� 5-11
#include <stdio.h>

void main()
{
	int num1 = 2, num2 = 3, num3 = 5;
	int result1, result2, result3;

	result1 = (num1 > 0) && (num2 < 10); //1 && 1 ->1
	result2 = (num2 <= 2) || (num3 > 5); //0 || 0 ->0
	result3 = !num3; // 5�� 0�� �ƴϰ� 1 -> !1 ->0

	printf("result1�� ����� �� %d \n", result1);
	printf("result2�� ����� �� %d \n", result2);
	printf("result3�� ����� �� %d \n", result3);

}*/


/* ���� 5-12
#include <stdio.h>

void main()
{
	int num1 = 2, num2 = 3;
	int result1;

	result1 = (num1 > num2) ? num1 : num2;
	printf("result1�� ����� �� %d \n", result1); //3
}*/



/* p.129 1��
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

	printf("(x+y)*(x+z)/(y%%z) = %d", (x + y) * (x + z) / (y % z)); //%%�� ��������
}*/


/* 2��
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


/* 3��
#include <stdio.h>

void main()
{
	int x = 3, y = 5, z = 3, k = 2;
	int a;
	
	a = x < y || x < z && z < k; // 1 || 0 && 0 -> 1 || 0 -> 1      
	printf("��� �� 1 a : %d \n", a);

	a = (x < y || x < z) && z < k; // (1 || 0) && 0 -> 0 && 0 -> 0
	printf("��� �� 2 a : %d \n", a);


	// () && || ������ ó��
}*/


/* 4��
#include <stdio.h>

void main()
{
	int a, b, c;

	printf("ù ��° ������ �Է��Ͻÿ�. : ");
	scanf_s("%d", &a);
	printf("�� ��° ������ �Է��Ͻÿ�. : ");
	scanf_s("%d", &b);
	printf("�� ��° ������ �Է��Ͻÿ�. : ");
	scanf_s("%d", &c);

	printf("���� �� ���� ū ������ ���� %d�Դϴ�. \n\n", a > b && b > c ? a : b > c ? b : c);
}*/

/* 5��
#include <stdio.h>

void main()
{
	const float dollar = 1.15570;
	int won;


	printf("���޷� ȯ�� ��� ���α׷��Դϴ�. KRW�� �Է��ϼ���. :");
	scanf_s("%d", &won);

	printf("%.0f�� �Դϴ�.\n\n", (float)won * dollar);

}*/


/* 8��
#include <stdio.h>

void main()
{
	int h, m, s;

	printf("������ �ð�(��, ��, ��)�� ���� �Է��Ͻÿ�. \n");

	printf("�� :");
	scanf_s("%d", &h);
	printf("�� :");
	scanf_s("%d", &m);
	printf("�� :");
	scanf_s("%d", &s);

	printf("\n ���� 00�� 00�� 00�ʸ� �������� %d�ʰ� �귶���ϴ�.\n", 60 * 60 * h + 60 * m + s);

}*/


/* 9��
#include <stdio.h>

void main()
{
	int p;

	printf("�Ŀ�带 �Է��Ͻÿ�: ");
	scanf_s("%d", &p);

	printf("%.0f�Ŀ��� %.0fkg�Դϴ�.", (float)p, (float)p * 0.45);  //����ȯ �����ڸ� ����ؼ� ���
										//-> RAM�� '�� �ٸ� ����'�� �ӽ������� �޸𸮸� �Ҵ�޾� float�� 10.0���� �����ϰ� cpu�� ����
										// �����ٷ� �������� �ӽ� �޸𸮴� ��� �����. a,b�� ������ int�� �ڷ�!!!!!!
}*/



/* 10��
#include <stdio.h>

void main()
{
	int feet;

	printf("��Ʈ�� �Է��ϼ���: ");
	scanf_s("%d", &feet);

	printf("%.0f��Ʈ�� ���󿡼� %.0f���� ������ �ִ� ���Դϴ�. \n", (float)feet, (float)feet * 0.3048);

}*/



/* 7��
#include <stdio.h>

void main()
{
	int num;
	int a,b,c,d;
	
	printf("0000�� 1111������ 2���� ���ڸ� �Է��Ͻÿ�. :");
	scanf_s("%d", &num);
	
	a = num / 1000;
	b = (num % 1000) / 100;
	c = (num % 1000) / 10;
	d = (num % 1000) % 10;

	printf("��ȯ�� 10������ ���� %d�Դϴ�.\n\n", a * 8 + b * 4 + c * 2 + d * 1);
}*/



#include <stdio.h>

void main()
{
	int a, b;

	a = 20 * 365 * 2000 * 40;
	b = 100 * 365 * 24 * 60 - a;

	printf("������ %d�� �پ�����. \n", a);
	printf("�� ����� %d����� �� �� �ִ�.", b);
}

b = 100 * 365 * 24 * 60 - 20 * 365 * 2000 * 40;
