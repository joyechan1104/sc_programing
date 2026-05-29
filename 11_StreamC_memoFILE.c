#include <stdio.h>
#include <stdlib.h>

//문자 입출력 함수
int main(void)
{
	char ch = 'H';
	
//put character 문자하나를 모니터에 출력한다!
	putchar(ch);  
	putchar('\0'); // 반복작업시에는 putchar가 가벼워서 훨씬 유리하다. 
	putchar(' '); // putchar는 문자 하나만 처리되므로 아주 빠르게 돌아간다. 
	putchar('\n');
	printf("%c \n", ch); // 내부적으로 처리할 일이 많아 무겁다. 
	
	
// Lv1. 메모장에 글을 써보기 
	FILE *memo;
	memo = fopen("fputctest.txt", "wt"); // 파일을 여는 표준함수: fopen 
	//파일 열기 (이름은 fputctest.txt, 모드는 "wt" -> 글자를 쓰겠다!)
	// "wt"(Write) 모드: 적힌 내용을 다 지우고 쓰겠다 
	// "at"(Append, 추가) 모드: 그냥 계속 쓰겠다 
	int i=0;
	
	if(memo == NULL)
	{
		printf("fputctest.txt 파일을 열 수 없습니다 \n.");
		return -1;
	}
	for(i=0; i<10; i++)
	{
		fputc('G', memo); // fputc 는 문자하나를 출력하는데 저장할 장소를 지정 할 수 있다. 
		fputc('e', memo);
		fputc('m', memo);
		fputc('i', memo);
		fputc(' ', memo);
		fputc('n', memo);
		fputc('i', memo);
		fputc('\n', memo);
	}
	fclose(memo); // 파일을 닫는 함수 
	printf("fputctest.txt에 파일을 저장했습니다. \n");
	
//get character: 키보드로부터 딱 한글자를 읽어오는 함수
	int ch1;
	printf("아무 글자나 하나 입력 하세요: ");
	ch1 = getchar();
	printf("방금 입력한 글자는: ");
	putchar(ch1);
	printf("\n\n"); 
	
// Lv2. 메모장의 글을 모니터에 출력하기 
	// FILE *memo; // Lv1 할때 이미 지정해둠 
	memo = fopen("fputctest.txt", "rt"); // rt: 읽기모드 
	int ch2 = 0;
	
	if(memo == NULL)
	{
		printf("fputctest.txt 파일을 열 수 없습니다 \n.");
		return -1;
	}
	printf("fputctest.txt로부터 문자를 가져옵니다. \n");
	while((ch2 = fgetc(memo)) != EOF) //fgetc: 어디선가 문자를 가져 올 수 있다 
	{
		putchar(ch2);
	}
	fclose(memo);
	printf("fputctest.txt로부터 문자를 가져왔습니다. \n\n");
	
	
	
	
	
	
	
// Lv3. 나만의 비밀 메세지 저장소
	// 입력(getchar) → 저장(fputc) → 읽기(fgetc) → 출력(putchar)
	FILE *secret;
	int character = 0;
	
	// 저장 파트  
	secret = fopen("secret.txt", "wt");
	if(secret == NULL)
	{
		printf("secret.txt 파일을 열 수 없습니다. \n");
		return -1;
	}
	
	printf("secret.txt 파일에 문자를 저장합니다. 타이핑을 해 주세요. 'q'입력시 종료 \n\n");
	while((character = getchar()) != 'q')
	{
		fputc(character, secret);
	}
	printf("\nsecret.txt 파일에 문자를 저장했습니다. 파일을 닫습니다. \n");
	fclose(secret);
	
	// 불러오기 파트 
	secret = fopen("secret.txt", "rt");
	if(secret == NULL)
	{
		printf("secret.txt 파일을 열 수 없습니다. \n");
		return -1;
	}
	
	printf("모니터에 출력하기위해 secret.txt 파일을 불러옵니다. \n\n");
	while((character = fgetc(secret)) != EOF)
	{
		putchar(character);
	}
	printf("\n\n모니터에 출력을 완료했습니다. secret.txt 파일을 닫습니다. \n");
	fclose(secret);
	

	
	return 0;
}

































