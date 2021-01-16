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
	int indexnumber = 0;
	int count = 0;
	
	void init(Enemy face, int array_number, Screen * screen);

	void Update(Player * player);

	void Draw(Screen * screen, Player * player);

	void Delete();
};