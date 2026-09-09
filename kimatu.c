#include <stdio.h> // 94. include는 헤더파일의 선언 내용을 소스 코드에 포함 시키는데 사용한다. 
#include <stdlib.h>

int chapter11(void)
{	// 1. 배열은 동일한 자료형의 여러 데이터를 연속된 메모리 공간에 저장하는 자료구조이다. 
	int arr[5] = {1, 2}; // 2. 유효인덱스는 0~4 / 4. 배열은 선언과 동시에 중괄호를 이용해 초기값을 지정 할 수 있다. 
	int i; // 3. 인덱스 []를 활용하여 원소에 접근한다. 
	for(i=0; i<5; i++)
	{
		printf("arr[%d]번의 원소는 %d \n", i, arr[i]);
		if(arr[i] == 0)
		{
			printf("5. 일부만 초기화 하였으므로 %d이 출력됩니다. \n", arr[i]);
		}
	}
	int arr_size = sizeof(arr) / sizeof(arr[0]); // 6. 원소 개수를 계산 할 수 있다. 
	printf("6. 배열의 총 원소 개수: %d개 \n", arr_size);
	printf("7. 유효인덱스를 벗어난 사용은 올바른 사용이 아니다. arr[5]: %d, arr[364]: %d \n", arr[5], arr[364]); 
	
	char str[] = "C"; // 8. 문자열은 끝에 널문자 \0을 포함하는 char배열로 표현 할 수 있다. 
	printf("9. char str[] == CNULL 따라서 배열의 실제크기는 %zu바이트 \n", sizeof(str)); 
	char name[4] = "ABC"; // 10. 문자열을 저장할 문자배열에는 실제 문자 수에 널 문자 한 칸을 더 확보 해야 한다. 
	printf("11. name에 저장된 문자열은? %s \n", name);
	printf("11. name[3]에 저장된 널문자는? %%d출력: %d, %%c출력: %c %%s출력: %s \n", name[3], name[3], name[3]);
	printf("\n\n");
	return 0;
}

//=================================================================================================================================

int chapter12(void)
{
	int num = 10;
	int *p = &num; // 12. 포인터변수는 메모리 주소 &를 저장하는 변수이다. 
	int *q = &num; // 19. int *q = &num은 int형 데이터를 가리키는 포인터변수 q를 선언한다. 
	printf("13. &연산자는 변수의 주소를 구할 때 사용 &num의 주소값: %p \n", &num);
	printf("14. *연산자를 포인터 앞에 사용하면 포인터가 가리키는 대상에 접근 할 수 있다. *p가 가리키는 값: %d \n", *p);
	printf("15. p는 num의 주소를 저장 10진수(오류): %d, 주소:%p \n", p, p);
	printf("16. *p는num에 저장된 값에 접근 10진수: %d, 주소(오류): %p \n", *p, *p);
	// 18. *p는 역참조 방식이다 p는 보물의 위치, *p는 보물을 가리킨다.
	char ch = 'A';
	char *chp = &ch; // 17. 포인터를 선언 할 때는 가리킬 대상의 자료형을 함께 명시한다. 
	printf("18. char 포인터를 이동시켰을 때의 주소값: %p + %dbyte == %p \n", chp, sizeof(*chp), chp+1);
	printf("18. int 포인터를 이동시켰을 때의 주소값: %p + %dbyte == %p \n", p, sizeof(*p), p+1);
	// *a = &num; <- 오류  17. 포인터를 선언할 때 자료형 (int, char를 함께 명시) 
	// 18. 역참조 방식은 무엇인가? char *ch 서랍장가서 1칸 열어와, int *p 서랍장가서 4칸 열어와
	int *ghost = NULL; // 20. 아직 사용할 주소가 없는 포인터는 NULL로 초기화 해서 상태를 분명히 할 수 있다. 
	if(ghost != NULL)
	{
		printf("%d %p \n", ghost, *ghost);
	}
	else
	{
		printf("21. 유효한 대상을 가리키지않는 포인터는 역참조해서는 안된다. \n");
	}
	printf("\n\n");
	return 0;
}

