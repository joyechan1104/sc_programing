#include <stdio.h>
#include <stdlib.h>

#if 0 
int main() 
{
	// 파일생성
	FILE * fp = fopen("text.txt","wt");
	fputs("123456789",fp);
	fclose(fp);
	
	//파일개방
	fp = fopen("text.txt","rt");
	
	//SEEK_END test
	fseek(fp, -2, SEEK_END);
	putchar(fgetc(fp));
	
	// SEEK_SET test
	fseek(fp, 2, SEEK_SET);
	putchar(fgetc(fp));
	
	// SEEK_CUR test
	fseek(fp, 2, SEEK_CUR);
	putchar(fgetc(fp));
	
	fclose(fp);

	return 0;
}

// #endif
int main() 
{
	long fpos;
	int i;
	
	// 파일생성
	FILE * fp = fopen("text.txt","wt");
	fputs("1234-", fp);
	fclose(fp);
	
	// 파일개방
	fp = fopen("text.txt","rt");
	for(i=0; i<4; i++)
	{
		putchar(fgetc(fp));
		fpos = ftell(fp);
		fseek(fp, -1, SEEK_END);
		putchar(fgetc(fp));
		fseek(fp, fpos, SEEK_SET);
	}
	fclose(fp);
	return 0;
}

// #endif
char * ReadUserName(void)
{
	char name[30];
	printf("What your name? ");
	gets(name);
	return name;
}

int main(void)
{
	char * name1;
	char * name2;
	name1 = ReadUserName();
	printf("name1: %s \n", name1);
	name2 = ReadUserName();
	printf("name2: %s \n", name2);
	return 0;
}

// #endif
int main(void)
{
	int * ptr1 = (int *)malloc(sizeof(int));
	int * ptr2 = (int *)malloc(sizeof(int)*7);
	int i;
	
	*ptr1 = 20;
	for(i=0; i<7; i++)
	{
		ptr2[i] = i+1;
	}
	printf("%d \n", *ptr1);
	for(i=0; i<7; i++)
	{
		printf("%d ", ptr2[i]);
	}
	free(ptr1);
	free(ptr2);
	return 0;
}

// #endif
#define NAME "홍길동"
#define AGE 24
#define PRINT_ADDR puts("주소: 경기도 용인시\n");
int main(void)
{
	printf("이름: %s \n", NAME);
	printf("나이: %d \n", AGE);
	PRINT_ADDR;
	return 0;
} 

// #endif
#define SQUARE(X) X*X
int main(void)
{
	int num = 20;
	//정상적 결과 출력
	printf("Square of num: %d \n", SQUARE(num));
	printf("Square of -5: %d \n", SQUARE(-5));
	printf("Square of 2.5: %g \n", SQUARE(2.5));
	//비정상적 결과 출력
	printf("Square of 3+2: %d \n", SQUARE(3+2));
	return 0; 
} 

// #endif
#define PI 3.14 
#define PROUDCT(X, Y) ((X)*(Y))
#define CIRCLE_AREA(R) (PROUDCT((R), (R))*PI)
int main(voud)
{
	double rad = 2.1;
	printf("반지름 %g인 원의 넓이: %g \n", rad, CIRCLE_AREA(rad));
	return 0;
} 

// #endif
#define ADD 1
#define MIN 0
int main(void)
{
	int num1, num2;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);
	
#if ADD // ADD가 '참'이라면 
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
#endif
#if MIN // MIN이 '참'이라면 
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
#endif
	return 0; 
}

#endif
#define ADD 1
#define MIN 0
int main(void)
{
	int num1, num2;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);
#ifdef ADD // 매크로 ADD가 정의되어 있으면 
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
#endif
#ifdef MIN // 매크로 MIN이 정의되어 있으면 
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
#endif
	return 0; 
} 




















