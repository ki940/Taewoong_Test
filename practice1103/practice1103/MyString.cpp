#include "header.h"
#include "MyString.h"
//���ڿ�

//string.h ���� ���ڿ��� ���̸� ���ϴ� �Լ�
int Nstrlen(char* str) {
	int count = 0;
	while (*(str++) != NULL) {
		count++;
	}
	return count;
}

//���ڿ��� ���̸� ���ϰ� ���ϱ�
//������ ���ڿ��� ���� �� �̸� �迭�� �������� �ʴ� ��� ��� ��
/*
int strcompare()
{
	const char *s1 = "StringLongChack";
	char s2[20] = "String";

	strlen(s1) > strlen(s2) ? printf("ù��° ���ڿ��� ũ��\n") : strlen(s1) == strlen(s2) ? printf("�� ���ڿ��� ����\n") : printf("�ι�° ���ڿ��� ũ��\n");

	return 0;
}
*/

//string.h ���� ���ڿ� ����
void Nstrcpy(char* s1, char* s2) {
	char* str = s1;
	while (*s2 != '\0') {
		*(s1++) = *(s2++);
	}
	s1 = '\0';
}

//string.h ���� ���ڿ� ���̱�
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
	//s1���ڿ��� s2����
	int len = sizeof(s1) + sizeof(s2);
	//(���� �޾ƿ� ����) = (������ ������ Ÿ�� *) malloc(sizeof(���� ������Ÿ��) * ����� ũ��)
	char * str = (char*)malloc(sizeof(char) * len);
	// s1 s2�� �ʱ�ȭ ���°� Ȯ�ε��� �ʱ���.
	// ������ ���� ��������, ���ڿ����� �𸣰��
	for (int i = 0; s1[i] != NULL; i++)
	{
		str[i] = s1[i];
	}
	for (int i = sizeof(s1); s2[i] != NULL; i++)
	{
		str[i] = s2[i];
	}
	str[len + 1] = NULL; // ���� �� 8  �ι��� 8 ��������
	//���ڿ��� ������ �κп� �ι����߰�

	s1 = str;
	//str ��ȯ���ϴ� �Լ��� �ƴ� s1���� ������ ���ڿ��� ������
	// �ּҰ��� ���� ������ �ǿ�
	// ���� ������ �ϱ���.
	// ���� ������ ���� ���� �ʴ´�.


	free(str);
	// �޸� �������ϸ� ���󰡿�
	//s1���� �ּҰ��� ������ �Ȼ��� �׷��� ���� �����.
	return;
}
*/

//���ڿ��� ����
void Test_strcpy()
{
	char s1[10] = "copytest";
	char s2[10];

	strcpy(s2, s1); // s2���ڿ��� s1����

	printf("%s\n", s2);
}


//�� ���ڿ� ���̱�
//���� �޸� �Ҵ�� malloc(sizeof(char)*���ڿ��� ����) ���� �����

int TestStringAttech()
{
	char a[10] = "attech";
	char b[20] = "Test"; // a���ڿ��� �ٿ� ������ ���̱⿡ �� ���ڿ��� �ո�ŭ �迭�� Ŀ���Ѵ�

	strcat(b, a); // b�� a�� ����,
	printf("%s", b);
}





//���ڿ� �ȿ��� ���� �˻��ϱ�(������ ���ڷ� ���ڿ� �˻��ϱⰡ ��, �����)
int TestStringSerch()
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

int CompareString(const char* str1, const char* str2) { // ���ڿ� �ΰ� ���ϱ�,
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
