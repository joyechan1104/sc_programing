#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	// puts, fputs 
	char *str="Simple String";
	printf("1. puts test ------ \n");
	puts(str); // puts함수는 문자열 출력후 자동개행이 이루어진다 
	puts("So Simple String"); // 마찬가지 
	printf("2. fputs test ------ \n");
	fputs(str, stdout); printf("\n"); // fputs는 개행이 필요하다 
	fputs("So Simple String", stdout); printf("\n"); //마찬가지 
	printf("3. end of main ---\n");
	
	/*
	//gets(매우위험), fgets
	char str1[7];
	int p;
	printf("fgets test 문자를 입력해 주세요: ");
	for(p=0; p<5; p++)
	{
		fgets(str1, sizeof(str1), stdin); // stdin : 키보드
		printf("Read %d : %s \n", p+1, str1); 
	}
	*/
	
	// 우리반 성적표 엑셀 자동 생성기
	FILE *score;
	typedef struct 
	{
		char name[20]; // 이름입력 변수 
		int mat;
		int electron;
		int degital;
	} studuntScore;
	studuntScore SS;
	int i;
	score = fopen("class_scores.csv","wt"); // 생성할 파일명과 쓸 방법 
	fputs("이름, 공업수학, 전자회로, 디지털공학\n", score); // 출력장소 지정은 fputs 
	for(i=0; i<3; i++)
	{
		printf("%d번째 학생의 이름입력: ", i+1);
		fgets(SS.name, sizeof(SS.name), stdin); // scanf를 쓰면 더 편한데 fgets를 쓰고싶다 
		SS.name[strcspn(SS.name, "\n")] = '\0'; // 코드뒤의 버퍼를 찾아서 제거하는 녀석 
		printf("%s 학생의 공업수학 점수 입력: ", SS.name);
		scanf("%d", &SS.mat);
		printf("%s 학생의 전자회로 점수 입력: ", SS.name);
		scanf("%d", &SS.electron);
		printf("%s 학생의 디지털공학 점수 입력: ", SS.name);
		scanf("%d", &SS.degital);
		fprintf(score, "%s, %d, %d, %d\n", SS.name, SS.mat, SS.electron, SS.degital); // 파일에 쓰기 
		while(getchar() != '\n'); // fputs를 쓰면 버퍼 enter까지 같이 저장되므로 청소가 필요 
	}
	fclose(score);
	printf("엑셀파일에 성적이 저장되었습니다. \n");
	
	// 메모장에 별 찍기
	FILE *star;
	int s, t;
	int size = 100;
	star = fopen("star.txt","wt");
	if(star == NULL)
	{
		return -1;
	}
	for(s=0; s<size; s++)
	{
		for(t=0; t<(size-1-s); t++)
		{
			fputc(' ', star);
		}
		for(t=0; t<(2*s+1); t++)
		{
			fputc('*', star);
		}
		fputc('\n', star);
	}
	fclose(star);
	printf("메모장에 어떠한 그림이 그려졌습니다. 열어보세요! \n");
	return 0;
}
