#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#if 0
int main(int argc, char *argv[]) {
	
	int a = 0, b = 0;
	a++;
	printf("%d %d \n", a, b++);
	
	// 1. 0 0 /2.1 0 /3. 0 1 /4. 1 1
	
	int i = 0;
	for (i = 0; i < 5; i++) // 5보다 작냐 <= 이면 5도 포함 
	{
		if (i % 2 == 0) // i % 3 이면 3의 배수가 출력이 안된다  
			{
				continue; // 참이면 얘가 실행 나눠서 0이 된면  
			}
		printf("%d \n", i);
	}
	
	// 1. 12345 /2.01234 /3.135 /4.13
	
	int i1 = 0, a1 = 0;
	for (i1=0; i1<2; i1++)
	{
		a1 += 5;
	}
	printf("%d \n", a1);
	
	int a2 = 1;
	int b2 = 3;
	
	printf("%d \n", a2*b2+3);
	
	//1.0 / 2.12 / 3.6 / 4. 오류 
	
	int a3 = 1;
	
	printf("%d \n", ++a);
	
	//1.0 /2.1 /3.2 / 4.3
	
	// 와일 두와일 함수
	
	//챕터 14
	return 0;
}

//#endif
void ShowArayElem(int * param, int len)
{
	int i;
	for(i=0; i<len; i++)
		printf("%d", param[i]);
	printf("\n");
}


int main (void)
{
	int arr1[3]={1, 2, 3};
	int arr2[5]={4, 5, 6, 7, 8};
	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
	ShowArayElem(arr2, sizeof(arr2) / sizeof(int));
	return 0;
}
	
//#endif
void ShowArayElem(int * param, int len)
{
	int i;
	for(i=0; i<len; i++)
		printf("%d", param[i]);
	printf("\n");
}

void AddArayElem(int * param, int len, int add) 
{
	int i;
	for(i=0; i<len; i++)
		param[i] += add;
}

int main (void)
{
	int arr[3]={1, 2, 3};
	AddArayElem(arr, sizeof(arr) / sizeof(int), 1);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
	AddArayElem(arr, sizeof(arr) / sizeof(int), 2);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
	AddArayElem(arr, sizeof(arr) / sizeof(int), 3);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
	return 0;
}
	
//#endif
void Swap(int n1,int n2)
{
	int temp=n1;
	n1=n2;
	n2=temp;
	printf("n1 n2: %d %d \n", n1, n2);
}
	
int main (void)
{
	int num1=10;
	int num2=20;
	printf("num1 num2: %d %d \n", num1, num2);
	
	Swap(num1, num2); // num1과 num2의 저장된 값이 서로 바뀌길 기대! 
	printf("num1 num2: %d %d \n", num1, num2);
	return;
}
	
//#endif
void Swap(int * ptr1, int * ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
	
int main(void)
{
	int num1 = 10;
	int num2 = 20;
	printf("num1 num2: %d %d \n", num1, num2);
	Swap(&num1, &num2);
	printf("num1 num2: %d %d \n", num1, num2);
	return;
}
	
//#endif
int main(void)
{
	int arr1[3][4];
	int arr2[7][9];
	printf("세로3, 가로4: %d byte \n", sizeof(arr1));
	printf("세로7, 가로9: %d byte \n", sizeof(arr2));
}
	
//#endif
int main(void)
{
	int villa[4][2];
	int popu, i, j;
	/*가구별 거주인원 입력받기*/
	for (i=0; i<4; i++)
	{
		for (j=0; j<2; j++)
		{
			printf("%d층 %d호 인구수: ", i+1, j+1);
			scanf("%d", &villa[i][j]);
		}
	} 

/* 빌라의 층별 인구수 출력하기*/
	for (i=0; i<4; i++)
	{
		popu = 0;
		popu += villa[i][0]; // j 0일때 
		popu += villa[i][1]; // j 1일때 하드코딩  
		printf("%d층 인구수: %d \n", i+1, popu);
	}
	return 0;
}
	
//#endif
int main(void)
{
	long long arr[3][2]; // int면 4씩 차이 
	long long i, j; // longlong이면 8씩 차이  
	for(i=0; i<3; i++)
		{
			for(j=0; j<2; j++)
			{
				printf("%p \n", &arr[i][j]);
			}
		}
	return 0;
}

//#endif
int main(void)
{
	int i, j;
	//2차원 배열 초기화의 예1
	int arr1[3][3]={
	{1, 2, 3},
	{4, 5, 6},
	{7, 8, 9}
	};
	
	//2차원 배열 초기화의 예2
	int arr2[3][3]={
	{1},
	{4, 5},
	{7, 8, 9}
	};
	
	//2차원 배열 초기화의 예3
	int arr3[3][3]={1, 2, 3, 4, 5, 6, 7};
	
	// 예1 
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	// 예2
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d", arr2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	// 예3
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d", arr3[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}
	
#endif
int main(void)
{
	int arr1[2][3][4];
	double arr2[5][5][5];
	printf("높이2, 세로3, 가로4 int형 배열: %d \n", sizeof(arr1)); // 2x3x4x4
	printf("높이5, 세로5, 가로5double형 배열: %d \n", sizeof(arr2)); // 5x5x5x8
	return 0;
} 
