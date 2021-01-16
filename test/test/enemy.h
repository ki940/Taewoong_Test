#pragma once
#include "header.h"
typedef struct screen Screen;
typedef struct player Player;

typedef struct enemy {

	char* face;
	int face_size;
	float pos; // 애너미 위치
	int count;
	int delay;
	bool DrawAvailable;

	void posinit(Screen * screen);
	enemy(const char* face, Screen * screen);
	void Init(const char * face, Screen * screen);
	bool Delete();
	void Draw(Screen* screen, Player player);
	//구조체가 더이상 화면에서 하던 캐릭터 그리기와 위치 받아오기를 그만두는 함수 제작
}Enemy;