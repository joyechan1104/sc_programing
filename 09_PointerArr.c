#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// 1차원 배열 이름의 포인터형
	int arr1[3]={1, 2, 3};
	double arr2[3]={1.1, 2.2, 3.3};
	printf("%d %g \n", *arr1, *arr2); 
	
	*arr1 += 100;
	*arr2 += 120.5;
	printf("%d %g \n", arr1[0], arr2[0]); 
	
	//포인터를 대상으로 하는 증가 및 감소연산
	int *ptr1 = 0x0010;
	double *ptr2 = 0x0010; 
	printf("%p %p %p \n", ptr1, ptr1+1, ptr1+2); // ptr1의 주소를 1 증가시키면? 
	printf("%p %p %p \n", ptr2, ptr2+1, ptr2+2);
	 
	ptr1++; ptr2++;
	printf("%p %p \n", ptr1, ptr2);
	
	//포인터를 대상으로 하는 증가 및 감소연산2
	int arr[30]={11, 22, 33, 9999};
	int *ptr = arr; // = &arr[0] 너의 주소 내가 가져간다! 
	int i=0;
	
	for(i=0; i<10; i++)
	{
		printf("%d ", *ptr); // 발(ptr)이 이동하니 눈(*ptr)이 바라보는 장소가 바뀐다! 
		ptr++; // 1만 증가해도 이미 주소라고 정의 시켜둬서 컴퓨터가 4바이트라고 인식한다! 
	}
	printf("\n");
	
	//두가지 형태의 문자열 표현
	char str1[]="My String"; // 변수 형태의 문자열 
	char *str2="Your String"; // 상수 형태의 문자열 
	printf("%s %s \n", str1, str2);
	
	str2="Our String";
	printf("%s %s \n", str1, str2);
	
	str1[0]='X'; // 변수 형태의 문자열은 문자 수정 가능  
	// str2[0]='X'; //읽기 전용 구역의 문자 수정 불가 
	printf("%s %s \n", str1, str2);
	
	//포인터 배열의 이해
	int num1=10, num2=20, num3=30;
	int *arrr[3]={&num1, &num2, &num3}; // 포인터에는 주소값을 담아야한다. 
	printf("%d %d %d \n", arrr[0], &arrr[0], *arrr[0]);
	printf("%d %d %d \n", arrr[1], &arrr[1], *arrr[1]);
	printf("%d %d %d \n", arrr[2], &arrr[2], *arrr[2]);
	
	//문자열을 저장하는 포인터 배열
	char *strArr[3]={"Simple","String","Array"};
	printf("%s \n", strArr[0]); 
	printf("%s \n", strArr[1]);
	printf("%s \n\n", strArr[2]);
	
	//Lv4. 우주 정거장 통신 보안 모듈 수리
	char data[] = "Sptff!nfshf!dpnqmfuf";
	printf("통신데이터 char data[] = Sptff!nfshf!dpnqmfuf; 가 수신되었습니다. \n");
	char *ptra = &data[0]; // or =data
	
	while(*ptra != '\0') // 널문자가 아닐때 반복 
	{
		*ptra = *ptra - 1;
		ptra++;
	}	
	printf("수리된 값을 출력합니다: %s \n", data);
	
	char *security_level = "LOW"; // 보안레벨을 높음으로 격상 시키시오!
	security_level = "HIGH"; // 상수이므로 한 글자씩 변경 불가 
	printf("%s \n", security_level );
	
	int code1 = 10, code2 = 20, code3 = 30;
	int *master_codes[3]={&code1, &code2, &code3};
	int o=0;
	
	for(o=0; o<3; o++)
	{
		*master_codes[o] *= 2;
	}
	printf("%d %d %d", *master_codes[0], *master_codes[1], *master_codes[2]);
	
	return 0;
}
