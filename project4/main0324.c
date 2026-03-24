#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#if 0
int main(int argc, char *argv[]) {
	
	// 8장 조건문 
	int num;
	printf("정수입력: ");
	scanf("%d", &num);
	
	if(num<0) // num이 0보다 작으면 
	{
		printf("입력값은 0보다 작다. \n");
	}
	if(num>0) // num이 0보다 크면 
	{
		printf("입력값은 0보다 크다. \n");
	}
	if(num==0) // num이 0이면 
	{
		printf("입력값은 0이다. \n");
	}
	
	int opt;
	double num1, num2;
	double result;
	
	printf("1.뎃셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
	printf("선택? ");
	scanf("%d", &opt);
	printf("두개의 실수 입력: ");
	scanf("%lf %lf", &num1, &num2);
	
	// opt값으로 무엇만 실행시킬지 정할 수 있다 
	if(opt==1) {
		result = num1 + num2;
	}
	else if(opt==2) {
		result = num1 - num2;
	}
	else if(opt==3) {
		result = num1 * num2;
	}
	else { //(opt==4) // else는 마지막에 조건이 없어야 작동이 된다 
		result = num1 / num2;
	}
	
	printf("결과: %f \n", result);
	
	int num;
	printf("정수입력: ");
	scanf("%d", &num);
	if (num<0) {
		printf("입력값은 0보다 작다");
	}
	else {
		printf("입력값은 0보다 작지않다");
	}
	
	//삼항연산자 
	int num, abs;
	printf("정수입력: ");
	scanf("%d", &num);
	
	abs = num>0 ? num : num*(-1); // 참이면 넘, 거짓이면 넘*-1 
	printf("절댓값: %d \n", abs);
	
	int sum=0, num=0;
	
	while(1)
	{
		sum+=num;
		if(sum>5000)
			break;
		num++;
	} 
	printf("sum: %d \n", sum);
	printf("num: %d \n", num);
	
	int num;
	printf("start! ");
	
	for(num=1; num<20; num++)
	{
		if(num%2==0 || num%3==0)
			continue;
		printf("%d ", num);
	}
	printf("end! \n");
	
	// switch 케이스문 
	int num;
	printf("1이상 5이하의 정수 입력: ");
	scanf("%d", &num);
	switch(num)
	{
		case 1 :
			printf("1은 ONE \n");
			break;
		case 2 :
			printf("2는 TWO \n");
			break;
		case 3 :
			printf("3은 THREE \n");
			break;
		case 4 :
			printf("4는 FOUR \n");
			break;
		case 5 :
			printf("5는 FIVE \n");
			break;
		default :
			printf(" I don't know! \n");
	} 
	
	char sel;
	printf("M 오전, A 오후 E 저녁 \n");
	printf("입력: ");
	scanf("%c", &sel);
	
	switch(sel)
	{
		case 'M' :
		case 'm' :
			printf("Morning빵");
			break;
		case 'A' :
		case 'a' :
			printf("Afternoon티");
			break;
		case 'E' :
		case 'e' :
			printf("Evevning쉼");
			break;
	}
	return 0;
}
	
// #endif
	// 9장 함수
int Add(int num1, int num2)
	{
		return num1+num2;
	}
	
	int main(void)
	{
		int result;
		result = Add(3, 4);
		printf("덧셈결과1: %d \n", result);
		result = Add(5, 8);
		printf("덧셈결과2: %d \n", result);
		return 0;
	} 
	
//#endif

int Add(int num1, int num2)
{
	return num1+num2;
}

void ShowAddResult(int num)
{
	printf("덧셈결과출력: %d \n", num);
}

int ReadNum(void)
{
	int num;
	scanf("%d", &num);
	return num;
}

void HowToUseThisProg(void)
{
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
	printf("자! 그럼 두 개의 정수를 입력하세요. \n");
}

int main(void)
{
	int result, num1, num2;
	HowToUseThisProg();
	num1=ReadNum();
	num2=ReadNum();
	result = Add(num1,num2);
	ShowAddResult(result);
	return 0;
 } 
#endif

int NumberCompare(int num1, int num2);
 
int main(void)
{
	printf("3과 4중에서 큰 수는 %d 이다. \n", NumberCompare(3,4));
	printf("7과 2중에서 큰 수는 %d 이다. \n", NumberCompare(7,2));
	return 0;
} 

int NumberCompare(int num1, int num2)
{
	if (num1>num2)
		return num1;
	else
		return num2;
}
