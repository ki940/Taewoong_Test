#pragma once
#include "header.h"
typedef struct screen Screen;
typedef struct player Player;
typedef struct enemy Enemy;

typedef struct bullet {
	
	char * objact;
	int objact_size;
	float pos;
	//bool chack_overlap;//�Ʒ� ��ɿ� ����
	bool DrawAvaillable;

	bullet(Player * player);
	void init();
	void UpdatePos(Screen* screen, Player * player, Enemy * enemy);
	void Draw(Screen* screen);
}Bullet;