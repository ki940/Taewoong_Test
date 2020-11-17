#include"header.h"
#include"Test.h"


//if 2번 점수입력으로 성적 나타내기
const char* ShowGrade(int x)
{
	if (x > 100 || x < 0) return  "유효숫자가 아닙니다.\n";
	if (x >= 90) {
		return "A";
	}
	else if (x >= 80) {
		return "B";
	}
	else if (x >= 70) {
		return "C";
	}
	else if (x >= 60) {
		return "D";
	}
}

//삼항사용 if2번 수 입력은 100보다 작은 자연수
char ShowGrade2(int x)
{
	return(x >= 90 ? 'A' : x >= 80 ? 'B' : x >= 70 ? 'C' : x >= 60 ? 'D' : 'F'); // 삼항연산자
	 //삼항연산자의 가독성이 떨어지므로 너무 긴 조건문은 사용하지 않는다.	
}

//switch case 사용 if2번, 수 입력은 0~100까지
const char* ShowGrade3(int x)
{
	switch (x / 10)
	{
	case 10:
		return "만점~\n";
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("F\n");
		break;
	}
}

//if 3번 윤년 채크
void Chack(int x) // 400의 배수면 참, 100의 배수면 거짓, 4의 배수면 참
{
	if (x % 400 == 0)
	{
		printf("윤년이 아니다\n");
	}
	if (x % 100 == 0)
	{
		printf("윤년이 아니다\n");
	}
	else if (x % 4 == 0)
	{
		printf("윤년이다\n");
	}
	else printf("윤년이 아니다\n");
}

//if 4번 사분면 고르기 
int Quad(int x, int y)//사분면 구분 함수
{
	if (x > 1000 || x < -1000 || y>1000 || y < -1000) return 0; // 0 = 에러

	if (x == 0 && y == 0) return 0; // x.y가 둘다 0ㅇ이면 원점
	else if (x == 0 || y == 0) return 0; // 0 = 사분면이 아니다
	else
	{
		if (x > 0) //x가 양수일때
		{
			if (y > 0) return 1;//y도 양수면 1사분면
			else return 4; //y가 음수면 4사분면
		}
		else // x가 음수일떄
		{
			if (y > 0) return 2; // y가 양수면 2 사분면
			else return 3; //y가 음수면 3사분면
		}
	}
}

//for
//for 9번 숫자 n을 받아 n 줄의 n개의 별을 찍기
void star(int x) // 별찍기
{
	for (int i = 0; i < x; i++) // x번 만큼 반복
	{
		for (int p = 0; p < i + 1; p++) // i 가 이제까지 반복된 횟수만큼 p 반복
		{
			printf("*");
		}
		printf("\n");
	}
}

//for 10번 공백과 별 출력
void Printstar(int x)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = x; j > i + 1; j--) // i-1-반복횟수 만큼의 공백 표시
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++) // 반복횟수만큼의 별을 표시
		{
			printf("*");
		}
		printf("\n");
	}
}

//문자열 1번
int AsciiNum(char x)
{
	return x;
}


 //포인터의 이해
int ArrayPointer()
{
	const char *s1 = "Hello";       // 포인터에 문자열 Hello의 주소 저장
	char s2[] = { 'H', 'e', 'l', 'l', 'o' };    // 크기가 10인 char형 배열을 선언하고 문자열 할당
	int s3[] = { 1, 2, 3, 4, 5 };
	int * s4 = s3; //포인터 선언

	/*
	printf("%c\n", *s2);
	printf("%d\n", strlen(s1));    // 5: strlen 함수로 문자열의 길이를 구함
	printf("%d\n", strlen(s2));    // 5: strlen 함수로 문자열의 길이를 구함
	printf("%d\n", sizeof(s1));
	printf("%d\n", sizeof(s2));
	printf("%d\n", sizeof(s3));
	printf("%d\n", sizeof(s3)/sizeof(int)); //

	printf("%d\n", s3[0]);//배열의 첫번째 값
	printf("%d\n", s4[0]);//포인터의 첫번째 값 배열의 주소값을 불러왔을때 배열로 이용 가능한가 확인
	printf("%p\n", s3);//배열의 주소값
	printf("%p\n", s4);//포인터의 주소값
	printf("%d\n", *s4);//포인터의 주소가 가리키는 값
	printf("%p %p %p\n", s4-1, s4, s4+1);//포인터의 주소값
	printf("%d %d %d\n", *(s4 - 1), *s4, *(s4 + 1));//포인터의 주소값이 이동했을때 내용물 값
	*/
	s4--;
	printf("%p %d \n", s4, *s4);
	s4++;
	printf("%p %d \n", s4, *s4);
	s4++;
	printf("%p %d \n", s4, *s4);

	return 0;
}


