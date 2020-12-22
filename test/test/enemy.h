#pragma once
#include "header.h"
typedef struct player Player;

typedef struct enemy {
	char* face;
	int face_size;
	int pos = 70;
	int speed = 1;

	enemy(const char* face, int pos);
	bool Delete();
	void Draw(Screen* screen, Player player);
}Enemy;