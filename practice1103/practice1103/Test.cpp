#include"header.h"
#include"Test.h"


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

//for
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


 //�������� ����
int ArrayPointer()
{
	const char *s1 = "Hello";       // �����Ϳ� ���ڿ� Hello�� �ּ� ����
	char s2[] = { 'H', 'e', 'l', 'l', 'o' };    // ũ�Ⱑ 10�� char�� �迭�� �����ϰ� ���ڿ� �Ҵ�
	int s3[] = { 1, 2, 3, 4, 5 };
	int * s4 = s3; //������ ����

	/*
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
	*/
	s4--;
	printf("%p %d \n", s4, *s4);
	s4++;
	printf("%p %d \n", s4, *s4);
	s4++;
	printf("%p %d \n", s4, *s4);

	return 0;
}


//������

//�����Ϳ� �迭 �׸��� ���ڿ�
//���ڿ� ���۷����� ���ذ� �� �ʿ�, �̴� ���Թ��� �ּҸ� ��� ���󰡴µ� ��°�� �̷��� �Ǵ°�?
int Pointer1()
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

int Test_swap2()
{
	int number[10];
	Random3(number, 10);
	printf("%f\n", average(number, 10));
	//print_array(Random3(number, 10), 10);
	return 0;
}


//���۷��� ������ ����, ���۷��� ���ÿ� �� ���� � ���̰� �ִ°�
//���۷��� ���� == ������ & ������ = ������ ex) int & ref = value1
int Test_ReferenceVariable() {
	int value1 = 5;
	int value2 = 6;
	printf("val1 %p :  %d\n", &value1, value1);
	printf("val2 %p :  %d\n", &value2, value2);

	int& ref = value1;
	printf("ref %p :  %d\n", &ref, ref);
	printf("val1 %p :  %d\n", &value1, value1);
	printf("val2 %p :  %d\n", &value2, value2);

	ref = value2;
	printf("ref %p :  %d\n", &ref, ref);
	printf("val1 %p :  %d\n", &value1, value1);
	printf("val2 %p :  %d\n", &value2, value2);
	return 0;
}

//���۷����� �̿��� ����, �����Ͱ� �ƴϴ��� �Լ� �ܺ��� ���� �ٲ��� Ȯ���Ҽ� �ִ�.
void Test_swap3()
{
	int a = 3, b = 17;
	printf("%p %d %p %d \n", &a, a, &b, b);
	swap3(a, b); 
	printf("%p %d %p %d \n", &a, a, &b, b);
}



//2020_10_27


//����ü? ����ڰ� ���Ƿ� ����� ���ο� �ڷ���


void input(PERSON* p2, PERSON* p) {
	p2->age = p->age;
	p2->name = p->name;
	strcpy(p2->gen, p->gen);
	p2->ID = p->ID;
	p2->score = p->score;
}


// �޸� ���� �Ұ�
PERSON* input(PERSON* p) {
	PERSON* p2 = (PERSON*)malloc(sizeof(PERSON));
	p2->age = p->age;
	p2->name = p->name;
	strcpy(p2->gen, p->gen);
	p2->ID = p->ID;
	p2->score = p->score;
	return p2;
}

void print(PERSON* p) {
	printf("%s %d %s %d %d\n", p->name, p->age, p->gen, p->ID, p->score);
}

void  print_size()
{
	printf("sizeof(PSERSON): %d\n", sizeof(PERSON));
	printf("sizeof(PSERSON::age): %d\n", sizeof(PERSON::age));
	printf("sizeof(PSERSON::name): %d\n", sizeof(PERSON::name));
	printf("sizeof(PSERSON::gen): %d\n", sizeof(PERSON::gen));
	printf("sizeof(PSERSON::ID): %d\n", sizeof(PERSON::ID));
	printf("sizeof(PSERSON::score): %d\n", sizeof(PERSON::score));
}


int TestStruct()
{
	PERSON hong = { 19, const_cast<char*>("ȫ�浿"), "male", 1234, 100 };

	PERSON chal;
	chal.age = 19;
	chal.name = const_cast<char*>("�̼���");
	// chal.gen = "female"; //���� �迭�� ����Ǿ char* �� ���Ե��� ����.
	strcpy(chal.gen, "female");
	chal.ID = 5678;
	chal.score = 80;

	PERSON* sue = (PERSON*)malloc(sizeof(PERSON));
	sue->age = 17;
	sue->name = const_cast<char*>("��ö��");
	strcpy(sue->gen, "male");
	sue->ID = 2424;
	sue->score = 90;

	print(&hong);
	print(&chal);
	print(sue);

	PERSON* kim = (PERSON*)malloc(sizeof(PERSON));
	input(kim, &hong);
	print(kim);

	PERSON* lee = (PERSON*)malloc(sizeof(PERSON));
	lee->input(lee, sue);
	print(lee);

	free(lee);
	free(kim);
	free(sue);
	return 0;
}


//�����Ҵ�  malloc(memory allocation)(stdlib.h �� ����Ǿ������Ƿ� c���� ���� �� include������Ѵ�)
//���ڷ� ���޵� ũ���� ����Ʈ �� ��ŭ �޸� ������ ����� void * �� ��ȯ�Ǵ� �Լ��̸�
//������� (���� �޾ƿ� ����) = (������ ������ Ÿ�� *) malloc(sizeof(���� ������Ÿ��) * ����� ũ��)
//ex) int arr = (int *) malloc(sizeof(int) * 10) == int�� ������Ÿ���� 10�� ������ �Ҵ�
//��� �� �ݵ�� free�� ����� ��(�޸� ����) ex) free(arr) << free�ȿ� ���� �̸��� ������ ������ �̸�(�ּ�?)
//memset == �˾ƺ� ��@@@@@@@ string/h �ʿ�
//memset�� �迭�̳� �����͸� �ʱ�ȭ�ϴ� �Լ��̴�
//memset(�ʱ�ȭ�� ������, �ʱ�ȭ�� �� ����, ������ ũ��)

//mallco calloc memset ����
void Test_DynamicAllocation()
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
	// memset == �����Ҵ� �ʱ�ȭ �Լ�,
	//���� memset(�ʱ�ȭ�� �迭 �̸�, �ʱ�ȭ�� ��, �ʱ�ȭ�� �迭�� ũ��);
	printf("arr1 %p %d\n", arr1, *arr1);
	printf("arr1 %p %d\n", arr1 + 1, *(arr1 + 1));
	printf("arr1 %p %d\n", arr1 + 2, *(arr1 + 2));

	free(arr2);
	free(arr1);
}

