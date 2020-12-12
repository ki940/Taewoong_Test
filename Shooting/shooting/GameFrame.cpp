#define _CRT_SECURE_NO_WARNINGS
#include"Header.h"
#include"GameFrame.h"

void Clean(char * scene)//��ũ�� �ʱ�ȭ
{
	memset(scene, ' ', 80);
	scene[80 - 1] = '\0'; 
}

void Display(char * scene)// ��ũ���� ���ϴ� ���ڿ� �Է�
{
	printf("%s\r", scene); // �ܼ� ȭ�鿡 ���ڿ��� ���
	//\r �� memset ��ü, �ٸ� ���ڿ� �ʱ�ȭ�Լ��� �ƴѸ�ŭ ��� �ι��ڰ� �ڿ� �� ��
	//�� �ʱ�ȭ ������ �ʱ�ȭó�� ���̴� �����Լ��� ����� �ۼ��ؾ���.
	Sleep(10);
}

void Gameplay()
{
	char scene[80] = { 0, }; // �׸� ��ġ. �ʱ�ȭ
	int iChar; // �Էµ� Ű���� ���� �޾ƿ� ����, ���� �ʱ�ȭ���� ����
	int pos = 74;// ������ �ʱⰪ, ����,�Ǵ� ���ڿ��� ��ġ�� ��ġ���� ��Ÿ��
	const char * str = "o_o*";// �׸� ��ġ ���ο��� �׷��� ���ڿ�
	
	while (1) {
		Clean(scene); // ���� sceneĭ�� ���

		if (_kbhit()) { // Ű���尡 ���ȴ�? üũ 
			iChar = _getch(); // ���� �� ����
			if (iChar == 'q') break; // q�� ������ �ݺ����� ������
			if (iChar == 'a') // a �� ����־��� �� pos�� ����(�������� �̵�)
			{
				pos--;
				str = "o_o*";
			}
			else if (iChar == 'd') // d �� ����־����� pos�� ���� (�������̵�)
			{
				pos++;
				str = "*o_o";
			}
			if (pos < 0) // ������ ����, 0 ~ 76(scene���� - ������� ���ڿ� ũ��)
				pos = 0;
			else if (pos > 75)
				pos = 75;

		}	 

		strncpy_s(scene + pos, _countof(scene) - pos , str, 5); 

		//1. ���Ӱ� �Լ� �ۼ�
	    //2. �ι��� �ȵ��� ���� ��ä �ϴ� �Լ� c

		//strncpy_s(���ڿ� ����? , ���ڿ� ����? ����, ���� ���ڿ�, ���� ���ڿ� ����)
		//strcpy_s((scene + pos), 80, str); // Ű������ �Է°� ������� ��� �׷����� �ϴ� ���ڿ�
		//strcpy_s == strcpy�� ������ ���� �Լ�, 
		Display(scene);
	}
}