//=================================================================================================================================

int chapter13(void)
{
	int arr[3] = {10, 20, 30}; 
	int i, o, q, w, e;
	for(i=0; i<3; i++)
	{
		printf("%d번째 배열: ", i);
		if(arr == &arr[i])
		{ // 22. 배열이름은 대부분의 수식에서 첫 번째 원소의 주소처럼 사용된다. 
			printf("23. arr와 arr[%d]의 주소값은 동일합니다. \n", i); // 배열의 이름 자체는 주소다 
			printf("arr: %p == arr[%d]: %p \n", arr, i, &arr[i]); 
		}
		else
		{
			printf("23. arr와 arr[%d]의 주소값은 다릅니다. arr[%d]: %p \n", i, i , &arr[i]);
		}
	} 
	// arr++; <- 24. 배열 이름은 주소처럼 사용되지만 포인터처럼 변경 할 수는 없다.
	int *p = arr;
	printf("25. int배열을 가리키는 포인터 p에서 p에 숫자를 더하면 다음 원소의 주소를 가리킨다. \n");
	for(o=0; o<3; o++)
	{
		printf("p+%d == arr[%d]: %p \n", o, o, p+o);
	}
	printf("26. 배열원소를 가리키는 포인터에 ++를 적용하면 다음원소를 가리키게된다. \n");
	for(q=0; q<3; q++)
	{
		printf("p++이 %d번 진행되었을때 arr[%d]: %d \n",q ,q, *(p++));
	}
	printf("27. *(arr+2): (%d)는 arr[2]: (%d)와 같은 원소에 접근한다. \n", *(arr+2), arr[2]);
	printf("28. 포인터p에 대해*(p+i)와 p[i]는 같은 방식으로 접근한다. \n");
	int *pp = arr;
	for(w=0; w<3; w++)
	{
		printf("*(pp+w): %d == pp[w]: %d \n", *(pp+w), pp[w]); 
	}
	printf("29. char univ[] = STUDY 처럼만든 배열의 문자원소는 배열범위 안에서 수정 할 수 있다. \n");
	char univ[] = "STUDY";
	printf("대학생은 %s를 중요시 해야해! \n", univ);
	univ[0] = 'B', univ[1] = 'E', univ[2] = 'E', univ[3] = 'R', univ[4] = '\0';
	printf("대학생은 %s를 중요시 해야해! \n", univ);
	char *s = univ;
	*univ = "COKE";
	printf("30. 문자열 상수를 가리키는 포인터를 통해 문자열 상수를 수정해버리면? univ변수의 값: %s \n", univ);
	printf("31. char * fruit[3]는 문자 포인터 세 개를 저장하는 포인터 배열이다.  \n");
	char * fruit[3] = {"apple", "banana", "orange"};
	for(e=0; e<3; e++)
	{
		printf("%s \n", *(fruit+e));
	} 
	printf("\n\n");
	return 0;
}

//=================================================================================================================================

void ShowArray(int arr[], int size) // 33. 컴퓨터는 *arr로만 받으므로 내부가 몇칸인지 모른다. 원소개수도 별도의 인자로 전달필요 
{ // 34. 배열이 함수에 전달되면 --- 
	arr[0] = 99;
	printf("34. 전달받은 주소를 통해 원본 배열의 원소에 접근 할 수 있다. arr[0] == %d \n", arr[0]);
}

void FileSwap(int x, int y) // 35. C언어의 인자 전달방식은 기본적으로 값에 의한 전달(값의 복사!) 
{ // call by value
	int temp = x;
	x = y;
	y = temp;
	printf("35. 서브함수 교환후(값에 의한 전달): x=%d y=%d \n", x, y);
}

void RealSwap(int *a, int *b) // 36. 호출자의 변수값을 변경하려면 주소를 받을 필요가 있음(원변수 값의 변경) 
{ 
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("36. 서브함수 교환후(주소에 의한 전달): x=%d y=%d \n", *a, *b);
}

