#include"header.h"
#include"GameFrame.h"

void Init(char * scene, int len)
{
	// �ʱ�ȭ
}

void Clear(char* scene, int len) {
	for (int i = 0; scene[i] != NULL; i++) { //���ڿ� ������ scene�� �������� ä���
		scene[i] = ' ';
		//Ȥ�� �� ���� ����
	}
	system("cls"); // cmd ȭ�� ����� �Լ����� #include <windows.h> ����� �ʿ��մϴ�.
}

void Display(char * scene, int len, const char* str)
{
	Clear(scene, len);
	for (int i = 0; i < strlen(str); i++) {
		scene[i] = str[i];
	}
	printf("%s", scene);
	Sleep(2 * 1000);
}
//scene�̶� dlay ������ ���������� ����� �ְ�
//�� ���������� gameframe.cpp�� �����ϰ� �����ͺ���.
void Playgame(char * scene, int len, int& playerValue)
{
	// player
	Display(scene, len, "0. ����, 1. ����, 2. �� ���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &playerValue);
	Display(scene, len, RSP("�÷��̾�", playerValue));

	if (playerValue < 0 || playerValue > 2) {
		Display(scene, len, "�ٽ� �Է� ��Ź�帳�ϴ�.\n");
		return;
	}

	//computer
	int computer = RandomValue();
	Display(scene, len, RSP("��ǻ��", computer)); // 5.���� ����� ����� ��ǻ�Ͱ� ������ �´��� �׸�

	//game
	Display(scene, len, RspValueCompare3((playerValue - computer + 3) % 3));
}

bool Gameend(char * scene, int len, int& playerValue)
{
	// game over & game clear
	if (playerValue == 4) {
		Display(scene, len, ("���������� ������ �׸��մϴ�\n"));
		return true;
	}
	return false;
}



void GameLoop(char* scene, int len)
{
	Init(scene, len);
	int playerValue = 0;
	while (true) {
		if (Gameend(scene, len, playerValue)) break;
		Playgame(scene, len, playerValue);
	}
}