//포인터

//포인터와 배열 그리고 문자열
//문자열 래퍼런스의 이해가 더 필요, 이는 대입받은 주소를 계속 따라가는데 어째서 이렇게 되는가?
int Pointer1()
{
	const char *s1 = "Hello, world!";       // char 포인터에 문자열의 메모리 주소를 저장
	char s2[20] = "Hello, world!";    // char 배열에 문자열 저장,
	const char * s3 = s1;      // char 배열에 문자열 저장(배열의 크기 생략)s1주소를 복사해서 옴

	//s4는 s1을 따라간다, s1과 주소를 공유하는 중
	const char* & s4 = s1;	//문자열 래퍼런스 사용: s1 에 대한 또 다른 이름(별명)

	printf("s1 %p %s\n", s1, s1);
	printf("s2 %p %s\n", s2, s2);
	printf("s3 %p %s\n", s3, s3);
	printf("s4 %p %s\n", s4, s4);

	printf("s1에 Hello2 대입\n");
	s1 = "Hello2"; // s1에 새로운 문자열을 대입했고 문자열 래퍼런스를 사용한 s4는 바뀐 s1의 주소를 받는다
	printf("s1 %p %s\n", s1, s1);
	printf("s2 %p %s\n", s2, s2);
	printf("s3 %p %s\n", s3, s3);
	printf("s4 %p %s\n", s4, s4);
	return 0;
}

int Test_swap2()
{
	int number[10];
	Random3(number, 10);
	printf("%f\n", average(number, 10));
	//print_array(Random3(number, 10), 10);
	return 0;
}


//래퍼런스 변수의 이해, 래퍼런스 사용시와 미 사용시 어떤 차이가 있는가
//레퍼런스 참조 == 변수형 & 변수명 = 변수명 ex) int & ref = value1
int Test_ReferenceVariable() {
	int value1 = 5;
	int value2 = 6;
	printf("val1 %p :  %d\n", &value1, value1);
	printf("val2 %p :  %d\n", &value2, value2);

	int& ref = value1;
	printf("ref %p :  %d\n", &ref, ref);
	printf("val1 %p :  %d\n", &value1, value1);
	printf("val2 %p :  %d\n", &value2, value2);

	ref = value2;
	printf("ref %p :  %d\n", &ref, ref);
	printf("val1 %p :  %d\n", &value1, value1);
	printf("val2 %p :  %d\n", &value2, value2);
	return 0;
}

//래퍼런스를 이용한 스왑, 포인터가 아니더라도 함수 외부의 값이 바뀜을 확인할수 있다.
void Test_swap3()
{
	int a = 3, b = 17;
	printf("%p %d %p %d \n", &a, a, &b, b);
	swap3(a, b); 
	printf("%p %d %p %d \n", &a, a, &b, b);
}



//2020_10_27


//구조체? 사용자가 임의로 만드는 새로운 자료형


void input(PERSON* p2, PERSON* p) {
	p2->age = p->age;
	p2->name = p->name;
	strcpy(p2->gen, p->gen);
	p2->ID = p->ID;
	p2->score = p->score;
}


// 메모리 해제 불가
PERSON* input(PERSON* p) {
	PERSON* p2 = (PERSON*)malloc(sizeof(PERSON));
	p2->age = p->age;
	p2->name = p->name;
	strcpy(p2->gen, p->gen);
	p2->ID = p->ID;
	p2->score = p->score;
	return p2;
}

