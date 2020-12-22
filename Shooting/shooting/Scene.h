#pragma once
void Clean(char * scene);//스크린 초기화
void Display(char * scene);// 스크린에 원하는 문자열 입력

typedef struct Scene {
	int size;
	char * scene;

	Scene(int size);
	bool Delete();

	void Clean();
	void Display();


}Scene;


