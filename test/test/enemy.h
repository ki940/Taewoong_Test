#pragma once
#include "header.h"

typedef struct enemy {
	char* face;
	int face_size;
	int pos = 70;

	enemy(const char* face, int pos);
	bool Delete();
	void Draw(Screen* screen);
}Enemy;