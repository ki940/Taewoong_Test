#define _CRT_SECURE_NO_WARNINGS
#include"Header.h"
#include"GameFrame.h"
#define Sec 1000


void Clean(char * scene)//스크린 초기화
{
	memset(scene, ' ', strlen(scene));
	system("cls");
}


void Display(char * scene)// 스크린에 원하는 문자열 입력
{
	printf("%s", scene); // 콘솔 화면에 문자열을 띄움
	Sleep(10);
}

void Gameplay(char * scene)
{
	int iChar;
	int pos = 20;
	const char * str = "o_o*";
	

	while (1) {
		Clean(scene); // 기존 scene칸을 비움

		if (_kbhit()) { // 키보드가 눌렸니? 체크 
			iChar = _getch(); // 눌린 값 대입
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


