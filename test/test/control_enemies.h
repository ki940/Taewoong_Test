#pragma once
#include "header.h"
typedef struct screen Screen;

typedef struct enemy Enemy;//�Ŀ� �ֳʹ� ���� ���� ����
typedef struct player Player;
struct control_enemies {
	
	Enemy * objacts;
	int max_number;
	int face_size;
	char * face;
	//bool DrawAvailable = 0;// �ֳʹ̸� �׸��� ���� ǥ���ϱ�
	//enemy.h , cpp�� �ű�
	//1(true)�϶� ��� 0(false)�϶� ������� ����.


	//int pos;// objacts init ���� �־��� objacts[i]�� ������ ��������
	//�뼱����, objacts�ȿ� pos �� ���ϱ��

	void init(Enemy face, int array_number, Screen * screen);// �ֳʹ� �󱼰� ����

	void Draw(Screen * screen, Player player);

	void Delete();
};