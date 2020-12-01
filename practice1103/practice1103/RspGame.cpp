#include"header.h"
#include"RspGame.h"
int RandomValue()
{
	return rand() % 3; // 0.1.2 반환
}

char* Casting(const char* str) { return const_cast<char*>(str); }
//간단하게 설명을 드리자면 저희 형변환 하던거 생각나세요? 
// const 형변환을 안전하게 하는 방법이에요
// const 를 해제할수도 있고 (const char* -> char*)
// const 로 변환할수도 있고 (char* -> const char*)
// const관련해서만! 안전하게 형변환! 안전하게 상수화!
// 원래 일반적으로 형변환할때도 맞는 casting 을 사용해야해요
// casting 의 종류가 한 4가지 정도 있는데 상황에 맞춰서 사용해야 형변환이 안전하게 됩니다.
// 왜  casting을 사용해야하냐면, 예로 float(8byte) -> int(4byte)로 형변환 한다고 해봐요
// 8byt에서 4byte로 메모리가 줄어들죠? 메모리를 잃어버려요 그래서 문제가 발생한단 말이에요
// casting을 사용한다고 메모리를 안 잃어버리는건 아니지만 다른 오류가 발생되는 일을 막아줍니다.


void printRSP(const char* name, int value) {
	const char* rsp[3] = { "가위", "바위", "보" };
	printf("%s(이/가) %s를 냈습니다.\n", name, &rsp[value]);
}

char* RspValueCompare(int playerValue)
{
	int computer = RandomValue();
	switch (playerValue)
	{
		case 0 :
			if (playerValue == computer)
			{
				return Casting("무승부\n");
			}
			else if (computer == 1)
			{
				return Casting("패배\n");
			}
			else
				return Casting("승리\n");
			break;

		case 1:
			if (playerValue == computer)
			{
				return Casting("무승부\n");
			}
			else if (computer == 2)
			{
				return Casting("패배\n");
			}
			else
				return Casting("승리\n");
			break;
		case 2:
			if (playerValue == computer)
			{
				return Casting("무승부\n");
			}
			else if (computer == 0)
			{
				return Casting("패배\n");
			}
			else
				return Casting("승리\n");
			break;
		case 4:
			return Casting("그만두기\n");
			break;
		default:
			return Casting("다시 입력하시오\n");
	}


}
char* RspValueCompare2(int playerValue)
{
	if(playerValue < 0 || playerValue > 2) return Casting("다시입력\n");
	int computer = RandomValue();

	printRSP("컴퓨터", computer);

	switch ((playerValue - computer + 3) % 3)
	{
	case 0:
		return Casting("비김\n");
	case 1:
		return Casting("이김\n");
	case 2:
		return Casting("짐\n");
	}
}

const char* RspValueCompare3(int playerValue)
{
	if (playerValue < 0 || playerValue > 2) return "다시 입력 부탁드립니다.\n";
	int computer = RandomValue();
	DrawRSP("컴퓨터", computer); // 5.앞의 결과를 지우고 컴퓨터가 무엇을 냈는지 그림

	switch ((playerValue - computer + 3) % 3)
	{
	case 0:
		return "플레이어와 컴퓨터가 비겼습니다\n";
	case 1:
		return "플레이어가 이겼습니다\n";
	case 2:
		return "플레이어가 졌습니다.\n";
	}
}

void RspGameTest()
{
	int playerValue;
	while (1) {
		printf("0. 가위, 1. 바위, 2. 보 숫자를 입력하시오: ");
		scanf("%d", &playerValue);
		printf("%s", RspValueCompare2(playerValue));
		if (playerValue == 4) break;
	}
}


char scene[50] = {}; //임의의 화면 -> 이 배열을 통해서만 그리고 지우고 합니다
int delay = 2;

/*
1 -> a-1 -> b -> c
 (입력)-> 2
		 -> 3 -> a-2 -> b -> c
		 (게임)-> 4 -> a-2 -> b -> c
				 (예외처리 통과 후)-> 5 -> a-2 -> b -> c
 (입력결과가 4일때)-> 6 -> a-2 -> b -> c
*/



// b.화면을 지우는 함수
void Clear() {
	for (int i = 0; scene[i] != NULL; i++) { //문자열 끝까지 scene을 공백으로 채우기
		scene[i] = ' ';
		//혹시 모를 오류 방지
	}
	system("cls"); // cmd 화면 지우는 함수에요 #include <windows.h> 헤더가 필요합니다.
}
// c.화면을 그리는 함수
void Display()
{
	printf("%s", scene);
}
//a-1.화면을 text를 scene에 넣고 그리는 함수
void Draw(const char* str) {
	Clear(); // 이전 그림을 지우는 부분
	for (int i = 0; i < strlen(str); i++) {
		scene[i] = str[i];
	}
	Display(); // 그리는 부분
	Sleep(delay * 1000); // 그린걸 보여주는 부분 (1000 = 1초)
	// 전체 시스템을 멈춰서 보여줌!
}
// a-2.Draw와 같은 기능: 누가 무엇을 냈는지 그림!
void DrawRSP(const char* name, int value) {
	Clear();
	const char* rsp[3] = { "가위", "바위", "보" };
	char str[50] = {};
	strcat(str, name);
	strcat(str, "가 ");
	strcat(str, rsp[value]);
	strcat(str, "를 냈습니다.\n");

	for (int i = 0; i < strlen(str); i++) {
		scene[i] = str[i];
	}
	Display();
	Sleep(delay * 1000);
}
// 게임: 반환하는 값을 그림! 

void RspGameTest2()
{
	int playerValue;
	while (1) {
		Draw("0. 가위, 1. 바위, 2. 보 숫자를 입력하시오: "); //1. 그리고
		scanf("%d", &playerValue); //2. 입력
		DrawRSP("플레이어", playerValue);//3. 지우고 누가 무엇을 냈는지 그림

		Draw(RspValueCompare3(playerValue));//4. 지우고 게임 결과를 그림
		if (playerValue == 4) {
			Draw("가위바위보 게임을 그만합니다\n"); // 6. 앞의 그림을 지우고 그만두는 결과를 그림
			break;
		}
	}
}
