#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>

//if 1�� ��Һ�
void Compare(int x, int y)
{
	printf("%c", (x > y ? '>' : x == y ? '=' : '<')); //���׿�����
}

//if 2�� �����Է����� ���� ��Ÿ����
const char* ShowGrade(int x)
{
	if (x > 100 || x < 0) return  "��ȿ���ڰ� �ƴմϴ�.\n";
	if (x >= 90) {
		return "A";
	}
	else if (x >= 80) {
		return "B";
	}
	else if (x >= 70) {
		return "C";
	}
	else if (x >= 60) {
		return "D";
	}
}


//���׻�� if2�� �� �Է��� 100���� ���� �ڿ���
char ShowGrade2(int x)
{
	return(x >= 90 ? 'A' : x >= 80 ? 'B' : x >= 70 ? 'C' : x >= 60 ? 'D' : 'F'); // ���׿�����
	 //���׿������� �������� �������Ƿ� �ʹ� �� ���ǹ��� ������� �ʴ´�.	
}


//switch case ��� if2��, �� �Է��� 0~100����
const char* ShowGrade3(int x)
{	
	switch (x / 10)
	{
	case 10:
		return "����~\n";
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


//for�� 1�� ������ ������ ������ ���
// ���ڿ� �迭 -> �����Ҵ�
void mult(int x) 
{
	for (int i = 1; i <=9 ; i++)
	{
		printf("%d X %d = %d \n", x, i, x*i);
	}
}



//if 3�� ���� äũ
void Chack(int x) // 400�� ����� ��, 100�� ����� ����, 4�� ����� ��
{
	if (x % 400 == 0)
	{
		printf("������ �ƴϴ�\n");
	}
	if (x % 100 == 0)
	{
		printf("������ �ƴϴ�\n");
	}
	else if (x % 4 == 0)
	{
		printf("�����̴�\n");
	}
	else printf("������ �ƴϴ�\n");
}

//�Լ� ������� �ʰ� ���׿����� �̿��Ͽ� ���� ���

//if 4�� ��и� ���� 
int Quad(int x, int y)//��и� ���� �Լ�
{
	if (x > 1000 || x < -1000 || y>1000 || y < -1000) return 0; // 0 = ����
	 
	if (x == 0 && y == 0) return 0; // x.y�� �Ѵ� 0���̸� ����
	else if (x == 0 || y == 0) return 0; // 0 = ��и��� �ƴϴ�
	else
	{
		if (x > 0) //x�� ����϶�
		{
			if (y > 0) return 1;//y�� ����� 1��и�
			else return 4; //y�� ������ 4��и�
		}
		else // x�� �����ϋ�
		{
			if (y > 0) return 2; // y�� ����� 2 ��и�
			else return 3; //y�� ������ 3��и�
		}
	}
}




//for 9�� ���� n�� �޾� n ���� n���� ���� ���
void star(int x) // �����
{
	for (int i = 0; i < x; i++) // x�� ��ŭ �ݺ�
	{
		for (int p = 0; p < i+1; p++) // i �� �������� �ݺ��� Ƚ����ŭ p �ݺ�
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
		for (int j = x; j > i+1; j--) // i-1-�ݺ�Ƚ�� ��ŭ�� ���� ǥ��
		{
			printf(" ");
		}
		for (int k = 0; k <= i ; k++) // �ݺ�Ƚ����ŭ�� ���� ǥ��
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


//�������� ����
 /*
#include <string.h>    // strlen �Լ��� ����� ��� ����

int main()
{
	const char *s1 = "Hello";       // �����Ϳ� ���ڿ� Hello�� �ּ� ����
	char s2[] = { 'H', 'e', 'l', 'l', 'o'};    // ũ�Ⱑ 10�� char�� �迭�� �����ϰ� ���ڿ� �Ҵ�
	int s3[] = { 1, 2, 3, 4, 5 };
	int * s4 = s3; //������ ����

	
	printf("%c\n", *s2);
	printf("%d\n", strlen(s1));    // 5: strlen �Լ��� ���ڿ��� ���̸� ����
	printf("%d\n", strlen(s2));    // 5: strlen �Լ��� ���ڿ��� ���̸� ����
	printf("%d\n", sizeof(s1));
	printf("%d\n", sizeof(s2));
	printf("%d\n", sizeof(s3));
	printf("%d\n", sizeof(s3)/sizeof(int)); // 
	
	printf("%d\n", s3[0]);//�迭�� ù��° ��
	printf("%d\n", s4[0]);//�������� ù��° �� �迭�� �ּҰ��� �ҷ������� �迭�� �̿� �����Ѱ� Ȯ��
	printf("%p\n", s3);//�迭�� �ּҰ�
	printf("%p\n", s4);//�������� �ּҰ�
	printf("%d\n", *s4);//�������� �ּҰ� ����Ű�� ��
	printf("%p %p %p\n", s4-1, s4, s4+1);//�������� �ּҰ�
	printf("%d %d %d\n", *(s4 - 1), *s4, *(s4 + 1));//�������� �ּҰ��� �̵������� ���빰 ��


	return 0;
}
*/

 
 /*
//�����Ϳ� �迭 �׸��� ���ڿ�
//���ڿ� ���۷����� ���ذ� �� �ʿ�, �̴� ���Թ��� �ּҸ� ��� ���󰡴µ� ��°�� �̷��� �Ǵ°�?
int main()
{
	const char *s1 = "Hello, world!";       // char �����Ϳ� ���ڿ��� �޸� �ּҸ� ����
	char s2[20] = "Hello, world!";    // char �迭�� ���ڿ� ����
	const char * s3 = s1;      // char �迭�� ���ڿ� ����(�迭�� ũ�� ����)

	//s4�� s1�� ���󰣴�, 
	const char* & s4 = s1;	//���ڿ� ���۷��� ���: s1 �� ���� �� �ٸ� �̸�(����)
	
	printf("s1 %p %s\n", s1, s1);
	printf("s2 %p %s\n", s2, s2);
	printf("s3 %p %s\n", s3, s3);
	printf("s4 %p %s\n", s4, s4);

	printf("s1�� Hello2 ����\n");
	s1 = "Hello2"; // s1�� ���ο� ���ڿ��� �����߰� ���ڿ� ���۷����� ����� s4�� �ٲ� s1�� �ּҸ� �޴´�
	printf("s1 %p %s\n", s1, s1);
	printf("s2 %p %s\n", s2, s2);
	printf("s3 %p %s\n", s3, s3);
	printf("s4 %p %s\n", s4, s4);
	return 0;
}
*/



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
	while(*(str++) != NULL){//���ڿ��� ���� NULL�� �ƴҶ����� �ݺ�
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


//2020_10_27

//�迭�� �̿��� �迭 ������ ��� ���ϱ�, 
float average(int * array_name, int array_length)//float������ ���������Ƿ� ����� �� %f�� ������� ���� ����
{
	float aver;
	float sum = 0;
	for (int i = 0; i < array_length; i++) {
		sum += array_name[i];
	}
	aver = sum / array_length;
	return aver;
}

//���̰� ������ �迭�� for�� rand�Լ��� �̿��� �迭 ���� ä���, 
int* Random1(int* array_name, int array_length) {
	for (int i = 0; i < array_length; i++) {
		srand(i);//�õ尪�� �ִ� rand�Լ�, i�� �����ϸ鼭 �õ尪�� �ڿ��� �ٲ��.
		array_name[i] = rand();//rand�Լ� ���� time����� stdlib��� �ʼ�
	}
	return array_name;
}

int* Random2(int* array_name, int array_length) {
	for (int i = 0; i < array_length; i++) {
		srand(i);
		*(array_name+i) = rand(); //�迭�� �ּ� + i(++)�� ���ӵǴ� �迭�� ������ �̿��� ���� ä���
	}
	return array_name;
}

int* Random3(int* array_name, int array_length) {
	for (int i = 0; i < array_length; i++) {
		srand(i);
		*(array_name++) = rand();//�迭�� �ּ� ++(����������)�� ���ӵǴ� �迭�� ������ �̿��� ���� ä���
	}
	return (array_name - array_length);
}

void print_array(int* array_name, int array_length) {
	for (int i = 0; i < array_length; i++) {
		printf("%p:  %d\n", &array_name[i], array_name[i]);//%p(������(�ּ�) ���) �ּҿ� ���� Ȯ���Ѵ�
	}
}
// �������� ��������
//call by value
//���������� ������, �ּҰ��� �ƴ϶� �Լ� ���� �� ������ ������ ���� �޾ƿͼ� �� �ΰ��� ���� �ٲ۴�
//�׷��� ������ �Լ� ���ο��� ���� �ٲ����� �Լ� �ܺο��� ���� ���� �ٲ��� �ʴ´�
//�̸� �ذ��ϱ� ���� call by reference�� ����Ѵ�
void swap1(int a, int b) {
	printf("%p, %p\n", &a, &b);
	printf("%d, %d\n", a, b);
	int temp = a;
	a = b;
	b = temp;
	printf("%p, %p\n", &a, &b);
	printf("%d, %d\n", a, b);
}

//callby reference
//������ �ּҰ�(������)�� ���� �ٲٰ� �ȴ�
//���� �ƴ� ������ �ּҰ��� �ٲ�� ���̱⿡ �Լ� �ۿ����� ������ ����Ǹ� ������ ���ڷ� ȣ�������Ƿ� ��½� *�� �� �ٿ�����
//������ �ּҰ��� �ٲ�Ƿ� �ڿ������� ���� ���� �ٲ��
void swap2(int* a, int* b) { // a�� �ּ� b�� �ּҸ� ���ڷ� ȣ��
	printf("%p, %p\n", a, b);// a�� b�� �ּҸ� ���
	printf("%d, %d\n", *a, *b);//a�� b�� ���� ���
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("%p, %p\n", a, b);
	printf("%d, %d\n", *a, *b);
}

/*
//
int main() 
{
	int number[10];
	Random3(number, 10);
	printf("%f\n",average(number, 10));
	//print_array(Random3(number, 10), 10);
	return 0;
}
*/


//���ڿ�, �迭, �����Ϳ� ���� �����ϱ�
//���ڿ���  NULL �Ǵ� '\0'�� ������ ���ڵ�� �̷���� �迭�̴�
//�迭�� ���� ������Ÿ���� ������ �������� �����̴�

//�����ʹ� �ּҰ��� ����Ű�� �����̴�, *(���� ������)�� �ٿ� �����ϸ�
//int�� �����ʹ� int * ������, char�� �����ʹ� char * ������
//�������� ũ��� �ü�� ũ�⿡ ���� 32bit�� 4byte, 64bit �� 8byte�� �ȴ�


