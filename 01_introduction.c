#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int test=70, sstd=15;
	printf("수업명: 반도체 프로그래밍실습\n 담당교수: 장익수\n 평가방법: 기말%d 출석%d 태도%d\n", test, sstd, sstd);
	/*
	\n은 이스케이프 시퀀스로 개행을 의미한다
	%d는 decimal로 10진수로 출력할때 사용한다 
	*/
	int num1, num2, num3=30, num4=40; // 넘1 주세요 분양받은 느낌! 
	printf("num1: %d, num2: %d, num3: %d, num4: %d\n",num1,num2,num3,num4);
	num1=10, num2=20, num3=33,num4=44; // 이미 받은거라서  int로 변수선언 할 필요가 없네 
	printf("num1: %d, num2: %d, num3: %d, num4: %d\n",num1,num2,num3,num4);
	
	int num5=19, num6=2;
	printf("+계산: %d + %d = %d \n",num5,num6,num5+num6); 
	printf("-계산: %d - %d = %d \n",num5,num6,num5-num6); 
	printf("x계산: %d x %d = %d \n",num5,num6,num5*num6); 
	printf("/나누기계산: %d 나누기 %d 몫= %d \n",num5,num6,num5/num6); 
	printf("%나머지계산: %d 나누기 %d 나머지= %d \n",num5,num6,num5%num6); 
	
	int num7=(++num1)+2, num8=(num2--)-2; //예상 13, 18 
	printf("%d, %d \n",num7++,num8); 
	printf("%d, %d \n\n",num7,--num8); 
	
	// result는 관습적으로  계산이나 처리의 최종 결과물을 담는 그릇으로 쓰인다
	int result1=num1<num2; 
	int result2=num1>num2;
	int result3=num1==num2;
	int result4=num1!=num2;
	int result5=num1<=num2;
	int result6=num1>=num2;
	printf("%d < %d %d \n",num1,num2,result1);
	printf("%d > %d %d \n",num1,num2,result2);
	printf("%d == %d %d \n",num1,num2,result3);
	printf("%d != %d %d \n",num1,num2,result4);
	printf("%d <= %d %d \n",num1,num2,result5);
	printf("%d >= %d %d \n",num1,num2,result6);
	
	int result7, result8, result9;
	result7=(num3==33 && num4==44); //AND
	result8=(num3==30 || num4==44); //OR
	result9=(! num3==33); //NOT
	printf("AND연산: %d \n", result7);
	printf("OR연산: %d \n", result8);
	printf("NOT연산: %d \n", result9);	
	
	int num10, num11;
	printf("number1: "); 
	scanf("%d",&num10);
	printf("number2: ");
	scanf("%d",&num11);
	printf("%d + %d = %d \n",num10, num11, num10+num11) ;
	
	return 0;
}
