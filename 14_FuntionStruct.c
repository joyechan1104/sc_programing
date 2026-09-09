#include <stdio.h>
#include <stdlib.h>

// 타이피데프 선언 
typedef struct battery // Phone로 정의되기에 구조체이름은 의미가 없다 따라서 battery를 지워도 무방하다. 
{
	int percent;
	int health;
} Phone; // struct battery 가 Phone로 치환된다. 

int main1() 
{
	Phone Galaxy = {70, 98};
	Phone Iphone = {50, 65};
	printf("갤럭시의 현재 충전량: %d%%, 배터리 효율%d%% \n", Galaxy.percent, Galaxy.health);
	printf("아이폰의 현재 충전량: %d%%, 배터리 효율%d%% \n", Iphone.percent, Iphone.health);
	return 0;
}

// 함수의 인자로 전달되고 return문에 의해 반환되는 구조체 치킨 
typedef struct chicken
{
	int price; // 가격 
	int dc; // 할인 
} chicken;

void showReceipt(chicken fride) // 3. 오더치킨이 반환되고 프라이드치킨이 호출, 메인함수에서 myOrder구조체가 대입된다. 
{
	printf("=== 영수증 === \n");
	printf("치킨가격: %d원 \n", fride.price);
	printf("쿠폰할인: %d원 \n", fride.dc);
	printf("최종가격: %d원 \n", fride.price - fride.dc);
}

chicken orderChicken(void) // 2.오더 치킨이 호출됨 
{
	chicken app; // 입력받을 앱 구조체 생성 오더 치킨 종료시 소멸 
	printf("배달 치킨 가격과 할인가격을 정해주세요 (가격-할인가): ");
	scanf("%d %d", &app.price, &app.dc);
	return app; // app의 값을 메인함수로 반환 
}

int main(void) // 1.시작부 
{
	chicken myOrder = orderChicken(); // orderChicken의 반환값이 구조체 myOrder에 대입된다.
	showReceipt(myOrder); // 전줄에서 대입된 구조체 myOrder이 showReceipt의 fride구조체에 대입 
} 
