int chapter14(void)
{
	int arr[3] = {10, 20, 30}; // 32. arr[]로 적어도 컴퓨터는 *arr로 인식한다. (황당) 
	printf("전달하기 전의 arr베열{%d, %d, %d} \n", arr[0], arr[1], arr[2]);
	ShowArray(arr, sizeof(arr)/sizeof(arr[0]));
	
	int x = 5, y = 9;
	printf("35. 교환전(값에 의한 전달): x=%d y=%d \n", x, y);
	FileSwap(x, y);
	printf("35. 메인함수 교환후(값에 의한 전달): x=%d y=%d \n", x, y);
	int a = 24, b = 38;
	printf("36. 교환전(주소에 의한 전달): x=%d y=%d \n", a, b);
	RealSwap(&a, &b);
	printf("36. 메인함수 교환후(주소에 의한 전달): x=%d y=%d \n", a, b); 
	// 37. 두 변수의 값을 교환하는 함수는 두 변수의 주소를 인자로 받아 구현 할 수 있다. 
	
	int *const c = &a; // c를 고정 
	//*c = &b; //39. int *const c 는 초기화한뒤 c자체에 다른주소를 대입할 수 없는 포인터이다.
	printf("*c가 가리키는 숫자: %d \n", *c);
	const int * const d = &b; // int와 d를 고정 
	//d = a; *d = &a; //40.const int * const d는 대상값도 저장한 주소도 변경 할 수 없다. 
	printf("*d가 가리키는 숫자: %d \n", *d);
	const int ARR[2] = {a, b, *c}; // int를 고정 
	//ARR[1] = d; // 41. const int ARR[]형태는 해당원소배열을 수정하지 않겠다는 의도 
	printf("ARR의 배열: {%d, %d, %d}", ARR[0], ARR[1], ARR[2]);
	printf("\n\n");
	return 0; 
}

//=================================================================================================================================

int Plus(int a, int b) { return a + b; } // +연산을 진행할 함수 
int Minus(int a, int b) { return a - b; } // -연산을 진행할 함수 

void Calculator(int x, int y, int (*fp)(int, int)) 
{ // 43. int (*fp)(int, int);는 2개를 인자로 받고 int를 반환하는 함수를 가리킬 수 있다. 
    printf("45. 콜백 구조 작동 중 -> 결과: %d \n", fp(x, y));
}


int chapter19(void) 
{ //42. 함수포인터는 함수의 주소를 저장하여 함수를 간접 호출 할 수 있다
	int (*fp)(int, int) = NULL;
	fp = Plus; 
    printf("fp를 통해 Plus 함수 간접 호출: %d\n", fp(10, 5)); 
    // 44. 함수포인터를 이용하면 상황에따라 선택하는 구조를 만들 수 있다. 
	int input = 2; // <- 선택 1 or 2 
    if (input == 1)
	{
		fp = Plus; // 1이면 15 
	}
    else if (input == 2) // 2면 5 
	{
		fp = Minus;
	}
	printf("fp를 통해 선택한 함수 간접 호출: %d\n", fp(10, 5)); 
	//45. 함수 포인터는 콜백 함수와 같은 구조를 구현할 때 활용할 수 있다. 
	printf("Plus 함수를 배달: ");
    Calculator(20, 30, Plus);
    printf("Minus 함수를 배달: ");
    Calculator(20, 30, Minus);
	
	int num = 999;
    char ch = 'Z';
	void *vp = NULL; // 46. void*는 범용포인터로 사용 할 수 있다. 
	vp = &num; // int 숫자 가능 
	vp = &ch; // char 문자 가능 
	printf("47. 적절한 자료형으로 변환하면: %c \n", *(char*)vp); // 47. void*를 사용하려면 적절한 대상 자료형의 포인터로 다뤄야함
	printf("\n\n");
	return 0;
}

//=================================================================================================================================

