#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// 숫자 순서대로 출력하기 
	int i=0;
	while(i<=5) {
		printf("%d \n", i);
		i++; 
	}
	
	// 계속 더하기 중단은0
	int input, total=0;
	while(1){
		printf("숫자입력: ");
		scanf("%d", &input);
		if(input==0) {
			break;
		}
		else {
			total += input;
		}
	} 
	printf("합 = %d \n\n", total);
	
	// 배터리 잔량 계산
	int battery=0;
	while(1) {
		if (battery==100) {
			printf("충전%d 완료 \n", battery);
			break;
		}
		else if(battery>=80) {
			printf("충전%d 다됨 \n", battery);
			battery++; 
		}
		else {
			printf("충전%d 중 \n", battery);
			battery+=3;
		}
	}
	
	// 아파트 벨튀
	int floor = 1;
	int room;
	while (floor<10) {
		int room = 1;
		while (room<5) {
			printf("%d층 %d호\n", floor, room);
			room++;
		}
		printf("\n"); // 다음층으로
		floor++; 
	} 
	
	// 반도체 웨이퍼 불량검사
	int row=1, conumn=1;
	while (row<10) {
		conumn=1;
		while (conumn<10) {
			if (row==7 && conumn==4) {
				printf("%d열 %d행에 에러 발생! \n", row, conumn);
			}
			else {
				printf("%d열 %d행 이상없음 \n", row, conumn);
			}
			conumn++;
		}
		row++;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
