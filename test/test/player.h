#pragma once
#include "header.h"

typedef struct player {
	char* face;
	int face_size;
	int pos;
	int overlap;
	bool face_direction; //0�Ͻ� ���� 1�Ͻ� ������ �������� ���� 
	//��ũ��? � ��������� ���� 0�� Left 1�� Right�� �����Ҽ� �����Ű�����
	//�� ����� ���⼭�� ��Ծ����� �� �𸣰���.
	bool DrawAvailable() {
		//if (overlap > 0) return false;
		//else true;

		//return (overlap > 0 ? true : false);

		return overlap < 1;//�� �ּ� �ΰ��� �����ǹ�
	}

	
	player(const char* face, int pos);

	void init(int pos);

	bool Delete();

	void Input();
	void Draw(Screen* screen);
}Player;