
#include"Header.h"


int main() 
{
	//80짜리 크기 문자열 만들기, 동적할당을 이용해 크기를 잡고
	//반복문 끝에 할당해제 
	Scene scene();
	int iChar; // 입력된 키보드 값을 받아올 변수, 따로 초기화하지 않음
	int pos = 15;// 포지션 초기값, 문자,또는 문자열이 위치할 위치값을 나타냄
	const char * str = "o_o*";// 그릴 위치 내부에서 그려질 문자열

	while (1) {
		Clean(scene); // 기존 scene칸을 비움

		if (_kbhit()) { // 키보드가 눌렸니? 체크 
			iChar = _getch(); // 눌린 값 대입
			if (iChar == 'q') break; // q를 넣으면 반복문을 종료함
			if (iChar == 'a') // a 를 집어넣었을 시 pos값 감소(왼쪽으로 이동)
			{
				pos--;
				str = "o_o*";
			}
			else if (iChar == 'd') // d 를 집어넣었을시 pos값 증가 (오른쪽이동)
			{
				pos++;
				str = "*o_o";
			}
			if (pos < 0) // 포지션 제한, 0 ~ 76(scene공간 - 집어넣을 문자열 크기)
				pos = 0;
			else if (pos > 75)
				pos = 75;

		}

		strncpy(scene + pos, str, 4);

		//1. 새롭게 함수 작성
		//2. 널문자 안들어가게 문자 대채 하는 함수 c

		//strncpy_s(문자열 버퍼? , 문자열 버퍼? 길이, 붙일 문자열, 붙일 문자열 길이)
		//strcpy_s((scene + pos), 80, str); // 키보드의 입력과 상관없이 계속 그려져야 하는 문자열
		//strcpy_s == strcpy의 문제를 줄인 함수, 
		Display(scene);
	}
}