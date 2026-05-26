#include <stdio.h>
#include <stdlib.h>
#include <string.h> // 스트링렌쓰는 얘 추가 해야됨 
#include <math.h> // 구조체는 얘 추가함 

#if 0 // 21-5
void RemoveBSN(char str[]) 
{
	int len=strlen(str);
	str[len-1]=0;
}

int main(void)
{
	char str[100];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용: %s \n", strlen(str), str);
	
	RemoveBSN(str);
	printf("길이: %d, 내용: %s \n", strlen(str), str);
}

//#endif
int main(void)
{
	char str1[20]="1234567890";
	char str2[20];
	char str3[5];
	
	/**** case 1 ****/
	strcpy(str2, str1);
	puts(str2);
	
	/**** case 2 ****/
	strncpy(str3, str1, sizeof(str3));
	puts(str3);
	
	/**** case 3 ****/
	strncpy(str3, str1, sizeof(str3)-1);
	str3[sizeof(str3)-1]=0;
	puts(str3);
	return 0;
}

//#endif
int main(void)
{
	char str1[20]="First~";
	char str2[20]="Second";
	char str3[20]="Simple num: ";
	char str4[20]="1234567890";
	
	/**** case 1 ****/
	strcat(str1, str2);
	puts(str1);
	
	/**** case 2 ****/
	strncat(str3, str4, 7);
	puts(str3);
}

//#endif
int main(void)
{
	char str1[20];
	char str2[20];
	printf("문자열 입력 1: ");
	scanf("%s", str1);
	printf("문자열 입력 2: ");
	scanf("%s", str2);
	
	if(!strcmp(str1, str2))
	{
		puts("두 문자열은 완벽히 동일합니다.");
	}
	else
	{
		puts("두 문자열은 동일하지 않습니다.");
		
		if(!strncmp(str1, str2, 3))
		{
			puts("그러나 앞 세글자는 동일합니다.");
		} 
	}
	return 0; 
 } 

//#endif
//22강 구조체
struct point
{
	int xpos;
	int ypos;
} ;

int main(void)
{
	struct point pos1, pos2;
	double distance;
	fputs("point1 pos: ", stdout);
	scanf("%d %d", &pos1.xpos, &pos1.ypos);
	fputs("point2 pos: ", stdout);
	scanf("%d %d", &pos2.xpos, &pos2.ypos);
	
	// 두 점간의 거리 계산 공식
	distance=sqrt((double)((pos1.xpos-pos2.xpos) * (pos1.xpos-pos2.xpos) + (pos1.ypos-pos2.ypos) * (pos1.ypos-pos2.ypos)));
	printf("두 점의 거리는 %g 입니다. \n", distance);
	return 0;
}

//#endif
struct person
{
	char name[20];
	char phoneNum[20];
	int age;
} ;

int main(void)
{
	struct person man1, man2;
	strcpy(man1.name, "안성준");
	strcpy(man1.phoneNum, "010-1122-3344");
	man1.age=23;
	printf("이름 입력: "); scanf("%s", man2.name);
	printf("번호 입력: "); scanf("%s", man2.phoneNum);
	printf("나이 입력: "); scanf("%d", &man2.age);
	printf("이름: %s \n", man1.name);
	printf("번호: %s \n", man1.phoneNum);
	printf("나이: %d \n", man1.age);
	printf("이름: %s \n", man2.name);
	printf("번호: %s \n", man2.phoneNum);
	printf("나이: %d \n", man2.age);
	return 0; 
}

//#endif
struct point
{
	int xpos;
	int ypos;
};

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void)
{
	struct point pos={10, 20};
	struct person man={"이승기", "010-1212-0001", 21 };
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phoneNum, man.age);
	return 0;
}

//#endif
struct point
{
	int xpos;
	int ypos;
};

int main(void)
{
	struct point arr[3]; // arr[0]~arr[2]
	int i;
	for(i=0; i<3; i++)
	{
		printf("점의 좌표 입력: ");
		scanf("%d %d", &arr[i].xpos, &arr[i].ypos); 
	}
	for(i=0; i<3; i++)
	{
		printf("[%d, %d]", arr[i].xpos, arr[i].ypos);
	}
	return 0;
}

//#endif
struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void)
{
	struct person arr[3]={
		{"이승기", "010-1212-0001", 21},
		{"정지영", "010-1313-0002", 22},
		{"한지수", "010-1717-0003", 19}
	};
	int i;
	for(i=0; i<3; i++)
	{
		printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
	} 
}

//#endif
struct point
{
	int xpos;
	int ypos;
};

int main(void)
{
	struct point pos1={1, 2};
	struct point pos2={100, 200};
	struct point *pptr = &pos1;
	(*pptr).xpos += 4;
	(*pptr).ypos += 5;
	printf("[%d, %d] \n", pptr->xpos, pptr->ypos);
	pptr = &pos2;
	pptr->xpos += 1;
	pptr->ypos += 2;
	printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);
	return 0;
}

#endif
struct point
{
	int xpos;
	int ypos;
};
struct circle
{
	double radius;
	struct point *center;
};
 
int main(void)
{
	struct point cen={2, 7};
	double rad=5.5;
	struct circle ring={rad, &cen};
	printf("원의 반지름: %g \n", ring.radius);
	printf("원의 중심 [%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);
	return 0;
}
