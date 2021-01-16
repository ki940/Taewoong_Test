#pragma once
#include "header.h"

typedef struct player {
	char* face;
	int face_size;
	int pos;
	int Playerincounter;

	player(const char* face, int pos);
	bool Delete();

	void Input();
	void Draw(Screen* screen);
}Player;