int chapter21(void)
{
	printf("51. getchar는 표준입력에서 문자하나를 읽는데 사용: "); 
	int ch = getchar();
	printf("52. putchar는 표준입력에서 문자하나를 출력하는데 사용: "); 
	putchar(ch); 
	printf("\n"); 
	while (getchar() != '\n'); // 버퍼제거 
	char buffer[10]; // 53. 배열의 크기를 sizeof 함께전달 
	int i; 
	printf("53. fgets는 저장할 배열의 크기를 함께전달하여 문자열 입력 범위를 제한 \n");
	printf("55. fgets는 공백을 포함한 한 줄 입력이 필요할 때 쓸 수 있다. \n"); 
	for(i=0; i<2; i++) // <- i의 숫자로 반복회수 조정 
	{
		printf("%d번째 문자열 입력: ", i+1);
		fgets(buffer+i, sizeof(buffer), stdin); // stdin키보드로 입력받아 사이즈만큼 잘라서 버퍼에 집어넣는다. 50. 표준입력 
	}
	printf("54. fgets로 읽은 입력에는 상황에따라 줄바꿈 문자가 포함되어 저장될 수 있다. \n");
	for(i=0; i<2; i++) // <- i< ? 의 숫자로 반복회수 조정 
	{
		printf("%d번째 문자열 출력: \n", i+1);
		fputs(buffer+i, stdout); //stdout모니터로 출력하겠다. 50. 표준출력 
	}
	char str1[] = "Apple";
    char str2[] = "Apple";
    char str3[] = "Bananananana";
    printf("56. strlen함수를 사용하면 Apple의 널을 제외한 문자수는? %d개\n", strlen(str1));
    printf("57. strcmp함수는 두 문자열의 내용이 같으면 %d \n", strcmp(str1, str2));
    printf("57. strcmp함수는 두 문자열의 내용이 다르면 %d \n", strcmp(str1, str3));
	char test[10];
	strcpy(test, str3);
	printf("58. strcpy를 사용할 때는 목적지 배열에 원본 문자열과 널 문자를 저장할 충분한 공간이 필요하다. \n");
	fputs(test, stdout);
	//59. 표준 출력 데이터는 상황에 따라 버퍼에 저장되었다가 출력장치로 전달 될 수 있다. 
	printf("\n\n");
	return 0;
}

//=================================================================================================================================

struct nucle // 60. 구조체는 서로 다른 자료형의 데이터를 하나의 자료형으로 묶을 수 있다. 
{
    char name[20];   // 64. 구조체 멤버로 배열을 포함할 수 있다.
    int mol;
    double *Fermilevel; // 65. 구조체 멤버로 포인터를 포함할 수 있다.
};

int chapter22(void)
{
	struct nucle atom[2] = { // 61. 구조체형을 정의한 뒤에는 해당 형식의 구조체 변수를 별도로 선언하여 사용한다.
		{"전자", 20, NULL}, //67. 구조체 배열은 같은 형식의 여러 데이터를 연속적으로 관리할 떄 유용하다. 
		{"양성자", 30, NULL}
	};
	printf("이름: %s, 몰: %d(?) \n", atom[0].name, atom[0].mol); // 62. 구조체 변수의 멤버에는 점(.)연산자로 접근한다. 
	printf("이름: %s, 몰: %d(?) \n", (atom+1) -> name, (atom+1) -> mol); // 63. 구조체 포인터의 멤버에는 -> 연산자 접근가능
	if((atom+1) -> mol > atom[0].mol)
	{
		printf("양성자는 전자보다 커요 \n");
	} 
	if(strlen(atom[1].name) > strlen((atom + 0) -> name)) // 9byte > 6byte (한글 한글자 크기는 3바이트) 
	{
		printf("양성자가 전자보다 이름이 더 길어요 \n");
	} 
	struct nucle electron;
	electron = atom[0]; // 66. 같은 구조체형 변수끼리는 구조체 전체를 대입할 수 있다. 
	printf("%s %d", electron.name, electron.mol); 
	printf("\n\n");
	return 0;
} 

//=================================================================================================================================

struct Birthday {
    int year;
    int month;
};

typedef struct { // 68. typedef는 기존의 자료형에 새로운 별칭을 부여할 때 사용한다. 
    int id;
    struct Birthday birth; // 72. 중헙 구조체는 구조체 멤버로 또 다른 구조체를 포함하는 형태이다. 
} Student; // 69. typedef를 이용해 바로 student로 변수를 선언 할 수 있다. 

