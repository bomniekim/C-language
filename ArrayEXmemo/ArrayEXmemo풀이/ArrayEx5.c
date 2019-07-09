#include <stdio.h>

void main()
{
		
	//최대 10개까지 정수저장이 가능한 길이의 int형 배열 생성
	int arr[10];

	printf("학생의 수를 입력하세요 : ");
	int num;
	scanf("%d", &num);
		
	printf("\n");//한줄 띄기
		
	int sum=0;		
	for(int i=0; i<num; i++){
		printf("학생 %d의 성적을 입력하세요 : ", i+1);
		scanf("%d", &arr[i]);
			
		//입력된 점수가 0보다 작거나 100보다 크면 잘못입력으로 판단
		if(arr[i]<0 || arr[i]>100){
			printf("잘못된 성적입니다. 다시 입력하시오.\n");
			i--; //반복문이 돌때마다 i값이 증가하므로 미리 i값을 1빼서 현재 번째를 다시 하도록 함.
			continue; //잘못 입력된 값이므로 아래의 sum연산을 하지 않도록 함.
		}
			
		sum+= arr[i]; //입력된 점수값들 누적
	}
		
	//평균값에 소숫점이 나오도록 형변환
	printf("성적 평균은 %lf 입니다.\n", (double)sum/ num );
}