#include<stdio.h>

//for 9�� ���� n�� �޾� n ���� n���� ���� ���
void star(int x) // �����
{
	for (int i = 0; i < x; i++) // x�� ��ŭ �ݺ�
	{
		for (int p = 0; p < i + 1; p++) // i �� �������� �ݺ��� Ƚ����ŭ p �ݺ�
		{
			printf("*");
		}
		printf("\n");
	}
}



//for 10�� ����� �� ���

void Printstar(int x)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = x; j > i + 1; j--) // i-1-�ݺ�Ƚ�� ��ŭ�� ���� ǥ��
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++) // �ݺ�Ƚ����ŭ�� ���� ǥ��
		{
			printf("*");
		}
		printf("\n");
	}
}

//���ڿ� 1��

int AsciiNum(char x)
{
	return x;
}


/*
//for�� 1�� ������ ������ ������ ���
// ���ڿ� �迭 -> �����Ҵ�

 char* MultTable(int x) // ���ڿ� �迭�� ��ȯ.
 {
	 int result = 0;
	 const char* s = "������\n";
	 for (int i = 1; i <= 9; i++)// 1���� 9���� �ݺ�
	 {
		 result = x * i; // ���ϱ�

	 }

 }
 */