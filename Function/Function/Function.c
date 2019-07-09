#include <stdio.h>



//1.리턴타입이 없고 파라미터도 없음

void output();//함수의 프로토타입 <-메인공장에 가기전에 리딩 먼저

void main()
{
	output(); //call : 함수 호출
	output(); //call : 함수 호출
	output(); //call : 함수 호출
	output(); //call : 함수 호출 여러번 가능

}

void output(/*void*/)
{
	printf("Hello World!");

}





#include <stdio.h>

// 2. 
void output(); //함수의 프로토타입

void main()
{
	int a;
	a = 10;

	output(a);//call :함수호출
           //보내려는 값을 ()사이에 적는다. 변수 안의 '값'이 날아가는 것 (a라는 상자가 아닌 a의 값인 10이 보내짐) call by value 
}

//출력기능을 가진 함수
void output(int x/*변수명*/) // a의 값을 저장할 수 있는 변수를 만들어야 한다. int a != int x
{
	printf(" a: %d \n", x); //다른 공장이니깐 원래의 a값을 알아들을 수 없음 
							//-> 원본 a가 아닌 사본x를 출력/ 값은 같지만 다른 상자야! 
} //int x 대신 int a라고 써도 괜찮다. 서로 다른 곳에 있는 이름만 같은 변수 .






void output(); 
void main()
{
	int a = 10;
	int b = 10;

	output(a,b);//call :함수호출
}

//출력기능을 가진 함수
void output(int a, int b) //갯수와 자료형, 순서가 맞아야함
{
	printf(" a: %d \n", a); 
	printf(" b: %d \n", b); //다른 공장이니깐 원래의 a값을 알아들을 수 없음 
							//상자가 날라아가는게 아니라 a의 값이 날아감, 상자를 보내는 방법은 없음

}


int input();

void main()
{
	int a;

	input(); //기계의 입장에선 복귀해서는 n의 값으로 바뀌어 있음
	
	a=input(); //복귀할 때 가지고 온 값(결과)은 a에 넣어라
				//함수를 넣는게 아니라 함수의 값을 넣는 것
	
	int b;
	b = input();
	printf("b: %d\n", b); //scanf를 두번 한 효과

	printf(" a: %d \n", a); //n의 값을 출력함
}

int input()//리턴하려는 자료형을 써줘야함 : 나 int형 가지고 돌아갈게 ! ★★★★★★리턴타입은 한개밖에 못 가져옴★★★★★★
{
	int n, s;           //일단 n에 보관시키고 main 공장으로 다시 보내야함
	printf("input : ");
	scanfs_s("%d", &n); //ex. 사용자가 입력한 값 50

	return n; //아무것도 안쓰면 그냥 복귀. "돌아갈 때 n의 값을 가져가라" //함수를 끝내는 것 (강력)
}				// 사용자가 쓴 '값'을 가지고 돌아감. n이라는 변수가 가는 것은 아님.
				//리턴값도 하나만 가능


//여러번 입력을 받고 불러오고 싶으면 [함수 호출을 여러번] 하면 된다!!







#include <stdio.h>


//프로토타입
void display(); //1.00
void output(int a, int b, int sum);//4.01
int input();//2.10
int cal(int x, int y); //3.11


void main()
{
	//1.안내메세지 출력
	display();

	int a, b;

	//2.입력기능
	a = input();
	b = input();

	int sum;
	//3.덧셈 연산
	sum = cal(a,b); //위에서 받아온 a,b를 cal에 전달


	//4.결과 출력
	output(a, b, sum);
}


//1.안내메세지 출력기능
void display() //리턴타입 void & 파라미터 없음
{
	printf("두 정수를 입력받아 덧셈의 결과를 출력하는 프로그램입니다.\n\n");
}


//2.입력기능
int input()
{
	int n;

	printf("input : ");
	scanf_s("%d", &n);

	return n; //리턴되는 값의 자료형 = 리턴타입 => int
}


//3.덧셈연산기능
int cal(int x, int y) //z의 값이 int이므로 리턴타입이 int
{
	 int z = x + y;
	 
	 return z;

}


//4.결과출력
void output(int a, int b, int sum)
{
	printf("\n %d + %d = %d \n\n", a, b, sum);

}






