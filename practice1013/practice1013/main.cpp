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

int main()
{
	int num[5];
	num[5] = 5;
	printf("%d %d", num[5], num[6]);
}