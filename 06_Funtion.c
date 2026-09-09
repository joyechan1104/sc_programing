#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // 시간 

int main1() 
{
	
	int num1, num2;
	num1=printf("12345\n");
	num2=printf("i love my home\n"); // 문자열 길이:14 + \n 1 = 15 
	printf("%d %d \n", num1, num2);
	
	int sum(int a, int b) // 정수를 리턴할거야 그 함수의 이름은 sum 
	{
		int c = a + b; // 정수 c라는 공간을 만들어 저장 
		return c;
	}
	int data = sum(10,20); // 호출하면 일단 제어권이 위로 올라감 / 30을 리턴 
	printf("%d", data);
	printf("\n\n");
	
	return 0;
}

// static의 이해 
void SimpleFunc(void)
{
	static int n1=0;
	int n2=0;
	static int n3=0;
	n1++, n2++, n3+=5;
	printf("static n1: %d, normal n2: %d, static n3: %d \n", n1, n2, n3);
}

int main2(void)
{
	int i;
	for(i=0; i<10; i++) // i가 0부터 시작 0~9까지 반복되므로 총 10회 반복된다.  
	{
		SimpleFunc();
	}
	printf("\n\n");
	return 0;
}

// 보스레이드 
void AttackBoss(void)
{
	static int totaldamage=0;
	int damage=0;
	static int kioku=0;
	totaldamage+=30;
	damage+=30;
	printf("보스를 공격중 ..."); // \r의 영향으로 0.5초후 지워짐 
	Sleep(500);
	printf("\r 보스는 %d의 데미지를 입었습니다.(총 %d데미지) \n", damage, totaldamage);
	if(totaldamage>=300)
	{
		printf("보스를 처치했습니다! \n YOU WIN! \n");
	}
	else if(totaldamage>=200 && kioku==0)
	{
		printf("보스가 광폭화 모드에 진입합니다. \n");
		kioku=1;
	}
}

int main3(void)
{
	int i;
	for(i=0; i<10; i++)
	{
		Sleep(500);
		AttackBoss();
	}
	printf("\n\n");
	return 0;
}

// 재귀함수 
void Recursive(int num)
{
	if(num<=0)
	{
		return;
	}
	printf("Recursive call %d \n", num);
	Recursive(num-1);
} 

int main4(void)
{
	Recursive(3);
	printf("\n\n");
	return;
}

// 폭탄 돌리기
void Bomb(int person)
{
	if (person<=1 || person==3) // 언제 터질지 설정 
	{
		printf("\r 3 \n");
		Sleep(500);
		printf("\r 2 \n");
		Sleep(500);
		printf("\r 1 \n");
		Sleep(500);
		printf("\r 펑! 폭탄이 터졌습니다! \n");
		return;
	}
	printf("%d번이 폭탄을 들고 있습니다. \n", person);
	Sleep(1000);
	printf("%d번 사람이 %d번 사람한테 폭탄을 넘깁니다. \n", person, person-1);
	Bomb(person-1); 
}
int main5(void)
{
	printf("폭탄돌리기 게임 시작! \n");
	Bomb(8); // 몇번부터 시작할지 설정 
	printf("\n\n");
	return;
}

//팩토리얼 함수
int Factorial(int n)
{
	if(n==0)
	{
		return 1; // 리턴0을 하면 지금까지의 값에 모두 0을 곱해버린다 그래서 *1인 리턴1을 사용해야함 
	}
	else
	{
		return n * Factorial (n-1);
	}
} 
int main6(void)
{
	printf(" 1! = %d \n", Factorial(1));
	printf(" 2! = %d \n", Factorial(2));
	printf(" 3! = %d \n", Factorial(3));
	printf(" 4! = %d \n", Factorial(4));
	printf(" 9! = %d \n", Factorial(9));
	printf("\n\n");
	return 0;
}

// 콤보데미지
int combo(int n)
{
	if(n<=1)
	{
		return 1;
	}
	return n * combo (n-1);
} 
int main7(void)
{
	int max_combo;
	int i;
	printf("필살기! 최대 몇 콤보?(16combo가 최대대미지, 35combo부터0): ");
	scanf("%d", &max_combo);
	printf("\n 연속 공격! \n");
	printf("------------------------------------- \n");
	
	for(i=0; i<max_combo; i++)
	{
		Sleep(500);
		int damage = combo(i);
		printf("%d콤보! %d의 데미지! \n", i+1, damage);
		if(i >= 5 && max_combo == i + 1)
		{
			printf("엄청난 연격! \n");
		}
	}
	printf("------------------------------------- \n");
	printf("\n\n");
	return 0;
}

int main()
{
	main1();
	main2();
	main3();
	main4();
	main5();
	main6();
	main7();
}
