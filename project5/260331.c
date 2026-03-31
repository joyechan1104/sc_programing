#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#if 0
int AbsoCompare(int num1, int num2);
int GetAbspValue(int num);

int main(void) {
	int num1, num2;
	printf("두개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);
	printf("%d 와 %d 중 절댓값이 큰 정수: %d \n", num1, num2, AbsoCompare(num1, num2));
	return 0;
}
int AbsoCompare(int num1, int num2) {
	if(GetAbspValue(num1) > GetAbspValue(num2)) {
		return num1;
	}
	else {
		return num2;
	}
}
int GetAbspValue(int num) {
	if(num<0 ) {
		return num * (-1);
	}
	else 
	{
		return num;
	}
}
// #endif
int SimpleFuncOne(void) {
	int num=10; // 이후부터  SimpleFuncOne의 num유효  
	num++;
	printf("SimpleFuncOne num: %d \n", num);
	return 0; //SimpleFuncOne의 num이 유효한 마지막 문장 
}

int SimpleFuncTwo(void) {
	int num1=20; //이후부터 num1만 유효 
	int num2=30; //이후부터 num2만 유효
	num1++, num2--;
	printf("num1 & num2: %d %d \n", num1, num2);
	return 0; // num1, num2 유효한 마지막 문장 
}

int main(void) {
	int num=17; // 이후부터 main의 num 유효 
	SimpleFuncOne();
	SimpleFuncTwo();
	printf("main num: %d \n", num);
	return 0; // main의 num이 유효한 마지막문장 
}
// #endif
int main(void) {
	int num=1;
	if(num==1) 
	{	
		int num=7; // 이 행을 주석처리하고 실행해보자 
		num+=10;
		printf("if문 내 지역변수 num: %d \n", num);
	}
	printf("main함수 내 지역변수 num: %d \n", num);
	return 0;
}
// #endif
void Add(int val);
int num; // 전역변수는 기본 0으로 초기화됨  

int main(void) {
	printf("num: %d \n", num);
	Add(3);
	printf("num: %d \n", num);
	num++; //전역변수 num의 값 1증가  
	printf("num: %d \n", num);
	return 0;
} 

void Add(int val) {
	num += val; // 전역변수 num값 val만큼 증가 
}
// #endif
int Add(int val);
int num=1;

int main(void) {
	int num=5;
	printf("num: %d \n", Add(3));
	printf("num: %d \n", num+9);
	return 0;
} 

int Add(int val) {
	int num=9;
	num += val;
	return num;
}
// #endif
void SimleFunc(void) {
	static int num1=0; // 초기화하지 않으면 0 초기화 
	int num2=0; // 초기화하지 않으면 쓰레기 값 초기화 
	num1++, num2++;
	printf("static: %d, local: %d \n", num1, num2);
}

int main(void) {
	int i;
	for(i=0; i<3; i++)
		SimleFunc();
	return 0;
}
// #endif
void Recursive(int num) {
	if (num<=0) { // 재귀의 탈출조건  
		return; // 재귀의 탈출! 
	}
	printf("Recursive call! %d \n", num);
	Recursive(num-1);
}

int main(void) {
	Recursive(3);
	return 0;
}
// #endif
int Factorial(int n) {
	if(n==0) {
		return 1; // why return 1 ?
	}
	else {
		return n * Factorial(n-1);
	}
} 

int main(void) {
	printf("1! = %d \n", Factorial(1));
	printf("2! = %d \n", Factorial(2));
	printf("3! = %d \n", Factorial(3));
	printf("4! = %d \n", Factorial(4));
	printf("5! = %d \n", Factorial(5));
	return 0;
}
// #endif
// 11강
int main(void) {
	int arr[5];
	int sum=0, i;
	
	arr[0]=10, arr[1]=20, arr[2]=30, arr[3]=40, arr[4]=50;
	
	for(i=0; i<5; i++)
		sum += arr[i];
		
	printf("배열요소에 저장된 값의 합: %d \n", sum);
	return 0; 
}
#endif
int main(void) {
	int arr1[5]={1, 2, 3, 4, 5};
	int arr2[ ]={1, 2, 3, 4, 5, 6, 7};
	int arr3[5]={1, 2};
	int ar1Len, ar2Len, ar3Len, i;
	
	printf("배열 arr1의 크기: %d \n", sizeof(arr1));
	printf("배열 arr2의 크기: %d \n", sizeof(arr2));
	printf("배열 arr3의 크기: %d \n", sizeof(arr3));
	
	ar1Len = sizeof(arr1) / sizeof(int); // 배열 arr1의 길이 계산 
	ar2Len = sizeof(arr2) / sizeof(int); // 배열 arr2의 길이 계산 
	ar3Len = sizeof(arr3) / sizeof(int); // 배열 arr3의 길이 계산 
	
	for(i=0; i<ar1Len; i++)
		printf("%d", arr1[i]);
	printf("\n");
	for(i=0; i<ar2Len; i++)
		printf("%d", arr2[i]);
	printf("\n");
	for(i=0; i<ar3Len; i++)
		printf("%d", arr3[i]);
	printf("\n");
	return 0;
} 
 


