void print(PERSON* p) {
	printf("%s %d %s %d %d\n", p->name, p->age, p->gen, p->ID, p->score);
}

void  print_size()
{
	printf("sizeof(PSERSON): %d\n", sizeof(PERSON));
	printf("sizeof(PSERSON::age): %d\n", sizeof(PERSON::age));
	printf("sizeof(PSERSON::name): %d\n", sizeof(PERSON::name));
	printf("sizeof(PSERSON::gen): %d\n", sizeof(PERSON::gen));
	printf("sizeof(PSERSON::ID): %d\n", sizeof(PERSON::ID));
	printf("sizeof(PSERSON::score): %d\n", sizeof(PERSON::score));
}


int TestStruct()
{
	PERSON hong = { 19, const_cast<char*>("홍길동"), "male", 1234, 100 };

	PERSON chal;
	chal.age = 19;
	chal.name = const_cast<char*>("이수진");
	// chal.gen = "female"; //오류 배열로 선언되어서 char* 가 대입되지 않음.
	strcpy(chal.gen, "female");
	chal.ID = 5678;
	chal.score = 80;

	PERSON* sue = (PERSON*)malloc(sizeof(PERSON));
	sue->age = 17;
	sue->name = const_cast<char*>("김철수");
	strcpy(sue->gen, "male");
	sue->ID = 2424;
	sue->score = 90;

	print(&hong);
	print(&chal);
	print(sue);

	PERSON* kim = (PERSON*)malloc(sizeof(PERSON));
	input(kim, &hong);
	print(kim);

	PERSON* lee = (PERSON*)malloc(sizeof(PERSON));
	lee->input(lee, sue);
	print(lee);

	free(lee);
	free(kim);
	free(sue);
	return 0;
}


//동적할당  malloc(memory allocation)(stdlib.h 에 선언되어있으므로 c에서 사용시 꼭 include해줘야한다)
//인자로 전달된 크기의 바이트 수 만큼 메모리 공간을 만들며 void * 로 반환되는 함수이며
//사용방법은 (값을 받아올 변수) = (변수의 데이터 타입 *) malloc(sizeof(변수 데이터타입) * 사용할 크기)
//ex) int arr = (int *) malloc(sizeof(int) * 10) == int형 데이터타입의 10개 공간을 할당
//사용 후 반드시 free를 사용할 것(메모리 해제) ex) free(arr) << free안에 들어가는 이름은 대입한 변수의 이름(주소?)
//memset == 알아볼 것@@@@@@@ string/h 필요
//memset은 배열이나 포인터를 초기화하는 함수이다
//memset(초기화할 변수명, 초기화로 들어갈 숫자, 변수의 크기)

//mallco calloc memset 이해
void Test_DynamicAllocation()
{
	int * arr1 = (int*)malloc(sizeof(int) * 3);
	int * arr2 = (int*)calloc(3, sizeof(int));

	printf("arr1 %p %d\n", arr1, *arr1);
	printf("arr1 %p %d\n", arr1 + 1, *(arr1 + 1));
	printf("arr1 %p %d\n", arr1 + 2, *(arr1 + 2));

	printf("arr2 %p %d\n", arr2, *arr2);
	*(arr2 + 1) = 1;
	printf("arr2 %p %d\n", arr2 + 1, *(arr2 + 1));
	*(arr2 + 2) = 2;
	printf("arr2 %p %d\n", arr2 + 2, *(arr2 + 2));

	memset(arr1, -1, sizeof(int) * 3);
	// memset == 동적할당 초기화 함수,
	//사용시 memset(초기화할 배열 이름, 초기화할 값, 초기화할 배열의 크기);
	printf("arr1 %p %d\n", arr1, *arr1);
	printf("arr1 %p %d\n", arr1 + 1, *(arr1 + 1));
	printf("arr1 %p %d\n", arr1 + 2, *(arr1 + 2));

	free(arr2);
	free(arr1);
}

