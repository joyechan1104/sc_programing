#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#if 0 
void SimpleAdder(int n1, int n2)
{
	printf("%d + %d = %d \n", n1, n2, n1+n2);
}

void ShowString(char * str)
{
	printf("%s \n", str);
}

int main(void)
{
	char * str="Function Pointer";
	int num1=10, num2=20;
	
	void (*fptr1)(int, int) = SimpleAdder;
	void (*fptr2)(char *) = ShowString;
	
	//함수 포인터 변수에 의한 호출  
	fptr1(num1, num2);
	fptr2(str);
	return 0;
}

//#endif
void SoSimpleFunc(void)
{
	printf("I'm so simple");
}

int main(void)
{
	int num=20;
	void * ptr;
	
	ptr = &num; // 변수 num의 주소 값 저장
	printf("%p \n", ptr);
	
	ptr =  SoSimpleFunc; // 함수 SoSimpleFunc의 주소값 저장 
	printf("%p \n", ptr);
	return 0;
}

//#endif
int main(int argc, char *argv[])
{
	int i=0;
	printf("전달된 문자열의 수: %d \n", argc);
	for(i=0; i<argc; i++)	
		printf("%d번째 문자열: %s \n", i+1, argv[i]);
	return 0;
} 

//#endif
int main(void)
{
	int ch1, ch2;
	
	ch1=getchar(); // 문자입력 
	ch2=fgetc(stdin); // 엔터 키 입력 
	
	putchar(ch1); // 문자 출력 
	fputc(ch2, stdout); // 엔터 키 출력 
	return 0;
}

//#endif
int main(void)
{
	int ch;
	
	while(1)
	{
		ch = getchar();
		if(ch==EOF) // ctrl + z 는 탈출 
		{
			break;
		}
		putchar(ch);
	}
	return 0;
}

//#endif
int main(void)
{
	char * str = "Simple String";
	
	printf("1. puts test ------ \n");
	puts(str);
	puts("So Simple String");
	
	printf("2. fputs test ------ \n");
	fputs(str, stdout); printf("\n");
	fputs("So Simple String", stdout); printf("\n");
	
	printf("3. end of main ------ \n");
	return 0;
}

//#endif
int main(void)
{
	char str[7];
	int i;
	
	for(i=0; i<3; i++)
	{
		fgets(str, sizeof(str), stdin);
		printf("Read %d: %s \n", i+1, str);
	}
	return 0;
}

#endif
void ClearLineFromReadBuffer(void) // 입력버퍼를 지우는 함수  
{
	while(getchar()!='\n');
}

int main(void)
{
	char perID[7];
	char name[10];
	
	fputs("주민번호 앞 6자리 입력: ", stdout);
	fgets(perID, sizeof(perID), stdin);
	ClearLineFromReadBuffer(); // 입력버퍼 지우기  
	
	fputs("이름 입력: ", stdout);
	fgets(name, sizeof(name), stdin);
	
	printf("주민번호: %s \n", perID);
	printf("이름: %s \n", name);
	return 0;
}































