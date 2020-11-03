
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
		*(array_name + i) = rand(); //�迭�� �ּ� + i(++)�� ���ӵǴ� �迭�� ������ �̿��� ���� ä���
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
