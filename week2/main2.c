#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// 3장 증가감소 연산자 
	int num1=10;
	int num2=(num1--)+2; // 넘2 = 넘1선연산 후감소(다음행부터니 넘2에는 마이너스가 반영안된다) , +2 
	printf("num1: %d \n", num1); // 여기서 부터 --의 감소가 적용
	printf("num2: %d \n\n", num2); // 넘2는 10+2가 적용된 12의 결과가 나온다 
	
	// 논리 연산자 
	int num3=10, num4=12;
	int result1, result2, result3; // 리절트1~3 변수선언
	result1=(num3==num4); // 비교: 둘이 똑같은가 ?, "!=": 둘이 다른가? 
	result2=(num3<=num4); // 입벌리고 >= 등호 
	result3=(num3>num4);
	printf("result1: %d \n", result1); // 10이랑 12가 같은가? 거짓0
	printf("result2: %d \n", result2); // 10보다 12가 같거나 큰가? 참1 
	printf("result3: %d \n\n", result3); // 10보다 12가 큰가? 거짓0 
	
	//논리연산자 고급
	int num5=10, num6=12;
	int result4, result5, result6;
	result4=(num5==10 && num6==12); // AND연산 둘다 참이여야 1 
	result5=(num5<12 || num6>12); // OR연산 둘중하나만 참이여도 1 / shift + \ (돈표시) = | 
	result6=(!num5); // NOT연산  c언어 기준 0이 아니면 다 참 
	printf("result4: %d \n", result4); 
	printf("result5: %d \n", result5); 
	printf("result6: %d \n\n", result6);
	/*
	//scanf 함수의 호출 
	int result7;
	int num7, num8;
	printf("정수one: "); // printf 출력 
	scanf("%d", &num7); // scanf 입력을 받아라 / 변수를 num에 저장하기 
	printf("정수two: ");
	scanf("%d", &num8); // &일단 무조건 입력해야된다 
	result7=num7+num8;
	printf("%d+%d=%d \n\n", num7, num8, result7);
	
	int result8;
	int num9, num10, num11; 
	printf("3개의 정수 입력: ");
	scanf("%d %d %d", &num9, &num10, &num11); // 숫자입력할때 enter:한줄 띄우기 / spacebar:옆에 / tab:공백 
	result8=num9+num10+num11;
	printf("%d+%d+%d=%d\n\n", num9, num10, num11, result8);
	*/
	//4장8진수랑 16진수를 이용한 데이터표현 
	int num12=0xA7, num13=0x43; // x는 알파벳 x다 / 16진수는 숫자전에 0x를 붙인다 
	int num14=032, num15=024; // 8진수는 숫자전에 0을 붙인다. 
	printf("0xA7의 10진수 정수의 값: %d \n", num12); // 16의1승=16, 16의0승=1/ 0xA7 변환 16*10+1*7=167
	printf("0x43의 10진수 정수의 값: %d \n", num13); // %d가 decimal이라서 10진수로 출력
	printf("032의 10진수 정수의 값: %d \n", num14); // 032 변환 8*3+1*2=26
	printf("024의 10진수 정수의 값: %d \n", num15);
	printf("%d-%d=%d \n", num12, num13, num12-num13);
	printf("%d+%d=%d \n\n", num14, num15, num14+num15);
	
	//비트 연산자
	int num16=15; // 00001111
	int num17=20; // 00010100
	int num18=num16 & num17; // & 비트단위 논리곱 연산 
	printf("AND연산의 결과: %d \n", num18); // 00000100
	int num19=num16 | num17; // & 비트단위 논리합 연산 
	printf("OR연산의 결과: %d \n\n", num19); // 00011111
	
	//shift
	int num21=15; // 00001111
	int result11 = num21<<1; // 00011110 왼쪽으로 한대 친다 (0추가) 
	int result12 = num21<<2; // 00111100 두대 
	int result13 = num21<<3; // 01111000 세대 
	printf("1칸 이동 결과: %d \n", result11);
	printf("2칸 이동 결과: %d \n", result12);
	printf("3칸 이동 결과: %d \n\n", result13);
	
	//5장 자료형
	char ch=9;
	int inum=1052;
	double dnum=3.1415;
	printf("ch: %d \n", sizeof(ch)); //sizeof를 이용해서 바이트의 크기를 확인한다. 
	printf("inum: %d \n", sizeof(inum));
	printf("dnum: %d \n", sizeof(dnum));
	printf("char: %d \n", sizeof(char));
	printf("int: %d \n", sizeof(int));
	printf("long: %d \n", sizeof(long));
	printf("long long: %d \n", sizeof(long long));
	printf("float: %d \n", sizeof(float));
	printf("double: %d \n\n", sizeof(double));
	
	//실수의 표현
	double rad;
	double area;
	printf("원의 반지름 입력: ");
	scanf("%lf", &rad); // 더블형 변수 입력 서식문자 
	area = rad*rad*3.1415;
	printf("원의 넓이: %f \n", area); //더블형 변수 출력 서 
	
	return 0;
}
