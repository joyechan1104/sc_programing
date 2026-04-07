#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#if 0 
int main(int argc, char *argv[]) {
	
	// 문자 'A'
	// 문자열 "Apple"

	char str[]="Good morning!"; // 배열의 길이를 자동으로 정해준다.  13+nall=14의 길이를 가진다 
	printf("배열 str의 크기: %d \n", sizeof(str)); // 자료형의 크기를 알려주는 연산자 1byte*14=14
	printf("널 문자 문자형 출력: %c \n", str[13]); // 널문자는 안나와 /0
	printf("널 문자 정수형 출력: %d \n", str[13]); // 널문자는 아스키코드 0번 
	
	str[12]='?'; // 배열 str에 저장된 문자열 데이터는 변경가능! 12번을 !에서 ?로 변경 
	printf("문자열 출력: %s \n", str);

	return 0;
}
//#endif
int main(int argc, char *argv[]) {
	
	char str[50];
	int idx=0;
	
	printf("문자열 입력: ");
	scanf("%s", &str);
	printf("입력받은 문자열: %s \n", str);
	
	printf("문자 단위 출력: ");
	while(str[idx] != '\0') // \ | / 
	{
		printf("%c", str[idx]);
		idx++;
	} 
	printf("\n");

	return 0;
}
//#endif
int main(int argc, char *argv[]) {
	
	char str[50]="I like C programing";
	printf("string: %s \n", str);
	
	str[8]='\0';
	printf("string: %s \n", str);

	str[6]='\0';
	printf("string: %s \n", str);
	
	str[1]='\0';
	printf("string: %s \n", str);

	return 0;
}
//#endif
int main(int argc, char *argv[]) {
	
	int num1=100, num2=100; 
	int * pnum;
	
	pnum=&num1;
	(*pnum)+=30;
	
	pnum=&num2;
	(*pnum)-=30;
	
	printf("num1:%d, num2:%d, \n", num1, num2);
	return 0;
}
//#endif
int main(int argc, char *argv[]) {
	
	int arr[3]={0, 1, 2}; // 기차칸 0이 16호차면 1은 20호차(4byte) 2는 24호차 
	printf("배열의 이름: %p \n", arr);
	printf("첫 번째 요소: %p \n", &arr[0]);
	printf("두 번째 요소: %p \n", &arr[1]); 
	printf("세 번째 요소: %p \n", &arr[2]);
	// arr = &arr[i] // 이문장은 컴파일 에러를 일으킨다 

	return 0;
}
//#endif
int main(int argc, char *argv[]) {
	
	int arr1[3]={1, 2, 3};
	double arr2[3]={1.1, 2.2, 3.3};
	
	printf("%d %g \n", *arr1, *arr2); // 기차 0번칸의 문을 연다, 1번칸의 문을 연다 
	*arr1 += 100; // 0번칸의 문을열고 100을 더한다 
	*arr2 += 120.5; // 1번칸의 문을 열고 120.5를 더한다 
	printf("%d %g \n", arr1[0], arr2[0]); // 기차 0, 1번칸의 문을 연다  

	return 0;
}
//#endif
int main(int argc, char *argv[]) {
	
	int * ptr1=0x0010;
	double * ptr2=0x0010;
	
	printf("%p %p \n", ptr1+1, ptr1+2);
	printf("%p %p \n", ptr2+1, ptr2+2);
	
	printf("%p %p \n", ptr1, ptr2);
	ptr1++;
	ptr2++;
	printf("%p %p \n", ptr1, ptr2);
	
	return 0;
}
//#endif
int main(int argc, char *argv[]) {
	
	int arr[3]={11, 22, 33};
	int * ptr=arr;
	printf("%d %d %d \n", *ptr, *(ptr+1), *(ptr+2));
	
	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); printf("\n");
	
	return 0;
}
//#endif
int main(int argc, char *argv[]) {
	char str1[]="My String"; // 변수 형태의 문자열 
	char * str2="Your String"; // 상수 형태의 문자열 
	printf("%s %s \n", str1, str2);
	
	str2="Our String"; // 가리키는 대상 변경 
	printf("%s %s \n", str1, str2);
	
	str1[0]='X'; // 문자열 변경 성공! 
	str2[0]='X'; // 문자열 변경 실패! 
	printf("%s %s \n", str1, str2);
	 
	return 0;
}
//#endif
int main(int argc, char *argv[]) {
	
	int num1=10, num2=20, num3=30;
	int * arr[3]={&num1, &num2, &num3};
	
	printf("%d \n", * arr[0]); 
	printf("%d \n", * arr[1]);
	printf("%d \n", * arr[2]);
	 
	return 0;
}
#endif
int main(int argc, char *argv[]) {
	
	char * strArr[3]={"Simple", "String", "Array"};
	printf("%s \n", strArr[0]);
	printf("%s \n", strArr[1]);
	printf("%s \n", strArr[2]);
	
	return 0;
}










