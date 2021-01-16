#pragma once
#include "header.h"
typedef struct screen Screen;
typedef struct player Player;

typedef struct enemy {

	char* face;
	int face_size;
	float pos; // �ֳʹ� ��ġ
	int count;
	//int delay; //�����غ��� ���� ������ ����� pos�� ��ü�� ������
	bool DrawAvailable;



	enemy(const char* face, Screen * screen);
	void InitPos(Screen * screen);
	void Init(const char * face, Screen * screen);
	bool Delete();
	void UpdatePos(Screen* screen, Player * player);
	void Draw(Screen* screen);
	//����ü�� ���̻� ȭ�鿡�� �ϴ� ĳ���� �׸���� ��ġ �޾ƿ��⸦ �׸��δ� �Լ� ����
}Enemy;