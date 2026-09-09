#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num = 55;
	int *ptr;
	
	ptr = & num;
	
	printf("%d, %d \n", num, &num); // num의 주소지에 55라는 숫자가 산다. 넘의 주소지는 100번지라 하면 
	printf("%d, %d, %d \n", ptr, *ptr, &ptr); // ptr에 넘의 주소지가 대입되어 100, ptr은 고유의 주소지가 존재
	// *ptr은 이 포인터가 가르키는 곳으로 가라! ptr이 100번지를 가르킨다. 그럼 100번지에 사는 숫자를 만날 수 있다!
	// & 엠퍼센트 "너 어디사니?" / * 에스터 리스크 "거기 가봐!"
	
	// 포인터가 가리키는 메모리를 참조하는 에스터 리스크 연산자
	int num1 = 100, num2 = 200;
	int * pnum;
	
	pnum = &num1;
	(*pnum) += 30;
	pnum = &num2;
	(*pnum) -= 30;
	printf("num1: %d, num2: %d, &num1: %d, &num2: %d, pnum: %d, *pnum: %d, &pnum: %d \n", num1, num2, &num1, &num2, pnum, *pnum, &pnum);
	pnum = NULL; // 널 포인터를 초기화 아무것도 가르키지 않겠다 
	// *pnum = NULL로 하면 num2자체의 변수값을 없애버린다. 
	if(pnum != NULL)
	{
		printf("*pnum: %d \n", *pnum);
	}
	else
	{
		printf("포인터가 비어있습니다. \n\n");
	}
	
	// LV.1 두 레인저의 공격력 교체 (Swap)
	int power1 = 10, power2 = 20;
	printf("레드의 공격력: %d, 블루의 공격력: %d \n", power1, power2);
	int *p1 = &power1;
	int *p2 = &power2;
	int temp;
	
	temp = *p1; // p1이 가르키는 곳 power1 으로 가서 10을 대입 
	*p1 = *p2;  // p2가 가르키는 곳 으로 가서 p1이 가르키는 곳에 p2값을 대입 
	*p2 = temp; // temp값을 p2가 가르키는 곳에 대입 
	
	printf("두 레인저의 무기가 교체되었습니다. \n");
	printf("레드의 공격력: %d, 블루의 공격력: %d \n\n", power1, power2);
	
	// Lv2. 카르텔의 지하 금고 해킹
	int cartel_vault[5]={500, 1000, 2000, 4000, 8000}; // 카르텔의 금고, 단위[억원]
	int *master_key = cartel_vault; // 마스터키가 가르키는 장소는 카르텔금고의 값 / *master_key=500 0번째 금고를 가르킨다 
	int i=0;
	printf("%d, %d, %d, %d, %d \n", *master_key,  master_key[1],  master_key[2],  master_key,  &master_key); // 얘네는 포인터 없는데 왜 알지? 
	printf("카르텔 중앙 서버 접속 중...\n"); // 얘네는 왜 주소가 안나올까??? 
	
	for(i=0; i<5; i++)
	{
		printf("%d번 금고의 잔액은 %d억원 입니다. \n", i, cartel_vault[i]);
		if(*(master_key + i) >= 2000) // 마스터키는 0번 배열을 가리킴 *(master_key + i) 컴퓨터는 이미 int값이라고 알고 있어서 4byte앞으로 간다 
		{
			printf("%d억원 감지 ", cartel_vault[i]);
			master_key[i] = 0; // *(master_key + i) == master_key[i] 왜 이렇게 되는 거죠??? 
			printf("2000억원 이상이므로 탈취 합니다! \n %d번 카르텔 금고의 남은 금액: %d원 \n",i , *(master_key + i));
		}
		if(i == 4)
		{
			*(master_key + i) = 1;
			printf("%d번 금고의 금액을 %d억원으로 남겨둡니다.\n\n",i , *(master_key + i));
		}
	}
	
	// Lv3. 암호문 뒤집기
	char secret[50]="gnikceh";
	printf("암호문 char secret[50]=gnikceh; 이(가)도착 해독을 개시한다. \n");
	char *start = secret;
	char *end = secret;
	char hako = 0; // swap을 위한 변수 3개 
	int a=0;
	
	while(*end != '\0') // end가 가르키는 곳이 널문자에 도달 할 때 까지 더한다. 
	{
		end++;
	}
	printf("첫글자: %c, 마지막글자(널문자): %c , 널문자 전문자: %c \n", *start, *end, *end-1);
	end--; // 널문자보다 한글자 전으로 돌려야됨 
	
	for(a=0; start < end; a++) // start가 더 커지는 순간 체인지 종료! 
	{
		printf("%c to %c change!!! %s \n", *start, *end, secret);
		hako = *start;
		*start = *end;
		*end = hako;
		start++;
		end--;
	}
	printf("%c to %c change!!! %s \n", *start, *end, secret);
	printf("해독된 암호문: %s \n", secret);
	
	return 0;
}
