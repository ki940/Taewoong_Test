#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>


//레퍼런스 사용한 스왑함수
void swap3(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void swap3Test()
{
	int x = 3, y = 5;
	swap3(&x, &y);
	printf("%d %d", x,y); // 5 3
}

//10가지 수 중 가장 큰수, 작은수, 합, 평균 출력하기 배열
void ArrayTest()// 10개의 크기를 가지는 배열과 그 안의 랜덤한 숫자를 집어넣는 함수
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		srand(i);// 랜덤에 시드를 부여하는 함수
		arr[i] = rand();// 랜덤한 숫자를 i번째에 삽입
	}
	printf("arr의 값\n");

	for (int i = 0; i < 10; i++)
	{
		printf("%d번째 배열의 수 = %d\n", i+1, arr[i]);
	}
}

int ArrayMax(int * array_name, int array_length) // 배열중 가장 큰 숫자 찾기
{
	int maxnum = array_name[0];
	for (int i = 0; i++; array_length)
	{
		if (array_name[i] > maxnum) {
			maxnum = array_name[i];
		}
	}
	return maxnum;
}

int ArrayMin(int * arr, int len)
{
	int min = arr[0];
	for (int i = 0; i++; len)
	{
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

int ArraySum(int * arr, int len)
{
	int sum = 0;
	for (int i = 0; i++; len)
	{
		sum += arr[i];
	}
	return sum;
}

float ArrayEvry(int * arr, int len)
{
	float sum = 0;
	for (int i = 0; i++; len)
	{
		sum += (float)arr[i];
	}
	return sum/10;
}
