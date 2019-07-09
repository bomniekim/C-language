
#include <stdio.h>

void main()
{
	char arr[19];
	int num[12] = { 2,3,4,5,6,7,8,9,2,3,4,5 };
	int sum = 0;


	for (int i = 0; i < 19; i++)
	{
		printf("주민등록번호 혹은 카드번호를 입력해주세요.: ");
		scanf_s("%c", &arr[i], 19);
	}

	if (arr[13] == 10 || arr[14]==10)
	{
		
		
		
		
		printf("유효한 주민번호가 맞습니다.");






	}

	sum = sum + ((arr[i] - 48) * num[i]);

		printf("유효한 주민번호가 맞습니다.");

	else printf("올바른 개인정보가 아닙니다.");


}

#include <stdio.h> 
main()
{
	char jumin[13];
	int i, chk, sum, tmp;
	int a1, a2, a3, a4, a5, a6, b1, b2, b3, b4, b5, b6;

	printf("주민등록번호를 입력하세요 : ");
	scanf("%s", jumin);

	for (i = 0; i < 13; i++)
		jumin[i] -= 48;

	a1 = jumin[0] * 2; //
	a2 = jumin[1] * 3;
	a3 = jumin[2] * 4;
	a4 = jumin[3] * 5;
	a5 = jumin[4] * 6;
	a6 = jumin[5] * 7;
	b1 = jumin[6] * 8;
	b2 = jumin[7] * 9;
	b3 = jumin[8] * 2;
	b3 = jumin[9] * 3;
	b4 = jumin[10] * 4;
	b5 = jumin[11] * 5;

	chk = jumin[12];


	sum=sum+((id[i]-48)*num[i]))

	tmp = 11 - (sum % 11);

	if (tmp >= 10)
		tmp = tmp - 10;

	if (tmp == chk)
		printf("Good! \n");
	else
		printf("Wrong! \n");
}

/*
int input()
{
	int id[14];

	for (int i = 0; i < 14; i++)
	{
		scanf_s("%c", &id[i], 1);
	}
	return id[14];
}*/
/*
#include <stdio.h>

int main()
{
	char id[14];
	int last, result, flag;
	int i, j = 2, sum = 0;


	flag = 1;
	while (flag == 1)
	{
		printf("주민등록번호를 입력해주세요 (\'-\'제외): ");
		scanf_s("%s", idNumber, 14);

		for (i = 0; i < 13; i++)
		{
			if (idNumber[i] >= '0' && idNumber[i] <= '9')
				flag = 0;
			else
			{
				flag = 1;
				printf("잘못 입력하셨습니다. 숫자만 입력해주세요. \n\n");
				break;
			}

		}
	}


	for (i = 0; i < 12; i++)
	{
		sum += (idNumber[i] - '0') * j;
		j == 9 ? j = 2 : j++;
	}

	last = idNumber[12] - '0';

	result = 11 - (sum % 11);
	result == 10 ? result -= 10 : result;

	// 주민번호 확인 출력부분
	printf("입력하신 주민번호 ");

	for (i = 0; i < 13; i++)
	{
		printf("%c", idNumber[i]);

		if (i == 5)
			printf("-");
	}

	if (result == last)
		printf("는(은) 유효한 주민등록번호입니다. \n");
	else
		printf("는(은) 유효하지 않은 주민등록번호입니다. \n");

	return 0;
}
*/
