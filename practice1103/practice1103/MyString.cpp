#include "header.h"
#include "MyString.h"
//문자열

//string.h 없이 문자열의 길이를 구하는 함수
int Nstrlen(char* str) {
	int count = 0;
	while (*(str++) != NULL) {
		count++;
	}
	return count;
}

//문자열의 길이를 구하고 비교하기
//임의의 문자열을 받을 때 미리 배열을 설정하지 않는 방법 물어볼 것
/*
int strcompare()
{
	const char *s1 = "StringLongChack";
	char s2[20] = "String";

	strlen(s1) > strlen(s2) ? printf("첫번째 문자열이 크다\n") : strlen(s1) == strlen(s2) ? printf("두 문자열은 같다\n") : printf("두번째 문자열이 크다\n");

	return 0;
}
*/

//string.h 없이 문자열 복사
void Nstrcpy(char* s1, char* s2) {
	char* str = s1;
	while (*s2 != '\0') {
		*(s1++) = *(s2++);
	}
	s1 = '\0';
}

//string.h 없이 문자열 붙이기
void Nstrcat(char* s1, char* s2) {
	char* str = s1;
	while (*s1++ != '\0');
	while (*s2 != '\0') {
		*s1 = *s2;
		s1++;
		s2++;
	}
	s1 = '\0';
}

/*
void strcpy(char* s1, char* s2) {
	//s1문자열에 s2복사
	int len = sizeof(s1) + sizeof(s2);
	//(값을 받아올 변수) = (변수의 데이터 타입 *) malloc(sizeof(변수 데이터타입) * 사용할 크기)
	char * str = (char*)malloc(sizeof(char) * len);
	// s1 s2의 초기화 상태가 확인되지 않구요.
	// 쓰레기 값인 상태인지, 문자열인지 모르고요
	for (int i = 0; s1[i] != NULL; i++)
	{
		str[i] = s1[i];
	}
	for (int i = sizeof(s1); s2[i] != NULL; i++)
	{
		str[i] = s2[i];
	}
	str[len + 1] = NULL; // 길이 가 8  널문자 8 다음ㅇ에
	//문자열이 끝나는 부분에 널문자추가

	s1 = str;
	//str 반환한하는 함수가 아닌 s1으로 복사한 문자열이 나오죠
	// 주소값만 복사 대입이 되요
	// 얉은 복사라고 하구요.
	// 값이 대입이 전혀 되지 않는다.


	free(str);
	// 메모리 해제를하면 날라가요
	//s1에는 주소값만 대입이 된상태 그래서 값이 없어요.
	return;
}
*/

//문자열의 복사
void Test_strcpy()
{
	char s1[10] = "copytest";
	char s2[10];

	strcpy(s2, s1); // s2문자열에 s1복사

	printf("%s\n", s2);
}


//두 문자열 붙이기
//동적 메모리 할당과 malloc(sizeof(char)*문자열의 길이) 등을 물어본다

int TestStringAttech()
{
	char a[10] = "attech";
	char b[20] = "Test"; // a문자열을 붙여 포함할 것이기에 두 문자열의 합만큼 배열이 커야한다

	strcat(b, a); // b에 a를 붙임,
	printf("%s", b);
}





//문자열 안에서 문자 검색하기(본문은 문자로 문자열 검색하기가 됨, 물어볼것)
int TestStringSerch()
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

int CompareString(const char* str1, const char* str2) { // 문자열 두개 비교하기,
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
