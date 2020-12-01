#include"header.h"
#include"GameFrame.h"

void Init(char * scene, int len)
{
	// 초기화
}

void Clear(char* scene, int len) {
	for (int i = 0; scene[i] != NULL; i++) { //문자열 끝까지 scene을 공백으로 채우기
		scene[i] = ' ';
		//혹시 모를 오류 방지
	}
	system("cls"); // cmd 화면 지우는 함수에요 #include <windows.h> 헤더가 필요합니다.
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
//scene이랑 dlay 변수를 가위바위보 헤더에 넣고
//그 전역변수를 gameframe.cpp에 선언하고 데려와본다.
void Playgame(char * scene, int len, int& playerValue)
{
	// player
	Display(scene, len, "0. 가위, 1. 바위, 2. 보 숫자를 입력하시오: ");
	scanf("%d", &playerValue);
	Display(scene, len, RSP("플레이어", playerValue));

	if (playerValue < 0 || playerValue > 2) {
		Display(scene, len, "다시 입력 부탁드립니다.\n");
		return;
	}

	//computer
	int computer = RandomValue();
	Display(scene, len, RSP("컴퓨터", computer)); // 5.앞의 결과를 지우고 컴퓨터가 무엇을 냈는지 그림

	//game
	Display(scene, len, RspValueCompare3((playerValue - computer + 3) % 3));
}

bool Gameend(char * scene, int len, int& playerValue)
{
	// game over & game clear
	if (playerValue == 4) {
		Display(scene, len, ("가위바위보 게임을 그만합니다\n"));
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
