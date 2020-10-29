#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>

//if 1번 대소비교
void Compare(int x, int y)
{
	printf("%c", (x > y ? '>' : x == y ? '=' : '<')); //삼항연산자
}

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


//for문 1번 임의의 숫자의 구구단 출력
// 문자열 배열 -> 동적할당
void mult(int x) 
{
	for (int i = 1; i <=9 ; i++)
	{
		printf("%d X %d = %d \n", x, i, x*i);
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

//함수 사용하지 않고 삼항연산자 이용하여 윤년 출력

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




//for 9번 숫자 n을 받아 n 줄의 n개의 별을 찍기
void star(int x) // 별찍기
{
	for (int i = 0; i < x; i++) // x번 만큼 반복
	{
		for (int p = 0; p < i+1; p++) // i 가 이제까지 반복된 횟수만큼 p 반복
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
		for (int j = x; j > i+1; j--) // i-1-반복횟수 만큼의 공백 표시
		{
			printf(" ");
		}
		for (int k = 0; k <= i ; k++) // 반복횟수만큼의 별을 표시
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


 /*
 //for문 1번 임의의 숫자의 구구단 출력
// 문자열 배열 -> 동적할당

 char* MultTable(int x) // 문자열 배열을 반환.
 {
	 int result = 0;
	 const char* s = "구구단\n";
	 for (int i = 1; i <= 9; i++)// 1부터 9까지 반복
	 {
		 result = x * i; // 곱하기
		 
	 }

 }
 */


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
	char s2[20] = "Hello, world!";    // char 배열에 문자열 저장
	const char * s3 = s1;      // char 배열에 문자열 저장(배열의 크기 생략)

	//s4는 s1을 따라간다, 
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


