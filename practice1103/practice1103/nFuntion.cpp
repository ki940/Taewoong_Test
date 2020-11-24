#include "header.h"
#include "nFunction.h"


//if 1�� ��Һ�
char Compare(int x, int y)
{
	//printf("%c", (x > y ? '>' : x == y ? '=' : '<')); //���׿����� 
	return (x > y ? '>' : x == y ? '=' : '<');
	//�տ����� �ں��� ũ�� '>' ������ '=' ������ '<' ǥ���ϴ� �Լ�
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


//���ڿ�, �迭, �����Ϳ� ���� �����ϱ�
//���ڿ���  NULL �Ǵ� '\0'�� ������ ���ڵ�� �̷���� �迭�̴�
//�迭�� ���� ������Ÿ���� ������ �������� �����̴�

//�����ʹ� �ּҰ��� ����Ű�� �����̴�, *(���� ������)�� �ٿ� �����ϸ�
//int�� �����ʹ� int * ������, char�� �����ʹ� char * ������
//�������� ũ��� �ü�� ũ�⿡ ���� 32bit�� 4byte, 64bit �� 8byte�� �ȴ�



//���۷����� �̿��� ����, �����Ͱ� �ƴϴ��� �Լ� �ܺ��� ���� �ٲ��� Ȯ���Ҽ� �ִ�.
void swap3(int & x, int & y)
{
	printf("swap3: %p %d %p %d \n", &x, x, &y, y);
	int temp = x; 
	x = y;
	y = temp;
	printf("swap3: %p %d %p %d \n", &x, x, &y, y);
}




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


//10���� �� �� ���� ū��, ������, ��, ��� ����ϱ� �迭
int*  ArrayTest()// 10���� ũ�⸦ ������ �迭�� �� ���� ������ ���ڸ� ����ִ� �Լ�
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
		printf("%d��° �迭�� �� = %d\n", i + 1, arr[i]);
	}
	return arr;
}

void  ArrayTest2(int* arr, int size)// size�� ũ�⸦ ������ �迭�� �� ���� ������ ���ڸ� ����ִ� �Լ�
{
	for (int i = 0; i < size; i++)
	{
		srand(i);// ������ �õ带 �ο��ϴ� �Լ�
		arr[i] = rand();// ������ ���ڸ� i��°�� ����
	}
}

void ArrayPrint(int* arr, int size) {
	printf("arr�� ��\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d��° �迭�� �� = %d\n", i + 1, arr[i]);
	}
}

int ArrayMax(int * array_name, int array_length) // �迭�� ���� ū ���� ã��
{
	int maxnum = array_name[0];
	for (int i = 0; i < array_length; i++)
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
	for (int i = 0; i < len; i++)
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
	for (int i = 0; i < len - 1; i++)
	{
		sum += arr[i];
	}
	return sum;
}

float ArrayEvry(int * arr, int len)
{
	float sum = 0;
	for (int i = 0; i < len - 1; i++)
	{
		sum += (float)arr[i];
	}
	return sum / len;
}
