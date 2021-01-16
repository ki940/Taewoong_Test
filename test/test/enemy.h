#pragma once
#include "header.h"
typedef struct screen Screen;
typedef struct player Player;

typedef struct enemy {

	char* face;
	int face_size;
	float pos; // �ֳʹ� ��ġ
	int count;
	int delay;
	bool DrawAvailable;

	void posinit(Screen * screen);
	enemy(const char* face, Screen * screen);
	void Init(const char * face, Screen * screen);
	bool Delete();
	void Draw(Screen* screen, Player player);
	//����ü�� ���̻� ȭ�鿡�� �ϴ� ĳ���� �׸���� ��ġ �޾ƿ��⸦ �׸��δ� �Լ� ����
}Enemy;