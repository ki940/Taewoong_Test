#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
//if 1�� ��Һ�

int main()
{
	int x, y;
	while (1) {
		scanf("%d %d", &x, &y);

		printf("%c", (x > y ? '>' : x == y ? '=' : '<')); //���׿�����?
	}
}

*/


/*
//if 2�� �����Է����� ���� ��Ÿ����

int main()
{
	int x; //�Է�����
	while (1) {
		printf("������ �Է��Ͻÿ�, ��ȿ���ڴ� 0���� 100�����Դϴ�\n");
		scanf("%d", &x);

		if (x > 100) {
			printf("��ȿ���ں��� Ů�ϴ�\n");
		}
		else if (x >= 90) {
			printf("A\n");
		}
		else if (x >= 80) {
			printf("B\n");
		}
		else if (x >= 70) {
			printf("C\n");
		}
		else if (x >= 60) {
			printf("D\n");
		}
		else if (x < 0) {
			printf("��ȿ���ں��� �۽��ϴ�\n");
		}
		else printf("F\n");
	}
}

*/

/*
//���׻�� if2��
int main()
{
	int x; //�Է�����
	while (1) {
		printf("������ �Է��Ͻÿ�, ��ȿ���ڴ� 0���� 100�����Դϴ�\n");
		scanf("%d", &x);
		printf("%c", (x >= 90 ? 'A' : x >= 80 ? 'B' : x >= 70 ? 'C' : x >= 60 ? 'D' : 'F')); // ���׿�����
		 //���׿������� �������� �������Ƿ� �ʹ� �� ���ǹ��� ������� �ʴ´�.
		
	}
}
*/

/*
//switch case ��� if2��
int main()
{
	int x;
	
	while (1)
	{
		scanf("%d", &x);
		switch (x / 10)
		{
		case 10:
			printf("����~\n");
			break;
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
}
*/

/*
//for�� 1�� ������ ������ ������ ���

void mult(int x) 
{
	for (int i = 1; i <=9 ; i++)
	{
		printf("%d X %d = %d \n", x, i, x*i);
	}
}

int main() 
{
	int x;
	while (1) {
		printf("������ ������ �Է��Ͻÿ�");
		scanf("%d", &x);
		mult(x);
	}
}
*/



/*
//if 3�� ���� äũ
// ���׿����� ���� ����, ��� ��

bool Chack(int x) // 400�� ����� ��, 100�� ����� ����, 4�� ����� ��
{
	if (x % 400 == 0)
	{
		return 1;
	}
	else
	{
		if (x % 100 == 0)
		{
			return 0;
		}
		else if (x % 4 == 0)
		{
			return 1;
		}
		else
			return 0;
			
	}
}

int main()
{
	int year;
	
	while (1) {
		printf("������ �Է��Ͻÿ�\n");
		scanf("%d", &year);

		if (Chack(year) > 0) printf("����\n");
		else printf("������ �ƴϴ�\n");
	}
	return 0;
}
*/

//�Լ� ������� �ʰ� ���׿����� �̿��Ͽ� ���� ���


/*
//if 4�� ��и� ���� 

int Quad(int x, int y)//��и� ���� �Լ�
{
	if (x > 1000 || x < -1000 || y>1000 || y < -1000) return 0; // 0 = ����
	else {
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
}

int main()
{
	int x, y;
	while (1)
	{
		printf("X���� �Է�\n");
		scanf("%d", &x);
		printf("Y���� �Է�\n");
		scanf("%d", &y);
		if (Quad(x, y) == 0) printf("Error\n\n");
		else printf("%d ��и� \n\n", Quad(x, y));

	}

	return 0;

}
*/


/*
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

int main()
{
	int x;
	printf("���� n�Է�");
	scanf("%d", &x);
	star(x);


}

*/


/*
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

int main()
{
	int x = 5;

	Printstar(x);
}

*/

/*
//���ڿ� 1��

int main()
{
	char x;
		printf("���ĺ� �Է�\n");
		scanf("%c", &x);
		printf("�ƽ�Ű ��ȣ�� %d�̴�\n", x);

	return 0;
}
*/

/*
//�������� ����
#include <string.h>    // strlen �Լ��� ����� ��� ����

int main()
{
	const char *s1 = "Hello";       // �����Ϳ� ���ڿ� Hello�� �ּ� ����
	char s2[] = { 'H', 'e', 'l', 'l', 'o', };    // ũ�Ⱑ 10�� char�� �迭�� �����ϰ� ���ڿ� �Ҵ�
	int s3[] = { 1, 2, 3, 4, 5 };
	int * s4 = s3; //������ ����

	printf("%d\n", strlen(s1));    // 5: strlen �Լ��� ���ڿ��� ���̸� ����
	printf("%d\n", strlen(s2));    // 5: strlen �Լ��� ���ڿ��� ���̸� ����
	printf("%d\n", sizeof(s1));
	printf("%d\n", sizeof(s2));
	printf("%d\n", sizeof(s3));
	printf("%d\n", sizeof(s3)/sizeof(int));
	printf("%d\n", s3[0]);//�迭�� ù��° ��
	printf("%d\n", s4[0]);//�������� ù��° ��
	printf("%p\n", s3);//�迭�� �ּҰ�
	printf("%p\n", s4);//�������� �ּҰ�
	printf("%d\n", *s4);//�������� �ּҰ� ����Ű�� ��
	printf("%p %p %p\n", s4-1, s4, s4+1);//�������� �ּҰ�
	printf("%d %d %d\n", *(s4 - 1), *s4, *(s4 + 1));//�������� �ּҰ�


	return 0;
}
*/

/*
//�����Ϳ� �迭 �׸��� ���ڿ�
int main()
{
	const char *s1 = "Hello, world!";       // char �����Ϳ� ���ڿ��� �޸� �ּҸ� ����
	char s2[20] = "Hello, world!";    // char �迭�� ���ڿ� ����
	const char * s3 = s1;      // char �迭�� ���ڿ� ����(�迭�� ũ�� ����)
	const char* & s4 = s1;	//���ڿ� ���۷��� ���: s1 �� ���� �� �ٸ� �̸�(����)
	s1 = "Hello2";
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