#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// 4강 
	/*
	int num1=10; 특별한 선언이 없다: decimal 
	int num2=0xA; 0x를 붙인다: hexadecimal 
	int num3=012; 0을 붙인다: 8진수
	
	1byte는 256까지 표현가능하지만 MSB는 부호(+,-)를 정해야하므로
	128-1~-128까지의 숫자를 나타낼 수 있다. 01111111 2의7승까지 가능(128)
	
	음의 정수 표현방법: 0은1 1은0으로 바꾼다 그리고 +1을 더한다
	00000101
	11111010 +1
	11111011
	*/
	int hexa=0xF16;
	int decimal=105;
	int octal=075;
	printf("hexa to decimal convert 0xF16: %d \n", hexa); 
	printf("decimal: %d \n", decimal);
	printf("octal to decimal convert 075: %d \n", octal);
	
	//비트 연산자
	int num1=15;// 00001111
	int num2=20;// 00010100
	int num3= num1&num2; // 00000100
	printf("AND bit연산: %d \n", num3);
	int num4= num1|num2; // 00011111
	printf("OR bit연산: %d \n", num4);
	int num5= num1^num2; // 00011011
	printf("XOR bit연산: %d \n", num5);
	
	int result1 = num1<<1; // 
	int result2 = num1<<2;
	int result3 = num1<<3;
	printf("bit 좌로 1번이동: %d \n", result1); // 00011110
	printf("bit 좌로 2번이동: %d \n", result2); // 00111100
	printf("bit 좌로 3번이동: %d \n", result3); // 01111000
	int result4 = num1>>1; 
	int result5 = num1>>2;
	int result6 = num1>>3;
	printf("bit 우로 1번이동: %d \n", result4); // 00000111
	printf("bit 우로 2번이동: %d \n", result5); // 00000011
	printf("bit 우로 3번이동: %d \n", result6); // 00000001
	
	// 5강 
	char ch=9;
	short sh=99;
	int in=999;
	long lo=9999;
	long long lolo=99999;
	float fl=4.5; // 소수점6번째까지 
	double de=5.454545; // 소수점15번째까지 
	long double lode=5.6789012345; // 소수점18번째까지 
	printf("sizeof char: %d byte \n", sizeof(ch));
	printf("sizeof short: %d byte \n", sizeof(sh));
	printf("sizeof int: %d byte \n", sizeof(in));
	printf("sizeof long: %d byte \n", sizeof(lo));
	printf("sizeof long long: %d byte \n", sizeof(lolo));
	printf("sizeof float: %d byte \n", sizeof(fl));
	printf("sizeof double: %d byte \n", sizeof(de));
	printf("sizeof long double: %d byte \n\n", sizeof(lode));
	
	//원의 단면적, 넓이  구하기
	double pi=3.1415;
	double radius;
	printf("input radius: ");
	scanf("%lf", &radius); //small L / double 형 변수 입력문자: %lf 
	double area=pi*radius*radius;
	printf("Cross-sectional area of a circle: %f \n", area); // double형 변수 출력문자: %f 
	
	return 0;
}
