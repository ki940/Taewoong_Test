#define _CRT_SECURE_NO_WARNINGS
#include"Header.h"
#include"GameFrame.h"
#define Sec 1000


void Clean(char * scene)//��ũ�� �ʱ�ȭ
{
	memset(scene, ' ', strlen(scene));
	system("cls");
}


void Display(char * scene)// ��ũ���� ���ϴ� ���ڿ� �Է�
{
	printf("%s", scene); // �ܼ� ȭ�鿡 ���ڿ��� ���
	Sleep(10);
}

void Gameplay(char * scene)
{
	int iChar;
	int pos = 20;
	const char * str = "o_o*";
	

	while (1) {
		Clean(scene); // ���� sceneĭ�� ���

		if (_kbhit()) { // Ű���尡 ���ȴ�? üũ 
			iChar = _getch(); // ���� �� ����
			if (iChar == 'q')
				break;
			if (iChar == 'a')
			{
				pos--;
			}
			else if (iChar == 'd')
			{
				pos++;
			}
			if (pos < 0)
				pos = 0;
			else if (pos > 79)
				pos = 79;

		}	 
		strcpy_s((scene + pos), 80, str);
		Display(scene);
	}
}


