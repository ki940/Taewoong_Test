#pragma once
#include "header.h"
typedef struct screen Screen;
typedef struct player Player;

typedef struct enemy {

	char* face;
	int face_size;
	int pos = 70; // �ֳʹ� ��ġ
	int count = 0;
	int delay = 0;

	enemy(const char* face, int pos);
	void Init(const char * face, Screen * screen);
	bool Delete();
	void Draw(Screen* screen, Player player);
	//����ü�� �׸��� �� �׸��� ������ ��Ƽ�� ���¸� �޾ƿ��� ����ü? �Լ�? �����
	//
	//����ü�� ���̻� ȭ�鿡�� �ϴ� ĳ���� �׸���� ��ġ �޾ƿ��⸦ �׸��δ� �Լ� ����
}Enemy;