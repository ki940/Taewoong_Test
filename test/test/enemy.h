#pragma once
#include "header.h"
typedef struct screen Screen;
typedef struct player Player;

typedef struct enemy {

	char* face;
	int face_size;
	int pos = 70; // 애너미 위치
	int count = 0;
	int delay = 0;

	enemy(const char* face, int pos);
	void Init(const char * face, Screen * screen);
	bool Delete();
	void Draw(Screen* screen, Player player);
	//구조체를 그리고 안 그리고를 결정할 액티브 상태를 받아오는 구조체? 함수? 만들고
	//
	//구조체가 더이상 화면에서 하던 캐릭터 그리기와 위치 받아오기를 그만두는 함수 제작
}Enemy;