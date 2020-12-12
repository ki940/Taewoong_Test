#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	const char * str = "hello world"; //11
	printf("%d\n", strlen(str)); // 11
	printf("%d\n", sizeof(str)); //4 ?? 
	
	char str2[] = "hello world"; 
	printf("str2 = %d\n", strlen(str2)); // 11
	printf("str2 = %d\n", sizeof(str2)/sizeof(char)); //412

	
	int num[] = { 1, 2, 3 };
	printf("num = %d\n", sizeof(num)); //12
	printf("num len = %d\n", sizeof(num)/sizeof(int)); //3

	printf("str = %d\n", _countof(str2));
	printf("str = %d\n", _countof(num));
}