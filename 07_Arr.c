#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// 배열이란?
	int floor101, floor102, floor103, floor104; // 1층 101호부터 104호까지  
	int floor201, floor202, floor203, floor204; // 1층 201호부터 204호까지
	int floor301, floor302, floor303, floor304; // 1층 301호부터 304호까지
	// 이렇게 하면? 매우 번거롭다. >> 다수의 변수 선언을 용이하게 하기위함 
	int arra[7]; // 길이가 7(0~6)인 int형 1차원 배열 / 대입연산자는 불필요 
	arra[0] = 10;  arra[1] = 12; arra[2] = 25; // 공간에 숫자를 넣을때 대입 연산자가 필요 
	printf("대입된수: %d, %d, %d\n 주소: %d, %d, %d \n", arra[0], arra[1], arra[2], &arra[0], &arra[1], &arra[2]);
	
	int arr[5];
	int sum = 0, ia = 0;
	
	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
	
	for(ia=0; ia<5; ia++)
	{
		sum += arr[ia];
	}
	printf("배열의 저장된 값의 합계 = %d \n", sum);
	
	// 1차원 배열의 선언과 초기화 리스트 
	int arr1[5] = {1, 2, 3, 4, 5}; // 5칸 
	int arr2[ ] = {1, 2, 3, 4, 5, 6, 7}; //7칸 
	int arr3[5] = {1, 2}; // [1, 2, 0, 0, 0] 으로 채워진다. 
	int ar1Len,  ar2Len, ar3Len, i;
	
	printf("arr1의 크기: %d \n", sizeof(arr1));
	printf("arr2의 크기: %d \n", sizeof(arr2));
	printf("arr3의 크기: %d \n", sizeof(arr3));
	
	ar1Len = sizeof(arr1) / sizeof(int); // 배열 어레이1의 길이 계산 4바이트인 인트로 나눈다. 
	ar2Len = sizeof(arr2) / sizeof(int);
	ar3Len = sizeof(arr3) / sizeof(int);
	
	for(i=0; i<ar1Len; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	
	for(i=0; i<ar2Len; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	
	for(i=0; i<ar3Len; i++)
	{
		printf("%d ", arr3[i]);
	}
	printf("\n");
	printf("\n");
	
	// 연습: 파워레인저 공격력 측정
	int ranger_power[5]={100, 80, 90, 70, 60};
	int o=0;
	float total_damage=0;
	float average_damage=0;
	
	for(o=0; o<5; o++)
	{
		total_damage += ranger_power[o];
	}
	average_damage = total_damage / o;
	printf("total_damage = %f \n", total_damage);
	printf("average_damage = %f \n\n", average_damage);
	
	// char형 배열의 문자열 저장과 널 문자
	char str[14] = "good morning!"; // 배열: good morning!\0 
	printf("배열 str의 크기 : %d \n", sizeof(str));
	printf("널 문자 문자형 출력 : %c \n", str[13]);
	printf("널 문자 숫자형 출력 : %d \n", str[13]);
	str[12]='?'; // 문자열 데이터 변경가능!  
	printf("12번째 문자는?: %c \n", str[12]);
	printf("좋은아침?: %s \n\n", str);	
	
	// 널문자 입력받기? 
	/*
	char string[50];
	int idx=0;
	
	printf("문자열 입력: "); // 띄어쓰기 하면 입력이 안되네 
	scanf("%s", string);
	printf("입력받은 문자열: %s \n", string);
	for(idx=0; string[idx] != '\0'; idx++)
	{

	}
	printf("널문자는? >> %c <<\n\n", string[idx]);
	*/
	
	// 널 문자는 왜 필요해? 문자열의 끝을 판단하려고! 
	char null[50]="I like semiconductor programing";
	printf("%s \n", null);
	null[20]='\0';
	printf("%s \n", null);
	null[6]='\0';
	printf("%s \n", null);
	null[1]='\0';
	printf("%s \n", null);
	
	// Lv1. 역전의 파워레인저
	int power[5];
	int p=0;
	
	for(p=0; p<5; p++)
	{
		if(p==0) printf("레드의 공격력: ");
		if(p==1) printf("블루의 공격력: ");
		if(p==2) printf("옐로의 공격력: ");
		if(p==3) printf("그린의 공격력: ");
		if(p==4) printf("핑크의 공격력: ");
		scanf(" %d", &power[p]);
	}
	printf("핑크, 그린, 옐로, 블루, 레드의 공격력: ");
	for(p=4; p>=0; p--)
	{
		printf("%d ", power[p]);
	}
	printf("\n");
	
	// Lv2. 명예의 전당(최고 공격력 레인저 찾기) power 배열 그대로 활용 
	int max_power=0;
	int mvp_idx=0;
	
	for(p=0; p<5; p++)
	{
		if(power[p] > max_power)
		{
		max_power = power[p];
		mvp_idx = p;
		}
	}
	if(mvp_idx == 0) printf("최고 공격력인 레드: %d \n", max_power);
	else if(mvp_idx == 1) printf("최고 공격력인 블루: %d \n", max_power);
	else if(mvp_idx == 2) printf("최고 공격력인 옐로: %d \n", max_power);
	else if(mvp_idx == 3) printf("최고 공격력인 그린: %d \n", max_power);
	else if(mvp_idx == 4) printf("최고 공격력인 핑크: %d \n", max_power);
	 
	// Lv3. 암호 해독기(문자의 대소문자 변환) 
	char msg[100];
	int w=0;
	
	printf("영단어를 입력하세요(공백 금지): ");
	scanf("%s", msg);
	
	for(w=0; msg[w] != '\0'; w++)
	{
		if(msg[w] >= 97 && msg[w] <= 122) // 아스키 코드 소문자는 97~122 
		{
			msg[w] -= 32;
		}
		else if(msg[w] >= 65 && msg[w] <= 90) // 아스키 코드 대문자는 65~90 
		{
			msg[w] += 32;
		}
	}
	printf("해독된 문자: %s \n", msg);

	return 0;
}
