#include <stdio.h>
#include <stdlib.h>

#if 0
typedef struct point
{
	int xpos;
	int ypos;
} Point;

int main(void) 
{
	Point pos1 = {1, 2};
	Point pos2;
	pos2 = pos1;
	
	printf("크기: %d \n", sizeof(pos1));
	printf("[%d, %d] \n", pos1.xpos, pos1.ypos);
	printf("크기: %d \n", sizeof(pos2));
	printf("[%d, %d] \n", pos2.xpos, pos2.ypos);
	return 0;
}

// #endif
typedef struct point
{
	int xpos;
	int ypos;
} Point;

Point AddPoint(Point pos1, Point pos2)
{
	Point pos = {pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos};
	return pos;
}

Point MinPoint(Point pos1, Point pos2)
{
	Point pos = {pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos};
	return pos;
}

int main(void)
{
	Point pos1 = {5, 6};
	Point pos2 = {2, 9};
	Point result;
	
	result = AddPoint(pos1, pos2);
	printf("[%d, %d] \n", result.xpos, result.ypos);
	result = MinPoint(pos1, pos2);
	printf("[%d, %d] \n", result.xpos, result.ypos);
	return 0;
}

// #endif
typedef struct student
{
	char name[20];
	char stdnum[20];
	char school[20];
	char major[20];
	int year;
} Student;

void ShowStudentInfo(Student * sptr)
{
	printf("학생 이름: %s \n", sptr -> name);
	printf("학생 고유번호: %s \n", sptr -> stdnum);
	printf("학생 이름: %s \n", sptr -> school);
	printf("학생 전공: %s \n", sptr -> major);
	printf("학년: %d \n", sptr -> year);
}

int main(void)
{
	Student arr[7];
	int i;
	for(i=0; i<7; i++)
	{
		printf("이름: "); scanf("%s", arr[i].name);
		printf("번호: "); scanf("%s", arr[i].stdnum);
		printf("학교: "); scanf("%s", arr[i].school);
		printf("전공: "); scanf("%s", arr[i].major);
		printf("학년: "); scanf("%d", arr[i].year);
	}
	for (i=0; i<7; i++)
	{
		ShowStudentInfo(&arr[i]);
	}
	return 0;
}

// #endif
int main(void)
{
	FILE * fp = fopen("data.txt","wt"); // 쓰기 
	if(fp == NULL)
	{
		puts("파일 오픈 실패!");
		return -1; 
	}
	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);
	
	int ch, i;
	fopen("data.txt","rt"); // 읽기  
	if(fp == NULL)
	{
		puts("파일 오픈 실패!");
		return -1; 
	}
	for(i=0; i<3; i++)
	{
		ch = fgetc(fp);
		printf("%c \n", ch);
	}
	fclose(fp);
	
	return 0;
}

// #endif
int main(void)
{
	FILE * fp = fopen("simple.txt","at");
	if(fp == NULL)
	{
		puts("파일 오픈 실패!");
		return -1; 
	}
	
	fputc('A', fp);
	fputc('B', fp);
	fputs("My name is 趙 \n", fp);
	fputs("Your name is Yoon \n", fp);
	fclose(fp);
	
	char str[30];
	int ch;
	fopen("simple.txt","rt");
	if(fp == NULL)
	{
		puts("파일 오픈 실패!");
		return -1; 
	}
	
	ch = fgetc(fp);
	printf("%c \n", ch);
	ch = fgetc(fp);
	printf("%c \n", ch);
	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fclose(fp);
	
	return 0;
} 

// #endif
int main(void)
{
	FILE * src = fopen("simple.txt", "rt");
	FILE * des = fopen("des.txt", "wt");
	int ch;
	if(src == NULL || des == NULL)
	{
		puts("파일 오픈 실패!");
		return -1; 
	}
	
	while((ch = fgetc(src)) != EOF)
	{
		fputc(ch, des);
	}
	if(feof(src) != 0)
	{
		puts("파일 복사 완료!");
	}
	else
	{
		puts("파일 복사 실패!");
	}
	fclose(src);
	fclose(des);
	return 0;
}

// #endif
int main(void)
{
	FILE * src = fopen("simple.txt", "rt");
	FILE * des = fopen("des.txt", "wt");
	char str[20];
	if(src == NULL || des == NULL)
	{
		puts("파일 오픈 실패!");
		return -1; 
	}
	
	while(fgets(str, sizeof(str), src) != NULL)
	{
		fputs(str, des);
	}
	
	if(feof(src) != 0)
	{
		puts("파일 복사 완료!");
	}
	else
	{
		puts("파일 복사 실패!");
	}
	fclose(src);
	fclose(des);
	return 0;
}

#endif
int main(void)
{
	char name[10];
	char sex;
	int age;
	FILE * fp = fopen("friend.txt", "wt");
	int i;
	for(i=0; i<3; i++)
	{
		printf("이름 성별 나이 순 입력: ");
		scanf("%s %c %d", name, &sex, &age);
		getchar();
		fprintf(fp, "%s %c %d \n", name, sex, age);
	}
	fclose(fp);
	
	fopen("friend.txt", "rt");
	int ret;
	while(1)
	{
		ret = fscanf(fp, "%s %c %d", name, &sex, &age);
		if(ret == EOF)
		{
			break;
		}
		printf("%s %c %d \n", name, sex, age);
	}
	fclose(fp);
	return 0;
}
