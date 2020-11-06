#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>


//���۷��� ����� �����Լ�
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

//10���� �� �� ���� ū��, ������, ��, ��� ����ϱ� �迭
void ArrayTest()// 10���� ũ�⸦ ������ �迭�� �� ���� ������ ���ڸ� ����ִ� �Լ�
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		srand(i);// ������ �õ带 �ο��ϴ� �Լ�
		arr[i] = rand();// ������ ���ڸ� i��°�� ����
	}
	printf("arr�� ��\n");

	for (int i = 0; i < 10; i++)
	{
		printf("%d��° �迭�� �� = %d\n", i+1, arr[i]);
	}
}

int ArrayMax(int * array_name, int array_length) // �迭�� ���� ū ���� ã��
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
