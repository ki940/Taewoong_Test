#include"header.h"
#include"RspGame.h"
int RandomValue()
{
	return rand() % 3; // 0.1.2 ��ȯ
}

char* Casting(const char* str) { return const_cast<char*>(str); }
//�����ϰ� ������ �帮�ڸ� ���� ����ȯ �ϴ��� ����������? 
// const ����ȯ�� �����ϰ� �ϴ� ����̿���
// const �� �����Ҽ��� �ְ� (const char* -> char*)
// const �� ��ȯ�Ҽ��� �ְ� (char* -> const char*)
// const�����ؼ���! �����ϰ� ����ȯ! �����ϰ� ���ȭ!
// ���� �Ϲ������� ����ȯ�Ҷ��� �´� casting �� ����ؾ��ؿ�
// casting �� ������ �� 4���� ���� �ִµ� ��Ȳ�� ���缭 ����ؾ� ����ȯ�� �����ϰ� �˴ϴ�.
// ��  casting�� ����ؾ��ϳĸ�, ���� float(8byte) -> int(4byte)�� ����ȯ �Ѵٰ� �غ���
// 8byt���� 4byte�� �޸𸮰� �پ����? �޸𸮸� �Ҿ������ �׷��� ������ �߻��Ѵ� ���̿���
// casting�� ����Ѵٰ� �޸𸮸� �� �Ҿ�����°� �ƴ����� �ٸ� ������ �߻��Ǵ� ���� �����ݴϴ�.


void printRSP(const char* name, int value) {
	const char* rsp[3] = { "����", "����", "��" };
	printf("%s(��/��) %s�� �½��ϴ�.\n", name, &rsp[value]);
}

char* RspValueCompare(int playerValue)
{
	int computer = RandomValue();
	switch (playerValue)
	{
		case 0 :
			if (playerValue == computer)
			{
				return Casting("���º�\n");
			}
			else if (computer == 1)
			{
				return Casting("�й�\n");
			}
			else
				return Casting("�¸�\n");
			break;

		case 1:
			if (playerValue == computer)
			{
				return Casting("���º�\n");
			}
			else if (computer == 2)
			{
				return Casting("�й�\n");
			}
			else
				return Casting("�¸�\n");
			break;
		case 2:
			if (playerValue == computer)
			{
				return Casting("���º�\n");
			}
			else if (computer == 0)
			{
				return Casting("�й�\n");
			}
			else
				return Casting("�¸�\n");
			break;
		case 4:
			return Casting("�׸��α�\n");
			break;
		default:
			return Casting("�ٽ� �Է��Ͻÿ�\n");
	}


}
char* RspValueCompare2(int playerValue)
{
	if(playerValue < 0 || playerValue > 2) return Casting("�ٽ��Է�\n");
	int computer = RandomValue();

	printRSP("��ǻ��", computer);

	switch ((playerValue - computer + 3) % 3)
	{
	case 0:
		return Casting("���\n");
	case 1:
		return Casting("�̱�\n");
	case 2:
		return Casting("��\n");
	}
}

const char* RspValueCompare3(int playerValue)
{
	if (playerValue < 0 || playerValue > 2) return "�ٽ� �Է� ��Ź�帳�ϴ�.\n";
	int computer = RandomValue();
	DrawRSP("��ǻ��", computer); // 5.���� ����� ����� ��ǻ�Ͱ� ������ �´��� �׸�

	switch ((playerValue - computer + 3) % 3)
	{
	case 0:
		return "�÷��̾�� ��ǻ�Ͱ� �����ϴ�\n";
	case 1:
		return "�÷��̾ �̰���ϴ�\n";
	case 2:
		return "�÷��̾ �����ϴ�.\n";
	}
}

void RspGameTest()
{
	int playerValue;
	while (1) {
		printf("0. ����, 1. ����, 2. �� ���ڸ� �Է��Ͻÿ�: ");
		scanf("%d", &playerValue);
		printf("%s", RspValueCompare2(playerValue));
		if (playerValue == 4) break;
	}
}


char scene[50] = {}; //������ ȭ�� -> �� �迭�� ���ؼ��� �׸��� ����� �մϴ�
int delay = 2;

/*
1 -> a-1 -> b -> c
 (�Է�)-> 2
		 -> 3 -> a-2 -> b -> c
		 (����)-> 4 -> a-2 -> b -> c
				 (����ó�� ��� ��)-> 5 -> a-2 -> b -> c
 (�Է°���� 4�϶�)-> 6 -> a-2 -> b -> c
*/



// b.ȭ���� ����� �Լ�
void Clear() {
	for (int i = 0; scene[i] != NULL; i++) { //���ڿ� ������ scene�� �������� ä���
		scene[i] = ' ';
		//Ȥ�� �� ���� ����
	}
	system("cls"); // cmd ȭ�� ����� �Լ����� #include <windows.h> ����� �ʿ��մϴ�.
}
// c.ȭ���� �׸��� �Լ�
void Display()
{
	printf("%s", scene);
}
//a-1.ȭ���� text�� scene�� �ְ� �׸��� �Լ�
void Draw(const char* str) {
	Clear(); // ���� �׸��� ����� �κ�
	for (int i = 0; i < strlen(str); i++) {
		scene[i] = str[i];
	}
	Display(); // �׸��� �κ�
	Sleep(delay * 1000); // �׸��� �����ִ� �κ� (1000 = 1��)
	// ��ü �ý����� ���缭 ������!
}
// a-2.Draw�� ���� ���: ���� ������ �´��� �׸�!
void DrawRSP(const char* name, int value) {
	Clear();
	const char* rsp[3] = { "����", "����", "��" };
	char str[50] = {};
	strcat(str, name);
	strcat(str, "�� ");
	strcat(str, rsp[value]);
	strcat(str, "�� �½��ϴ�.\n");

	for (int i = 0; i < strlen(str); i++) {
		scene[i] = str[i];
	}
	Display();
	Sleep(delay * 1000);
}
// ����: ��ȯ�ϴ� ���� �׸�! 

void RspGameTest2()
{
	int playerValue;
	while (1) {
		Draw("0. ����, 1. ����, 2. �� ���ڸ� �Է��Ͻÿ�: "); //1. �׸���
		scanf("%d", &playerValue); //2. �Է�
		DrawRSP("�÷��̾�", playerValue);//3. ����� ���� ������ �´��� �׸�

		Draw(RspValueCompare3(playerValue));//4. ����� ���� ����� �׸�
		if (playerValue == 4) {
			Draw("���������� ������ �׸��մϴ�\n"); // 6. ���� �׸��� ����� �׸��δ� ����� �׸�
			break;
		}
	}
}
