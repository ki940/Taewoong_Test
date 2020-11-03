#include<stdio.h>

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