#include <stdio.h>

void bbb()
{
	printf("bbb\n");
}

void aaa()
{
	printf("aaa\n");
	bbb(); //함수호출 가능 -> 하청업체가 재하청하는 것과 같은 시스템

}

void main()
{
	aaa();
	bbb();

	printf("main종료\n");
}





#include <stdio.h>


int a; //전역변수 선언 가능 //전역변수의 초기값은 0
int c = 20;// 변수 초기화는 가능 (연산이 아니니깐): 만들면서 넣는거 가능

a = 30; //에러 : 대입연산

void main()
{
	int b; //지역변수 선언 - 지역이 달라지면 못 알아들어
}

void aaa()
{
	int k; //지역변수
}
//전역변수는 프로그램이 시작할때부터 종료시 까지 메모리를 사용 (비효과적)
//지역변수는 호출을 받아 {이 열릴때부터 }닫힐때까지만 메모리를 사용 (효과적)




#include <stdio.h>

void aaa();

static int a = 10;//정적 전역변수

void main()
{
	static int a = 50; //정적 지역변수 ---->정적변수는 거의 무조건 == 정적 지역변수
	{
		printf(" %d ", a);
	}

	printf(" %d ", a);
}










void main()
{
	printf("aaa");
	aaa();
}


void aaa()
{
	int k; //지역변수 -- main에서 호출해야 그제서야 생성됨
	static int k; //정적 지역변수  -- main에서 호출하지 않았어도 이미 메모리에 int k를 가지고 있음 (프로그램을 시작할때부터 종료될 때 까지 생성)
					// 마치 전역변수와 같은 특징 / 함수의 실행여부와 무관 
					//다만 지역변수 이미로 프로그램 전체에 영향을 주는 것이 아니라 함수 내에서만 영향 
					// 이 그릇은 나만 쓸 수 있어!!!!!!!!!
}





#include <stdio.h>

void aaa();
void bbb();

int count = 0;
int countb = 0; //예제가 단촐할때 사용하는 방법 -> 복잡한 경우 다수의 count 변수가 필요? 오바.. -----> 그래서 static 변수를 사용하는 것
				//  다같이 먹는 테이블에 내꺼 전용을 떡하니 놔둔 셈

void main()
{
	aaa();
	aaa();
	bbb();
	aaa();
	aaa();
	bbb();
}

void aaa()
{
	int count = 1; //지역변수
	count++;
	printf("  %d번째 aaa호출\n", count);
} // count의 값이 2인 상태로 호출이 끝나면 사라짐 -> 반복-> 계속 2번째 호출로 출력됨 
void bbb()
{
	countb++;
	printf("%d번째 bbb호출\n", countb);
}






//그래서 정적변수를 쓴다. //컴퓨터는 프로그램을 시작할때 전처리기 처리 후 바로 static 변수 처리

#include <stdio.h>

void aaa();
void bbb();


void main()
{
	aaa();
	aaa();
	bbb();
	aaa();
	aaa();
	bbb();
}

void aaa()
{
	static int count = 0;  //지역변수이므로 이름이 같더라도 다른 상자로 취급 //메모리는 이미 프로그램 시작될 때 만들어져있음
	count++;
	printf("  %d번째 aaa호출\n", count);
} 
void bbb()
{
	static int count = 0; //지역변수이므로 이름이 같더라도 다른 상자로 취급 // 호출 받을때 이미 실행이 끝나있어 -- 딱 한번만 실행!
	countb++; // bbb를 호출받았을 때 바로 countb++;로 점프하여 리딩 시작
	printf("%d번째 bbb호출\n", countb);
}




//재귀 호출 Recursive Call

#include <stdio.h>


int bbb()
{
	return 5;
}

int aaa()
{
	return bbb()*4; //함수의 결과 '값'에 5를 곱한 것
}


void main()
{
	printf(" %d  \n", aaa() + 8);   //28
}



#include <stdio.h>

void aaa(int n)
{
	if (n <= 0) return;

	printf("aaa\n");
	aaa(n-1); //본인함수를 또 호출가능함. 재귀호출
				//다음 전달 값을 바꾸어 컨트롤 
}

void main()
{
	aaa(4);
}

