#pragma once
#include "header.h"

typedef struct player {
	char* face;
	int face_size;
	int pos;
	int overlap;
	bool face_direction; //0일시 왼쪽 1일시 오른쪽 방향으로 결정 
	//매크로? 어떤 설정기능을 쓰면 0을 Left 1을 Right로 설정할수 있을거같은데
	//그 방법은 여기서는 어떻게쓰는지 잘 모르겠음.
	bool DrawAvailable() {
		//if (overlap > 0) return false;
		//else true;

		//return (overlap > 0 ? true : false);

		return overlap < 1;//위 주석 두개랑 같은의미
	}

	
	player(const char* face, int pos);

	void init(int pos);

	bool Delete();

	void Input();
	void Draw(Screen* screen);
}Player;