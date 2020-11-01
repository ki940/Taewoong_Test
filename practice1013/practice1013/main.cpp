#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>






//포인터의 이해
 /*
#include <string.h>    // strlen 함수가 선언된 헤더 파일

int main()
{
	const char *s1 = "Hello";       // 포인터에 문자열 Hello의 주소 저장
	char s2[] = { 'H', 'e', 'l', 'l', 'o'};    // 크기가 10인 char형 배열을 선언하고 문자열 할당
	int s3[] = { 1, 2, 3, 4, 5 };
	int * s4 = s3; //포인터 선언

	
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


	return 0;
}
*/

 
 /*
//포인터와 배열 그리고 문자열
//문자열 래퍼런스의 이해가 더 필요, 이는 대입받은 주소를 계속 따라가는데 어째서 이렇게 되는가?
int main()
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
*/


//2020_10_20

/*

//문자열의 길이를 구하고 비교하기
//임의의 문자열을 받을 때 미리 배열을 설정하지 않는 방법 물어볼 것

#include<string.h> // 문자열 관리 헤더

int main()
{
	const char *s1 = "StringLongChack";
	char s2[20] = "String";

	strlen(s1) > strlen(s2) ? printf("첫번째 문자열이 크다\n") : strlen(s1) == strlen(s2) ? printf("두 문자열은 같다\n") : printf("두번째 문자열이 크다\n");

	return 0;
}

*/


/*
//문자열의 복사

#include<string.h>

int main()
{
	char s1[10] = "copytest";
	char s2[10];

	strcpy(s2, s1); // s2문자열에 s1복사

	printf("%s\n", s2);
}
*/


/*
//두 문자열 붙이기
//동적 메모리 할당과 malloc(sizeof(char)*문자열의 길이) 등을 물어본다
#include<string.h>

int main()
{
	char a[10] = "attech";
	char b[20] = "Test"; // a문자열을 붙여 포함할 것이기에 두 문자열의 합만큼 배열이 커야한다

	strcat(b, a); // b에 a를 붙임,
	printf("%s", b);
}

*/


/*
//문자열 안에서 문자 검색하기(본문은 문자로 문자열 검색하기가 됨, 물어볼것)
#include<string.h>
int main()
{
	char s1[30] = "a about find a in charstring";
	int aNum = 0; // 검색된 a의 갯수

	char *ptr = strchr(s1, 'a'); //d로 시작하는 문자열을 s1에서 검색해서 그 문자열의 시작위치를 반환한다?

	while (ptr != NULL)
	{
		printf("%s\n", ptr); // 검색된 문자열 출력
		ptr = strchr(ptr + 1, 'a'); // 포인터에 1을 더해 검색된 a다음의 a를 찾음
		aNum++;
	}
	printf("검색된a의 횟수? %d", aNum); 
}

*/

//2020 10 24

//문자열 길이 구하고 비교하기, string 없이

int longchack(const char *a)//문자열의 길이 구하기
{
	for (int x = 0; 1; x++)
	{
		if (a[x] == '\0') return x; //x 은 문자열의 길이
	}
}

int len(const char* str) {//문자열의 길이 구하기
	int count = 0;
	while(*(str++) != NULL){//문자열의 값이 NULL이 아닐때까지 반복
		count++;
	}
	return count;
}

int compare(const char* str1, const char* str2) { // 문자열 두개 비교하기,
	if (len(str1) > len(str2)) // 위에 만든 len함수를 이용해 길이를 구하고 크거나 같거나 작은 경우를 구분한다.
	{
		return 1;
	}
	else if (len(str1) == len(str2))
	{
		return 0;
	}
	else
		return -1; // str1이 길면 1, 같으면 0 짧으면 -1
}


//2020_10_27

//배열을 이용해 배열 원소의 평균 구하기, 
float average(int * array_name, int array_length)//float형으로 선언했으므로 출력할 때 %f로 출력함을 잊지 말자
{
	float aver;
	float sum = 0;
	for (int i = 0; i < array_length; i++) {
		sum += array_name[i];
	}
	aver = sum / array_length;
	return aver;
}

//길이가 정해진 배열을 for문 rand함수를 이용해 배열 원소 채우기, 
int* Random1(int* array_name, int array_length) {
	for (int i = 0; i < array_length; i++) {
		srand(i);//시드값을 주는 rand함수, i가 증가하면서 시드값도 자연히 바뀐다.
		array_name[i] = rand();//rand함수 사용시 time헤더와 stdlib헤더 필수
	}
	return array_name;
}

int* Random2(int* array_name, int array_length) {
	for (int i = 0; i < array_length; i++) {
		srand(i);
		*(array_name+i) = rand(); //배열의 주소 + i(++)로 연속되는 배열의 성질을 이용한 원소 채우기
	}
	return array_name;
}

int* Random3(int* array_name, int array_length) {
	for (int i = 0; i < array_length; i++) {
		srand(i);
		*(array_name++) = rand();//배열의 주소 ++(증가연산자)로 연속되는 배열의 성질을 이용한 원소 채우기
	}
	return (array_name - array_length);
}

void print_array(int* array_name, int array_length) {
	for (int i = 0; i < array_length; i++) {
		printf("%p:  %d\n", &array_name[i], array_name[i]);//%p(포인터(주소) 출력) 주소와 값을 확인한다
	}
}
// 지역변수 전역변수
//call by value
//지역변수로 스왑함, 주소값이 아니라 함수 내의 새 변수에 인자의 값만 받아와서 그 두개의 값을 바꾼다
//그렇기 때문에 함수 내부에선 값이 바뀌지만 함수 외부에선 서로 값이 바뀌지 않는다
//이를 해결하기 위해 call by reference를 사용한다
void swap1(int a, int b) {
	printf("%p, %p\n", &a, &b);
	printf("%d, %d\n", a, b);
	int temp = a;
	a = b;
	b = temp;
	printf("%p, %p\n", &a, &b);
	printf("%d, %d\n", a, b);
}

