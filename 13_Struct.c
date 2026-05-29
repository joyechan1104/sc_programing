#include <stdio.h>
#include <stdlib.h>

//1 구조체의 좌표평면 
struct item
{
	int xpos;
	int ypos;
};
	
int resultPotion = 0;
int resultSword = 0;
	
int main1() 
{
	struct item potion, sword;
	fputs("아이템 포션: ", stdout);
	scanf("%d %d", &potion.xpos, &potion.ypos);
	fputs("아이템 소드: ", stdout);
	scanf("%d %d", &sword.xpos, &sword.ypos);
	printf("포션위치: %d, %d \n", potion.xpos, potion.ypos);
	printf("소드위치: %d, %d \n", sword.xpos, sword.ypos);
	
	resultPotion = potion.xpos*potion.ypos;
	resultSword = sword.xpos*sword.ypos;
	if(resultPotion > resultSword)
		{printf("포션이 더 멀리 있습니다. \n");}
	else
		{printf("소드가 더 멀리 있거나 동일한 거리 입니다. \n");}
	printf("\n");
	return 0;
}

//2 구조체접근과 배열 
struct anime
{
	char title[20];
	char hero[20];
	int episodes;
};

int main2()
{
	struct anime list[4];
	int i;
	for(i=1; i<4; i++)
	{
		printf("%d 번째 애니정보 입력\n", i);
		fputs("애니제목: ", stdout);
		scanf("%s", list[i].title);
		fputs("주인공: ", stdout);
		scanf("%s", list[i].hero);
		fputs("애니회차: ", stdout);
		scanf("%d", &list[i].episodes); // 인트형 변수에는 &를 해야 주소를 입력 받을 수 있다. 
	}
	
	for(i=3; i>0; i--)
	{
		printf("%d위! \n제목: %s \n주인공: %s \n회차: 총%d화\n", i, list[i].title, list[i].hero, list[i].episodes);
	}
	printf("\n");
}

//3 구조체 변수 초기화 
struct pearl
{
	int xpearl;
	int ypearl;
};

struct bubbleTea
{
	char name[20];
	char tppping[20];
	double sugar;
};

int main3(void)
{
	struct pearl black={5, 10};
	struct bubbleTea gongcha={"타피오카밀크티","펄추가",0.5};
	printf("펄의 좌표: %d, %d \n", black.xpearl, black.ypearl);
	printf("버블티: %s, %s, %f \n", gongcha.name, gongcha.tppping, gongcha.sugar); 
	printf("\n");
}

//4 배열로 구조체 변수 초기화 
struct pizza
{
	char name[20];
	char topping[20];
	int cheese;
};

int main4(void)
{
	struct pizza dou[3]={
		{"불고기피자", "치즈", 30},
		{"포테이토피자", "올리브", 50},
		{"슈림프피자", "고구마", 10}
	};
	int i;
	for(i=0; i<3; i++)
	{
		printf("품명: %s, 토핑: %s, 치즈두께: %dmm \n", dou[i].name, dou[i].topping, dou[i].cheese);
	} 
	printf("\n");
}

//5 구조체와 포인터 -> 
struct missile{
	int x;
	int y;
	int speed;
};

int main5(void)
{
	struct missile korea={5, 10, 250};
	struct missile america={15, 3, 200};
	struct missile *kptr = &korea;
	(*kptr).x += 5; // 포인터로 접근해서 값에 5를 추가하기 
	korea.x += 5; // 진짜변수로 접근해서 값에 5를 추가하기
	korea.y += 2;
	printf("kptr(k)의 좌표: %d, %d \n", kptr -> x, kptr -> y); // (*ptr),x == ptr->x 그 주소의 그 상자를 열어라 
	kptr = &america; // 미사일 좌표를 미국으로 바꾸기 
	kptr -> x += 15;
	kptr -> y += 5;
	america.y -= 2;
	printf("kptr(a)의 좌표: %d, %d \n", america.x, (*kptr).y); // -> 는 포인터만 쓸 수 있다. 일반변수가 사용시 오류 
	printf("\n");
}

//6 구조체 안의 구조체
struct ball // mini 
{
	int xball;
	int yball;
};

struct paddle // p1
{
	int id;
	struct ball * target; // target은 구조체ball을 바라본다. 
};

int main6(void)
{
	struct ball mini = {20, 50};
	int ids = 10;
	struct paddle p1 = {ids, &mini}; // id에 ids를 대입,  p1은 미니의 주소를 본다. 
	printf("플레이어1: id: %d 소유볼크기: %d, %d \n", p1.id, p1.target -> xball, (*p1.target).yball);
	printf("\n");
}

//7 내안에 또 내 구조체 
struct subway
{
	int num;
	int people;
	struct subway * next;
};

int main7(void)
{
	struct subway sub1 = {1, 50};
	struct subway sub2 = {2, 100};
	struct subway sub3 = {3, 200, &sub1};
	sub1.next = &sub2;
	sub2.next = &sub3;
	printf("%d호차 %d명과 %d호차 %d명 연결 \n", sub1.num, sub1.people, sub1.next -> num, (*sub1.next).people);
	printf("%d호차 %d명과 %d호차 %d명 연결 \n", sub2.num, sub2.people, sub2.next -> num, (*sub2.next).people);
	printf("%d호차 %d명과 %d호차 %d명 연결 \n", sub3.num, sub3.people, sub3.next -> num, (*sub3.next).people);
	printf("1호차주소: %p, 호차번호: %p, \n사람수: %p, 3호차에서 연결된1호차번호: %p \n",
	&sub1, &sub1.num, &sub1.people, &sub3.next -> num);
	printf("\n");
}

// 모든 함수 호출 
int main()
{
	main1();
	//main2(); 
	main3();
	main4();
	main5();
	main6();
	main7();
	printf("포션의 X * Y = %d, 소드의 X * Y = %d", resultPotion, resultSword);
}




















