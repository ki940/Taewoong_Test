#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>






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
	char s2[20] = "Hello, world!";    // char �迭�� ���ڿ� ����,
	const char * s3 = s1;      // char �迭�� ���ڿ� ����(�迭�� ũ�� ����)s1�ּҸ� �����ؼ� ��

	//s4�� s1�� ���󰣴�, s1�� �ּҸ� �����ϴ� ��
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


/*
//���۷��� ������ ����, ���۷��� ���ÿ� �� ���� � ���̰� �ִ°�
//���۷��� ���� == ������ & ������ = ������ ex) int & ref = value1
int main() {
	int value1 = 5;
	int value2 = 6;
	printf("val1 %p :  %d\n", &value1, value1);
	printf("val2 %p :  %d\n", &value2, value2);

	int ref = value1;
	printf("ref %p :  %d\n", &ref, ref);
	printf("val1 %p :  %d\n", &value1, value1);

	ref = value2;
	printf("ref %p :  %d\n", &ref, ref);
	printf("val2 %p :  %d\n", &value2, value2);

	printf("val1 %p :  %d\n", &value1, value1);
	
}
*/

/*
//���۷����� �̿��� ����, �����Ͱ� �ƴϴ��� �Լ� �ܺ��� ���� �ٲ��� Ȯ���Ҽ� �ִ�.
void swap3(int & a, int & b)
{
	printf("%p %d %p %d \n", &a, a, &b, b);
	int temp = a;
	a = b;
	b = temp;
	printf("%p %d %p %d \n", &a, a, &b, b);

}
int main()
{
	int a = 3,b = 17;
	printf("%p %d %p %d \n", &a, a, &b, b);
	swap3(a, b);
	printf("%p %d %p %d \n", &a, a, &b, b);
}
*/

//��ǻ���� �޸� ���� ����
//���α׷��� �ڵ�, ������, ��, ���� ������ ������
//�ڵ�� �Ϲ����� �츮�� ġ�� �ڵ尡 ���ִ� ����

//������ ������ ���α׷� ���ۺ��� ������ ��Ƴ��ƾ� �ϴ� �����Ͱ� ���ִ� ���
//���������� ���������� ���� ���Ե�

//���ð� �� ������ �ڵ�� ������ ���� �Ʒ����� �����Ǹ� ���� ���������� �Ʒ��� ������ �Ʒ��������� ���� �����Ͱ� ���δ�
//���� ������ ������ �״ٺ��� ���� �����Ͱ� ���� ������ ����� �� ������ ����Ҷ����� �����ؾ� ��
//�׷��� �����Ҵ� �� �޸� ����(free)�� �� ����� �Ѵ�

//���� ������ ���α׷��� ���ư��鼭 �������� �����Ǿ��� �ϴ� �����͵�
//�Լ� ���ο��� �ڿ������� �����ǰ� ������� ������, �Լ��� ������ �޸𸮵� �ڿ��� �����ȴ�
//�Լ� ���ο��� �����Ǿ��� ������� ������ = ���� ����, ���������� �Ű����� ��������

//�� ������ ���α׷��ӿ� ���� ���������� ������ �����ٰ� ���������� �����Ҽ� �ִ� ����,
//<�����Ҵ� �κ�>, ����ڰ� ���Ƿ� �޸𸮰����� �Ҵ������� �Ҽ� �ִ� ����.
//�Լ��� ������ �޸𸮰��� ����(free)�� �� ���ָ� �޸𸮰����� ��� ���´�.
//new, malloc, calloc, 


//�����Ҵ�  malloc(memory allocation)(stdlib.h �� ����Ǿ������Ƿ� c���� ���� �� include������Ѵ�)
//���ڷ� ���޵� ũ���� ����Ʈ �� ��ŭ �޸� ������ ����� void * �� ��ȯ�Ǵ� �Լ��̸�
//������� (���� �޾ƿ� ����) = (������ ������ Ÿ�� *) malloc(sizeof(���� ������Ÿ��) * ����� ũ��)
//ex) int arr = (int *) malloc(sizeof(int) * 10) == int�� ������Ÿ���� 10�� ������ �Ҵ�
//��� �� �ݵ�� free�� ����� ��(�޸� ����) ex) free(arr) << free�ȿ� ���� �̸��� ������ ������ �̸�(�ּ�?)
//memset == �˾ƺ� ��@@@@@@@
//memset�� �迭�̳� �����͸� �ʱ�ȭ�ϴ� �Լ��̴�
//memset(�ʱ�ȭ�� ������, �ʱ�ȭ�� �� ����, ������ ũ��)

/*
//mallco calloc memset ����
void main()
{
	int * arr1 = (int*)malloc(sizeof(int) * 3);
	int * arr2 = (int*)calloc(3, sizeof(int));

	printf("arr1 %p %d\n", arr1, *arr1);
	printf("arr1 %p %d\n", arr1 + 1, *(arr1 + 1));
	printf("arr1 %p %d\n", arr1 + 2, *(arr1 + 2));

	printf("arr2 %p %d\n", arr2, *arr2);
	*(arr2 + 1) = 1;
	printf("arr2 %p %d\n", arr2 + 1, *(arr2 + 1));
	*(arr2 + 2) = 2;
	printf("arr2 %p %d\n", arr2 + 2, *(arr2 + 2));

	memset(arr1, -1, sizeof(int) * 3);

	printf("arr1 %p %d\n", arr1, *arr1);
	printf("arr1 %p %d\n", arr1 + 1, *(arr1 + 1));
	printf("arr1 %p %d\n", arr1 + 2, *(arr1 + 2));

	free(arr2);
	free(arr1);
}
*/
