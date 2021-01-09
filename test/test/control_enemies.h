#pragma once
#include "header.h"
typedef struct screen Screen;

typedef struct enemy Enemy;//후에 애너미 사용시 에러 방지
typedef struct player Player;
struct control_enemies {
	
	Enemy * objacts;
	int max_number;
	int face_size;
	char * face;
	//bool DrawAvailable = 0;// 애너미를 그릴지 말지 표시하기
	//enemy.h , cpp로 옮김
	//1(true)일땐 출력 0(false)일땐 출력하지 않음.


	//int pos;// objacts init 이후 주어진 objacts[i]의 포지션 가져오기
	//노선변경, objacts안에 pos 를 비교하기로

	void init(Enemy face, int array_number, Screen * screen);// 애너미 얼굴과 숫자

	void Draw(Screen * screen, Player player);

	void Delete();
};