#include<stdio.h>
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
	while (*(str++) != NULL) {//문자열의 값이 NULL이 아닐때까지 반복
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

