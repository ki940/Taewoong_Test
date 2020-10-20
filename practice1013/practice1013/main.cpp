#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
//if 1번 대소비교

int main()
{
	int x, y;
	while (1) {
		scanf("%d %d", &x, &y);

		printf("%c", (x > y ? '>' : x == y ? '=' : '<')); //삼항연사자?
	}
}

*/


/*
//if 2번 점수입력으로 성적 나타내기

int main()
{
	int x; //입력정수
	while (1) {
		printf("점수를 입력하시오, 유효숫자는 0부터 100까지입니다\n");
		scanf("%d", &x);

		if (x > 100) {
			printf("유효숫자보다 큽니다\n");
		}
		else if (x >= 90) {
			printf("A\n");
		}
		else if (x >= 80) {
			printf("B\n");
		}
		else if (x >= 70) {
			printf("C\n");
		}
		else if (x >= 60) {
			printf("D\n");
		}
		else if (x < 0) {
			printf("유효숫자보다 작습니다\n");
		}
		else printf("F\n");
	}
}

*/

/*
//삼항사용 if2번
int main()
{
	int x; //입력정수
	while (1) {
		printf("점수를 입력하시오, 유효숫자는 0부터 100까지입니다\n");
		scanf("%d", &x);
		printf("%c", (x >= 90 ? 'A' : x >= 80 ? 'B' : x >= 70 ? 'C' : x >= 60 ? 'D' : 'F')); // 삼항연산자
		 //삼항연산자의 가독성이 떨어지므로 너무 긴 조건문은 사용하지 않는다.
		
	}
}
*/

/*
//switch case 사용 if2번
int main()
{
	int x;
	
	while (1)
	{
		scanf("%d", &x);
		switch (x / 10)
		{
		case 10:
			printf("만점~\n");
			break;
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
}
*/

/*
//for문 1번 임의의 숫자의 구구단 출력

void mult(int x) 
{
	for (int i = 1; i <=9 ; i++)
	{
		printf("%d X %d = %d \n", x, i, x*i);
	}
}

int main() 
{
	int x;
	while (1) {
		printf("임의의 정수를 입력하시오");
		scanf("%d", &x);
		mult(x);
	}
}
*/



/*
//if 3번 윤년 채크
// 삼항연산자 제작 실패, 물어볼 것

bool Chack(int x) // 400의 배수면 참, 100의 배수면 거짓, 4의 배수면 참
{
	if (x % 400 == 0)
	{
		return 1;
	}
	else
	{
		if (x % 100 == 0)
		{
			return 0;
		}
		else if (x % 4 == 0)
		{
			return 1;
		}
		else
			return 0;
			
	}
}

int main()
{
	int year;
	
	while (1) {
		printf("연도를 입력하시오\n");
		scanf("%d", &year);

		if (Chack(year) > 0) printf("윤년\n");
		else printf("윤년이 아니다\n");
	}
	return 0;
}
*/

//함수 사용하지 않고 삼항연산자 이용하여 윤년 출력


/*
//if 4번 사분면 고르기 

int Quad(int x, int y)//사분면 구분 함수
{
	if (x > 1000 || x < -1000 || y>1000 || y < -1000) return 0; // 0 = 에러
	else {
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
}

int main()
{
	int x, y;
	while (1)
	{
		printf("X값을 입력\n");
		scanf("%d", &x);
		printf("Y값을 입력\n");
		scanf("%d", &y);
		if (Quad(x, y) == 0) printf("Error\n\n");
		else printf("%d 사분면 \n\n", Quad(x, y));

	}

	return 0;

}
*/


/*
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

int main()
{
	int x;
	printf("숫자 n입력");
	scanf("%d", &x);
	star(x);


}

*/


/*
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

int main()
{
	int x = 5;

	Printstar(x);
}

*/

/*
//문자열 1번

int main()
{
	char x;
		printf("알파벳 입력\n");
		scanf("%c", &x);
		printf("아스키 번호는 %d이다\n", x);

	return 0;
}
*/

/*
//포인터의 이해
#include <string.h>    // strlen 함수가 선언된 헤더 파일

int main()
{
	const char *s1 = "Hello";       // 포인터에 문자열 Hello의 주소 저장
	char s2[] = { 'H', 'e', 'l', 'l', 'o', };    // 크기가 10인 char형 배열을 선언하고 문자열 할당
	int s3[] = { 1, 2, 3, 4, 5 };
	int * s4 = s3; //포인터 선언

	printf("%d\n", strlen(s1));    // 5: strlen 함수로 문자열의 길이를 구함
	printf("%d\n", strlen(s2));    // 5: strlen 함수로 문자열의 길이를 구함
	printf("%d\n", sizeof(s1));
	printf("%d\n", sizeof(s2));
	printf("%d\n", sizeof(s3));
	printf("%d\n", sizeof(s3)/sizeof(int));
	printf("%d\n", s3[0]);//배열의 첫번째 값
	printf("%d\n", s4[0]);//포인터의 첫번째 값
	printf("%p\n", s3);//배열의 주소값
	printf("%p\n", s4);//포인터의 주소값
	printf("%d\n", *s4);//포인터의 주소가 가리키는 값
	printf("%p %p %p\n", s4-1, s4, s4+1);//포인터의 주소값
	printf("%d %d %d\n", *(s4 - 1), *s4, *(s4 + 1));//포인터의 주소값


	return 0;
}
*/

/*
//포인터와 배열 그리고 문자열
int main()
{
	const char *s1 = "Hello, world!";       // char 포인터에 문자열의 메모리 주소를 저장
	char s2[20] = "Hello, world!";    // char 배열에 문자열 저장
	const char * s3 = s1;      // char 배열에 문자열 저장(배열의 크기 생략)
	const char* & s4 = s1;	//문자열 래퍼런스 사용: s1 에 대한 또 다른 이름(별명)
	s1 = "Hello2";
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