typedef union { //73. 공용체는 여러 멤버가 같은 메모리 공간을 공유하는 사용자 정의 자료형이다. 
    char byte1; 
    int byte4; 
} Box; // 74. 공용체의 크기는 가장 큰 멤버를 저장할 수 있을만큼 확보된다. 

typedef enum { // 75. 열거형에서 정의한 열거 상수는 이름이 붙은 정수 상수처럼 사용할 수 있다. 
    HIGH = 100, // 원한다면 시작 숫자를 직접 지정할 수도 있습니다!
    MID,        // 지정 안 하면 앞의 수 + 1이 되므로 101이 됩니다.
    LOW         // 102가 됩니다.
} Grade;

void PrintStudent(Student s) {
    printf("70. 구조체 변수는 함수 인자 전달가능 -> ID: %d, 생일: %d년 %d월\n", s.id, s.birth.year, s.birth.month);
}

int chapter23(void)
{
	Student s1 = {202603, 1999, 11};
	printf("75. 중첩 구조체 접근: %d \n", s1.birth.year);
	PrintStudent(s1);
	Box b;
	printf("int랑 char가 같이있는 공용체의 char크기는: %dbyte int의 크기는: %dbyte \n", sizeof(b.byte1), sizeof(b.byte4));
	printf("74. 주소를 찍어보면? %p == %p 이기에 공용체의 크기가 확보된다. \n", &b.byte1, &b.byte4);
	printf("75. 열거형에서 정의한 열거 상수는 이름이 붙은 정수 상수처럼 사용가능, LOW의 값: %d", LOW);
	// 71. 함수는 구조체 값을 반환 할 수 있다. 
	printf("\n\n");
	return 0;
}

//=================================================================================================================================

int chapter24(void)
{ // 76. fopen함수는 파일 개방에 성공하면 파일 스트림을 가리키는 FILE*값을 반환한다. 
	FILE *memo = fopen("test.txt", "w");  // 79. "W"모드는 출력용 파일을 열며, 기존 파일이 있으면 내용을 비우고 새로 기록한다. 
	if (memo == NULL) // 77. fopen함수가 파일 개방에 실패하면 NULL을 반환한다. 
	{
        printf("77. 파일 열기 실패!\n");
        return -1;
    }
	fprintf(memo, "C_Language_Grade: A+\n"); // 82. fprintf와 (5줄뒤) 
	fclose(memo); // 81. 사용을 마친 함수는 fclose함수로 닫아 주어야 한다. 
    memo = fopen("test.txt", "r"); // 78. "r"모드는 기존 파일을 읽기 위해 열며, 파일이 존재하지 않으면 개방에 실패한다. 
    if (memo == NULL) return -1; // 80. "a"모드는 출력 내용을 파일의 끝에 이어서 기록한다. 
    char result_str[50];
    fscanf(memo, "%s", result_str); // 82. fscanf는 형식화된 텍스트 데이터를 파일에 출력하거나 파일에서 입력받을 때 사용할 수 있다. 
    printf("82. 파일에서 읽어온 글자: %s \n", result_str);
    fclose(memo);
    // 83. fread와 fwrite는 형식화된 텍스트 데이터를 파일에 출력하거나 파일에서 입력받을 때 사용할 수 있다. 
    // 84. fseek와 ftell은 파일 위치 지시자를 이동하거나 현재 위치를 확인할 때 사용한다. 
    printf("\n\n");
    return 0;
} 

//=================================================================================================================================

