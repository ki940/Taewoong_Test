#include<stdio.h>
//2020_10_20

/*

//���ڿ��� ���̸� ���ϰ� ���ϱ�
//������ ���ڿ��� ���� �� �̸� �迭�� �������� �ʴ� ��� ��� ��

#include<string.h> // ���ڿ� ���� ���

int main()
{
	const char *s1 = "StringLongChack";
	char s2[20] = "String";

	strlen(s1) > strlen(s2) ? printf("ù��° ���ڿ��� ũ��\n") : strlen(s1) == strlen(s2) ? printf("�� ���ڿ��� ����\n") : printf("�ι�° ���ڿ��� ũ��\n");

	return 0;
}

*/


/*
//���ڿ��� ����

#include<string.h>

int main()
{
	char s1[10] = "copytest";
	char s2[10];

	strcpy(s2, s1); // s2���ڿ��� s1����

	printf("%s\n", s2);
}
*/


/*
//�� ���ڿ� ���̱�
//���� �޸� �Ҵ�� malloc(sizeof(char)*���ڿ��� ����) ���� �����
#include<string.h>

int main()
{
	char a[10] = "attech";
	char b[20] = "Test"; // a���ڿ��� �ٿ� ������ ���̱⿡ �� ���ڿ��� �ո�ŭ �迭�� Ŀ���Ѵ�

	strcat(b, a); // b�� a�� ����,
	printf("%s", b);
}

*/


/*
//���ڿ� �ȿ��� ���� �˻��ϱ�(������ ���ڷ� ���ڿ� �˻��ϱⰡ ��, �����)
#include<string.h>
int main()
{
	char s1[30] = "a about find a in charstring";
	int aNum = 0; // �˻��� a�� ����

	char *ptr = strchr(s1, 'a'); //d�� �����ϴ� ���ڿ��� s1���� �˻��ؼ� �� ���ڿ��� ������ġ�� ��ȯ�Ѵ�?

	while (ptr != NULL)
	{
		printf("%s\n", ptr); // �˻��� ���ڿ� ���
		ptr = strchr(ptr + 1, 'a'); // �����Ϳ� 1�� ���� �˻��� a������ a�� ã��
		aNum++;
	}
	printf("�˻���a�� Ƚ��? %d", aNum);
}

*/

//2020 10 24

//���ڿ� ���� ���ϰ� ���ϱ�, string ����

int longchack(const char *a)//���ڿ��� ���� ���ϱ�
{
	for (int x = 0; 1; x++)
	{
		if (a[x] == '\0') return x; //x �� ���ڿ��� ����
	}
}

int len(const char* str) {//���ڿ��� ���� ���ϱ�
	int count = 0;
	while (*(str++) != NULL) {//���ڿ��� ���� NULL�� �ƴҶ����� �ݺ�
		count++;
	}
	return count;
}

int compare(const char* str1, const char* str2) { // ���ڿ� �ΰ� ���ϱ�,
	if (len(str1) > len(str2)) // ���� ���� len�Լ��� �̿��� ���̸� ���ϰ� ũ�ų� ���ų� ���� ��츦 �����Ѵ�.
	{
		return 1;
	}
	else if (len(str1) == len(str2))
	{
		return 0;
	}
	else
		return -1; // str1�� ��� 1, ������ 0 ª���� -1
}

