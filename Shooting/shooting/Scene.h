#pragma once
void Clean(char * scene);//��ũ�� �ʱ�ȭ
void Display(char * scene);// ��ũ���� ���ϴ� ���ڿ� �Է�

typedef struct Scene {
	int size;
	char * scene;

	Scene(int size);
	bool Delete();

	void Clean();
	void Display();


}Scene;