//callby reference
//인자의 주소값(포인터)을 서로 바꾸게 된다
//값이 아닌 인자의 주소값이 바뀌는 것이기에 함수 밖에서도 스왑이 적용되며 포인터 인자로 호출했으므로 출력시 *를 꼭 붙여주자
//서로의 주소값이 바뀌므로 자연스럽게 값도 서로 바뀐다
void swap2(int* a, int* b) { // a의 주소 b의 주소를 인자로 호출
	printf("%p, %p\n", a, b);// a와 b의 주소를 출력
	printf("%d, %d\n", *a, *b);//a와 b의 값을 출력
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("%p, %p\n", a, b);
	printf("%d, %d\n", *a, *b);
}

/*
//
int main() 
{
	int number[10];
	Random3(number, 10);
	printf("%f\n",average(number, 10));
	//print_array(Random3(number, 10), 10);
	return 0;
}
*/


//문자열, 배열, 포인터에 대해 정리하기
//문자열은  NULL 또는 '\0'로 끝나는 문자들로 이루어진 배열이다
//배열은 같은 데이터타입을 가지는 변수들의 집합이다

//포인터는 주소값을 가르키는 변수이다, *(참조 연산자)를 붙여 선언하며
//int형 포인터는 int * 변수명, char형 포인터는 char * 변수명
//포인터의 크기는 운영체제 크기에 따라 32bit시 4byte, 64bit 시 8byte가 된다


/*
//래퍼런스 변수의 이해, 래퍼런스 사용시와 미 사용시 어떤 차이가 있는가
//레퍼런스 참조 == 변수형 & 변수명 = 변수명 ex) int & ref = value1
int main() {
	int value1 = 5;
	int value2 = 6;
	printf("val1 %p :  %d\n", &value1, value1);
	printf("val2 %p :  %d\n", &value2, value2);

	int ref = value1;
	printf("ref %p :  %d\n", &ref, ref);
	printf("val1 %p :  %d\n", &value1, value1);

	ref = value2;
	printf("ref %p :  %d\n", &ref, ref);
	printf("val2 %p :  %d\n", &value2, value2);

	printf("val1 %p :  %d\n", &value1, value1);
	
}
*/

/*
//래퍼런스를 이용한 스왑, 포인터가 아니더라도 함수 외부의 값이 바뀜을 확인할수 있다.
void swap3(int & a, int & b)
{
	printf("%p %d %p %d \n", &a, a, &b, b);
	int temp = a;
	a = b;
	b = temp;
	printf("%p %d %p %d \n", &a, a, &b, b);

}
int main()
{
	int a = 3,b = 17;
	printf("%p %d %p %d \n", &a, a, &b, b);
	swap3(a, b);
	printf("%p %d %p %d \n", &a, a, &b, b);
}
*/

//컴퓨터의 메모리 구조 정리
//프로그램엔 코드, 데이터, 힙, 스택 영역이 있으며
//코드는 일반적인 우리가 치는 코드가 들어가있는 영역

//데이터 영역은 프로그램 시작부터 끝까지 살아남아야 하는 데이터가 들어가있는 장소
//정적변수와 전역변수가 보통 포함됨

//스택과 힙 영역은 코드와 데이터 영역 아래에서 설정되며 힙은 위에서부터 아래로 스택은 아래에서부터 위로 데이터가 쌓인다
//힙과 스택을 무한정 쌓다보면 둘의 데이터가 만나 오류가 생기니 이 공간을 사용할때에는 주의해야 함
//그래서 동적할당 시 메모리 해제(free)를 꼭 해줘야 한다

//스택 영역은 프로그램이 돌아가면서 지워졌다 생성되었다 하는 데이터들
//함수 내부에서 자연스럽게 생성되고 사라지는 데이터, 함수가 끝나면 메모리도 자연히 해제된다
//함수 내부에서 생성되었다 사라지는 데이터 = 스택 영역, 지역변수와 매개변수 선입후출

//힙 영역은 프로그래머에 의해 임의적으로 공간을 가졌다가 임의적으로 해제할수 있는 공간,
//<동적할당 부분>, 사용자가 임의로 메모리공간을 할당해제를 할수 있는 공간.
//함수가 끝나도 메모리공간 해제(free)를 안 해주면 메모리공간이 계속 남는다.
//new, malloc, calloc, 


//동적할당  malloc(memory allocation)(stdlib.h 에 선언되어있으므로 c에서 사용시 꼭 include해줘야한다)
//인자로 전달된 크기의 바이트 수 만큼 메모리 공간을 만들며 void * 로 반환되는 함수이며
//사용방법은 (값을 받아올 변수) = (변수의 데이터 타입 *) malloc(sizeof(변수 데이터타입) * 사용할 크기)
//ex) int arr = (int *) malloc(sizeof(int) * 10) == int형 데이터타입의 10개 공간을 할당
//사용 후 반드시 free를 사용할 것(메모리 해제) ex) free(arr) << free안에 들어가는 이름은 대입한 변수의 이름(주소?)
//memset == 알아볼 것@@@@@@@
//memset은 배열이나 포인터를 초기화하는 함수이다
//memset(초기화할 변수명, 초기화로 들어갈 숫자, 변수의 크기)

/*
//mallco calloc memset 이해
void main()
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

	printf("arr1 %p %d\n", arr1, *arr1);
	printf("arr1 %p %d\n", arr1 + 1, *(arr1 + 1));
	printf("arr1 %p %d\n", arr1 + 2, *(arr1 + 2));

	free(arr2);
	free(arr1);
}
*/
