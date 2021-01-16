#pragma once
#include "header.h"
typedef struct screen Screen;
typedef struct player Player;

typedef struct enemy {

	char* face;
	int face_size;
	float pos; // 애너미 위치
	int count;
	//int delay; //생각해보니 기존 딜레이 기능이 pos값 자체에 가버림
	bool DrawAvailable;



	enemy(const char* face, Screen * screen);
	void InitPos(Screen * screen);
	void Init(const char * face, Screen * screen);
	bool Delete();
	void UpdatePos(Screen* screen, Player * player);
	void Draw(Screen* screen);
	//구조체가 더이상 화면에서 하던 캐릭터 그리기와 위치 받아오기를 그만두는 함수 제작
}Enemy;