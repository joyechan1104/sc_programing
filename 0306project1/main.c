#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("hellow Everybody"); // \n은 줄바꿈 기호다 
	printf("%d\n", 1234); // %d는 decival(10진수)의 약자 내가 지정한 형태로 출력시키는것이다. 
	printf("%d %d\n", 10, 20);
	printf("my age: %d \n", 20);
	printf("%d is my point \n", 100);
	printf("good \nmorning \neverybody \n");
	
	int num1, num2; // (변수선언 메모리에 공간할당) 
	int num3=30, num4=40; // 변수선언 및 초기화  
	printf("num1: %d, num2: %d \n", num1, num2); // 쓰레기값 발생 (값이 대입되기전까지는 의미없는 숫자발생) 
	num1=10; // 초기화 
	num2=20; // 초기화 
	printf("num1: %d, num2: %d \n", num1, num2); // 초기화후에 %d를 입력시키면 제대로된 숫자가 대입된다. 
	printf("num3: %d, num4: %d \n", num3, num4);
	
	int num5=3;
	int num6=4;
	int result=num5+num6;
	printf("덧셈결과: %d \n", result);
	printf("%d+%d=%d \n", num5, num6, result);
	printf("%d와(과) %d의 합은 %d입니다. \n\n", num5, num6, result);
	
	int num7=9, num8=2;
	printf("%d+%d=%d \n", num7, num8, num7+num8);
	printf("%d-%d=%d \n", num7, num8, num7-num8);
	printf("%d*%d=%d \n", num7, num8, num7*num8);
	printf("%d나누기%d의 몫=%d \n", num7, num8, num7/num8); // /는 나눈뒤에 몫을 구하고 
	printf("%d나누기%d의 나머지=%d \n", num7, num8, num7%num8); // %는 나눈뒤에 나머지를 구한다 
	
	int num9=2, num10=4, num11=6;
	num9 += 3; 
	num10 *= 4; 
	num11 %= 5;
	printf("result: %d, %d, %d \n", num9, num10, num11); 
	
	int num12=12;
	int num13=12;
	printf("num12: %d \n", num12); 
	printf("num12++: %d \n", num12++); // 다음줄부터 증가 
	printf("num12: %d \n\n", num12);
	printf("num13: %d \n", num13);
	printf("++num13: %d \n", ++num13); // 이번줄부터 증가 
	printf("num13: %d \n", num13);
	return 0;
}