int chapter25(void)
{
	// 85. C프로그램에서는 지역변수, 전역변수, 동적 할당 메모리 등이 서로 다른 저장 방식으로 관리될 수 있다. 
    int *ptr = (int *)malloc(sizeof(int)); // 86. malloc함수는 실행중 필요한 크기의 동적메모리 공간을 확보할 때 사용한다. 
    if (ptr == NULL) return -1; // 87. 동적 메모리 할당 함수의 반환값은 할당 성공 여부를 확인한 뒤 사용하는 것이 안전하다.
	*ptr = 100; // 빌린 주소로 찾아가 알맹이 100 꽂기
    printf("86. 동적 할당 공간에 저장된 값: %d \n", *ptr); 
    printf("90. [realloc 전] 원래 방의 주소: %p \n", (void*)ptr);
    ptr = (int *)realloc(ptr, sizeof(int) * 10000); // 89. realloc함수는 이미 할당한 메모리블록의 크기를 변경할 때 사용할 수 있다. 
    printf("90. [realloc 후] 의 주소: %p \n", (void*)ptr); // 90. realloc이 성공하면 기존 주소와 다른 새 주소가 반환될 수도 있다. 
    free(ptr); // 91. 더 이상 필요하지 않은 동적 할당 메모리는 free함수로 한 번만 해제해야 한다. 
    ptr = NULL; // 92. free로 해제한 메모리는 다시 유효하게 할당받기 전까지 접근해서는 안된다. 
    
    int *c_ptr = (int *)calloc(3, sizeof(int)); // 88. calloc함수는 지정한 개수와 크기의 메모리를 할당하고 영역을 0으로 초기화한다. 
	if (c_ptr == NULL) return -1;
	printf("88. calloc으로 빌린 방의 0번째 칸 값: %d (0으로 자동 청소 완료!)\n", c_ptr[0]);
	free(c_ptr);
	c_ptr = NULL;
    printf("\n\n");
	return 0;
}

//=================================================================================================================================

#define YEAR 2026 // 95. define은 매크로 상수나 함수형 매크로를 정의할 때 사용할 수 있다. 
#define SQUARE(X) ((X) * (X))
#define SQUARE2(X) X * X
#define TO_STRING(X) #X // 99. 함수형 매크로에서 #연산자는 매크로 인자를 문자열 형태로 만드는 데 사용할 수 있다. 
#define MAKE_VAR(A, B) A ## B // 100. 함수형 연산자에서 ##은 두 토큰을 결합하는 데 사용 할 수 있다.

int chapter26(void)
{ // 93. 선행처리기는 컴파일에 앞서 #include, #define등의 지시문을 처리한다. 
	printf("95. 매크로 상수 출력: %d년 \n", YEAR); // <- 컴파일러가 보기전에 선행처리기가 다 뜻어 고침 
	int a = 3, b = 1;
	// 96. 함수형 매크로의 인자와 전체 결과에는 괄호를 적절히 사용하여 연산 순서 문제를 줄여야 한다. 
	printf("96. 함수형 매크로 계산((%d+%d) * (%d+%d)) == %d \n", a, b, a, b, SQUARE(a + b));
	printf("96. 함수형 매크로 계산%d+%d * %d+%d == %d \n", a, b, a, b, SQUARE2(a + b));
#ifdef YEAR
    printf("97. #ifdef 조건부 컴파일 성공! \n"); // 97. #if, #ifdef, #iifdef는 조건부 컴파일에 사용 할 수 있다. 
#endif
#undef YEAR // 98. 이미 정의된 매크로를 해제할 때 사용 할 수 있다. 
	printf("99. # 연산자로 문자열 만들기: %s \n", TO_STRING(Apple));
	int MAKE_VAR(student, _num) = 100; // int student_num = 100; 으로 변신!
    printf("100. ## 연산자로 토큰 결합: %d \n", student_num); 
    return 0;
} 

//=================================================================================================================================

int main(int argc, char *argv[]) // 48. argc는 프로그램 이름을 포함한 인자 문자열 개수를 나타낸다. 
{ // 필요한 챕터만 주석을 풀어서 사용 
//	chapter11();
//	chapter12();
//	chapter13();
//	chapter14();
//	chapter19();
//	chapter21();
	chapter22();
//	chapter23();
//	chapter24();
//	chapter25();
//	chapter26();
	printf("\n\n");
	printf("전달된 문자열의 수: %d \n", argc); 
	int i;
	for(i = 0; i < argc; i++)
	{
		printf("49. argv[%d]에 저장된 문자열: %s \n", i, argv[i]);
	} // 49. argv는 명령행에서 전달된 문자열들을 가리키는 포인터배열 형태로 사용 할 수 있다. 
	return 0; 
}
