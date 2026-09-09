#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// break문 
	int sum=0, num=0;
	
	while(1)
	{
		sum+=num;
		if (sum>5000)
		{
			break;
		}
		num++;
	}
	printf("sum: %d \n", sum);
	printf("sum: %d \n", num);
	
	// 자판기 거스름돈
	int totalcharge=800;
	
	while(totalcharge>0)
	{
		if(totalcharge<=300)
		{
			printf("잔액이 부족합니다. \n");
			break;
		}
		totalcharge-=100; // -100을 하면 계산만 하고 저장을 안한다. -=100으로 해줘야 저장을 한다.
		printf("100원을 거슬러 줬습니다. 남은금액: %d \n", totalcharge); 
	} 
	printf("실행 종료.");
	
	//cuntinue문
	int n1;
	printf("start! \n");
	for(n1=1; n1<50; n1++)
	{
		if(n1%2==0 || n1%3==0)
		{
			continue;
		}
		printf("%d ", n1);
	} 
	printf("end \n");
	
	//럭키박스 포장 시스템 
	int lucky=0;
	
	printf("start! \n");
	for(lucky=1; lucky<=10; lucky++)
	{
		if(lucky==4 || lucky==7)
		{
			printf("%d번 박스 오류 발생 \n", lucky);
			continue;
		}
		printf("%d번 박스 \n",lucky);
	} 
	printf("end \n");
	printf("\n");
	
	// 자판기 음료수 선택
	int choice;
	printf("자판기 음료를 골라주세요 \n 1번: 콜라 2번: 사이다 3번: 환타 \n 4번: 밀키스 5번: 생수 그외: 오류\n 선택: ");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			printf("콜라가 나왔습니다. \n");
			break;
		case 2:
			printf("사이다가 나왔습니다. \n");
			break;
		case 3:
			printf("환타가 나왔습니다. \n");
			break;
		case 4:
			printf("밀키스가 나왔습니다. \n");
			break;
		case 5:
			printf("생수가 나왔습니다. \n");
			break;
		default:
			printf("아무것도 안 나왔어. \n");
	} 
	printf("\n");
	
	//스마트 카페 키오스크
	char coffee=0;
	char size=0;
	int price=3000;
	
	printf("커피 종류를 골라주세요 A. Americano: 3000won \n B. cafelatte: 3500won C. cafemoka: 4000won \n 주문을 입력하세요 영문A or B or C: ");
	scanf(" %c", &coffee);
	printf("커피 사이즈를 골라주세요 S: standard/ L: large +500won \n 사이즈를 선택해세요 S or L: ");
	scanf(" %c", &size); // &잊을래?
	switch(coffee)
	{
		case 'A': case 'a': // 문자에 ''를 안붙이면 컴퓨터는 인식을 못한다 
		break;
		case 'B': case 'b':
			price+=500;
		break;
		case 'C': case 'c':
			price+=1000;
		break;
		default:
		printf("메뉴 오류입니다 종료합니다."); 
	}
	if(size=='l'||size=='L') // 비교연산자 == 을 써야해, 대입연산자 = 을 쓰면 될리가없지
		{
			price+=500; // if(size=='l'||'L') 이상태면 L의 아스키코드는 0이 아니니까 항상 참으로 변함 
			printf("사이즈 업그레이드를 진행합니다 \n");
		} // continue은 와일문 폴문 안이 아니면 사용이 불가능 하다. 
	printf("가격은 %d원 입니다. 거스름돈은 없습니다. \n", price);
	printf("\n");
	 
	return 0;
}
