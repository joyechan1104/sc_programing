#include <stdio.h>
#include <stdlib.h>
#include <string.h> // 스트링렌쓰는 얘 추가 해야됨 
#include <math.h> // 구조체는 얘 추가함 

#if 0
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
	struct point cen = {2, 7};
	double rad = 5.5;
	struct circle ring = {rad, &cen};
	printf("원의 반지름: %g \n", ring.radius);
	printf("원의 중심 [%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);
	return 0;
}

//#endif
struct point
{
	int xpos;
	int ypos;
	struct point *ptr;
};

int main(void)
{
	struct point pos1={1, 1};
	struct point pos2={2, 2};
	struct point pos3={3, 3};
	pos1.ptr = &pos2;
	pos2.ptr = &pos3;
	pos3.ptr = &pos1;
	printf("점의 연결관계... \n");
	printf("[%d, %d]와(과) [%d, %d] 연결 \n",
		pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos); 
	printf("[%d, %d]와(과) [%d, %d] 연결 \n",
		pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos); 
	printf("[%d, %d]와(과) [%d, %d] 연결 \n",
		pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos); 
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
	struct point pos = {10, 20};
	struct person man = {"이승기", "010-1212-0001", 21};
	printf("%p %p \n", &pos, &pos.xpos);
	printf("%p %p \n", &man, &man.name);
}

//#endif
int main()
{
	// 과제는 코드 한줄한줄 주석을 달아줘야한다. 
	// 문제1 
	int num = 0; // 정수형 변수 선언 
	printf("변수입력: ");
	scanf("%d", &num); // 입력 정수형 변수에 저장 
	printf("변수출력: %d \n", num); // 변수 n에 저장된 값을 출력, 정수형 변수이므로 서식문자 %d를 쓴다. 
	
	// 문제2
	long long num1 = 0; // 8byte 변수 지정, 지역변수는 선언 후초기화하지 않으면 쓰레기값이 채워지므로 0으로 초기화를 한다. 
	long long num2 = 0;
	long long result = 0;
	printf("변수2개입력: "); 
	scanf("%d %d", &num1, &num2); // 정수형 입력 2개 이므로, 정수형 서식문자 2개 사용 
	result = num1 + num2; // 넘1과 넘2에 있는 변수의 합을 리절트에 저장
	printf("합계출력: %d \n", result); // 리절트에 저장되어있는 변수를 출력  
	
	return 0;
}

//#endif
typedef int INT;
typedef int *PTR_INT;
typedef unsigned int UNIT;
typedef unsigned int *PTR_UNIT;
typedef unsigned char UCHAR;
typedef unsigned char *PTR_UCHAR;

int main(void)
{
	INT num1 = 120;
	PTR_INT pnum1 = &num1;
	UNIT num2 = 190;
	PTR_UNIT pnum2 = &num2;
	UCHAR ch = 'z';
	PTR_UCHAR pch = &ch;
	printf("%d, %u, %c \n", *pnum1, *pnum2, *pch);
	return 0;
}

//#endif
struct point
{
	int xpos;
	int ypos;
};

typedef struct point Point;

typedef struct person
{
	char name[20];
	char phoneNum[20];
	int age;
} Person;

int main(void)
{
	Point pos = {10, 20};
	Person man = {"이승기", "010-1212-0001", 21};
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phoneNum, man.age);
	return 0;
}

//#endif
typedef struct point
{
	int xpos;
	int ypos;
} Point;

void ShowPosition(Point pos)
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

Point GetCurrntPosition(void)
{
	Point cen;
	printf("Input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

int main(void)
{
	Point curPos = GetCurrntPosition();
	ShowPosition(curPos);
	return 0;
}

//#endif
int main()
{
	//문제3 ,4
	int a = 0;
	int b = 0;
	printf("두개의 정수 입력: ");
	scanf("%d %d", &a, &b);
	if(a > b)
	{
		printf("1 \n");
	}
	else
	{
		printf("0 \n");
	}
	
	if(a > b)
	{
		printf("두 정수중 더 큰 값은 %d입니다. \n", a);
	} 
	if(b > a)
	{
		printf("두 정수중 더 큰 값은 %d입니다. \n", b);
	} 
	return 0;
}

//#endif
typedef struct person
{
	char name[20];
	char phoneNum[20];
	int age;
} Person;

void ShowPersonInfo(Person man)
{
	printf("name: %s \n", man.name);
	printf("phone: %s \n", man.phoneNum);
	printf("nage: %d \n", man.age);
}

Person ReadPersonInfo(void)
{
	Person man;
	printf("name? "); scanf("%s", man.name);
	printf("phone? "); scanf("%s", man.phoneNum);
	printf("age? "); scanf("%d", &man.age);
	return man;
}

int main(void)
{
	Person man = ReadPersonInfo();
	ShowPersonInfo(man);
	return 0;
}

#endif
typedef struct point
{
	int xpos;
	int ypos;
} Point;

void OrgSymTrans(Point *ptr)
{
	ptr->xpos = (ptr->xpos) * -1;
	ptr->ypos = (ptr->ypos) * -1;
}

void ShowPosition(Point pos)
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

int main(void)
{
	Point pos = {7, -5};
	OrgSymTrans(&pos);
	ShowPosition(pos);
	OrgSymTrans(&pos);
	ShowPosition(pos);
	return 0;
}
