#include<stdio.h>

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
	for (int i = 1; i <= 9; i++)
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
