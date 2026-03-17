#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
	//ascii cord
	char ch1='A', ch2=65;
	int ch3='Z', ch4=90;
	printf("%c %d \n", ch1, ch1); // %c ascii
	printf("%c %d \n", ch2, ch2);
	printf("%c %d \n", ch3, ch3);
	printf("%c %d \n", ch4, ch4);
	
	//서식문자 
	int num1=7, num2=13;
	printf("%o %#o \n", num1, num1); // %o octal
	printf("%x %#x \n", num2, num2); // %x hexa
	
	//문자열 출력 
	printf("%s, %s, %s \n", "AAA", "BBB", "CCC"); // %c는 문자 작은따움표'' / %s 는 문자열 큰따움표"" 
	
	//정수기반의 입력형태 정의 
	int num1, num2, num3;
	printf("input 3numbers: ");
	scanf("%d %o %x", &num1, &num2, &num3);
	printf("output decima: \n", num1, num2, num3);
	printf("%d %d %d \n", num1, num2, num3);
	
	//실수기반의 입력형태 정의 
	float num1;
	double num2;
	long double num3; // devc에선 롱더블 안된다 
	printf("실수입력1: "); //e표기법으로 입력 1.1e-3 
	scanf("%f", &num1);
	printf("입력된실수 %f \n", num1);
	printf("실수입력2: ");
	scanf("%lf", &num2);
	printf("입력된실수 %f \n", num2);
	printf("실수입력3: ");
	scanf("%Lf", &num3);
	printf("입력된실수 %Lf \n", num3);
	
	//반복문
	int num=0;
	while(num<5) // num이 5이상이 되면 거짓이되므로 종료 
	{
		printf("Hello world! %d \n", num);
		num++;
	} 
	
	//구구단을 외자 
	int dan=0, num=1;
	printf("몇단? ");
	scanf("%d", &dan); // 몇단인지 입력 
	while(num<10)
	{
		printf("%dx%d=%d \n", dan, num, dan*num); // ?단x(숫자1씩증가)= 단x넘 
		num++;
	}
	
	//2중 while 구구단을외자2 
	int cur=2;
	int is=0;
	while(cur<10) // 곱하는수(단) 
	{
		is=1; // is를 10에서 1로 초기화시키기 
		while(is<10) //곱해지는수 
		{
			printf("%d x %d = %d \n", cur, is, cur*is);
			is++; // 곱해지는수 추가 
		}
		cur++; // 곱하는수 추가 
	} 
	
	// do while문
	int total=0, num=0;
	do
	{
		printf("정수입력(0 to quit): ");
		scanf("%d", &num);
		total += num;
	} while(num!=0);
	printf("합계: %d \n", total);
	
	//for문 
	int total=0;
	int i, num;
	printf("0부터 num까지의 덧셈, num은? ");
	scanf("%d", &num);
	
	for(i=0; i<num+1; i++) // 1. i=0 초기화 2. i는 num+1보다 작다 4. i는 1씩 증가 
	{
		total+=i; // 3. 누적시켜서 더한다 
	}
	printf("0부터 %d까지 덧셈결과: %d \n", num, total);
	
	//for문 실수
	double total=0.0;
	double input=0.0;
	int num=0;
	
	for( ; input>=0.0 ; )
	{
		total+=input;
		printf("실수 입력(minus to quit) : ");
		scanf("%lf", &input);
		num++
	}
	printf("평균: %f \n", total/(num-1));
	*/
	//for중첩
	int cur, is;
	
	for(cur=2; cur<10; cur++)
	{
		for(is=1; is<10; is++)
		{
			printf("%d x %d = %d \n", cur, is, cur*is);
		}
		printf("\n");
	} 
	return 0;
}
