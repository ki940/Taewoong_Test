#pragma once

typedef struct screen {
	int size;
	char* scene;
	//�÷��̾�� �ֳʹ� ������ ������ų �� �� ���
	//int Playerincount;

	screen(int size);
	bool Delete();

	void Clear();
	void Display();
}Screen;