#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// 4week
	int num;
	printf("양수? 응수?: ");
	scanf("%d", &num);
	
	if (num<0){
		printf("음수데스네");
	} 
	else if (num==0){
		printf("0입니다람쥐");
	}
	else{
		printf("양수데스네");
	}
	printf("\n");
	
	//학점계산기
	int chukan, kimatu;
	int score;
	printf("중간고사: ");
	scanf("%d", &chukan);
	printf("기말고사: ");
	scanf("%d", &kimatu);
	score = chukan + kimatu;
	if (score>100 || score<0){
		printf("점수입력이 이상하데스\n");
	}
	else if (score>=95){
		printf("A+");
	}
	else if (score>=90){
		printf("A");
	}
	else if (score>=85){
		printf("B+");
	}
	else if (score>=80){
		printf("B");
	}
	else if (score>=75){
		printf("C+");
	}
	else if (score>=70){
		printf("C");
	}
	else {
		printf("넌 그냥 재수강 해라\n");
	}
	
	//절댓값 계산기
	int decimal;
	printf("절댓값계산수입력: ") ;
	scanf("%d", &decimal);
	int result = (decimal>0) ? decimal:decimal*-1;
	printf("입력한 수의 절댓값: %d \n", result);
	
	// 편의점 담배 구매 가능여부
	int age;
	printf("how old you? : ");
	scanf("%d", &age);
	printf("%s", (age>=20) ? "구매가능":"넌꼬맹이");
	printf("\n\n");
	
	// 오늘 뭐 먹지?
	int money;
	printf("나 얼마있지? : ");
	scanf("%d", &money);
	printf("원 \n");
	printf("그럼 %s야겠네 \n", (money>=15000) ? "스테이크사먹어":(money>=8000) ? "제육볶음사먹어":(money>=1000) ? "편의점라면사먹어":(money<0) ? "관속에들어가":"굶어"); 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
