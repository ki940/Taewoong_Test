#pragma once

typedef struct screen {
	int size;
	char* scene;
	//플레이어와 애너미 만날때 증가시킬 값 ㅡ 취소
	//int Playerincount;

	screen(int size);
	bool Delete();

	void Clear();
	void Display();
}Screen;