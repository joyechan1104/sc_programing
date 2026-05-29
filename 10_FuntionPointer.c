#include <stdio.h>
#include <stdlib.h>

// 함수인자로 배열 전달하기 
void MovieTime(int *box, int gasu)
{
	int i;
	for(i=0; i<gasu; i++)
	{
		printf("%d번 영화 상영시간: %d분 \n", i+1, box[i]); // == *(box + i) 배열로 쓰면 *가 필요 없음 
	} // box[0]이 호출 이후 반복 
}

int main1(void)
{
	int netflix1[3] = {120, 90, 150};
	int netflix2[5] = {110, 130, 95, 140, 85};
	MovieTime(netflix1, sizeof(netflix1)/sizeof(int)); // netflix1의 주소를 *box에 담고 
	MovieTime(netflix2, sizeof(netflix2)/sizeof(int)); // gasu에는 배열의 byte/ 배열1개의 byte를 하면 (12/4==3) 3개가 된다. 
	printf("\n");
}

// call-by-value
void addStamp(int copyStamp) // myStamp가 copyStamp에 대입 
{
	copyStamp += 1; // 5+1=6
	printf("addStamp의 스탬프 개수: %d개 \n", copyStamp);
} 

int main2(void)
{
	int myStamp = 5;
	addStamp(myStamp);
	printf("나의 스탬프 개수: %d개 \n", myStamp); // 돌아오니 스탬프 사라짐 주소를 안써서 그래 ㅋㅋ 
	printf("\n");
}

// call-by-reference 
int yourStamp = 5;

void addStampCard(int * stampCard) // * stampCard는 yourStamp를 가르킨다. 
{
	* stampCard += 1; // yourStamp에 1개 추가 
	printf("addStampCard 내의 스탬프수: %d개 \n", * stampCard);
	printf("yourStamp를 출력해버리면? %d개 \n", yourStamp); // 전역변수 + 함수 위쪽에 있어야 출력됨 
	printf("stampCard 포인터를 안 찍으면? 주소: %d \n", stampCard); // stampCard는 주소를 저장하기 위해 태어난놈이라 일반출력시 주소가 나옴????
	printf("stampCard 주소를 찍어버리면? 주소: %d \n", &stampCard); // 당연히 주소가 나옴
} 

int main3(void)
{
	addStampCard(&yourStamp);
	printf("너의 스탬프 수: %d개 \n", yourStamp);
	// printf("stampCard를 호출해버리면? %d \n", * stampCard); / 지역변수라 호출 못함 
	printf("yourStamp 주소를 찍어버리면? 주소: %d \n", &yourStamp);
	printf("\n");
}

// 메인영역
int main()
{
	main1();
	main2();
	main3();
} 


























