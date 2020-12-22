#define _CRT_SECURE_NO_WARNINGS
#include"Header.h"

#include"Scene.h"

Scene::Scene(int _size)
{
	size = _size;
	scene = (char*)malloc(size * sizeof(char));
	Clean();
}

bool Scene::Delete()
{
	free(scene);
	return true;
}

void Scene::Clean()
{

}

void Clean(char * scene)//스크린 초기화
{
	memset(scene, ' ', 80);
	scene[80 - 1] = '\0';
}

void Display(char * scene)// 스크린에 원하는 문자열 입력
{

	printf("%s\r", scene); // 콘솔 화면에 문자열을 띄움

	//\r 로 memset 대체, 다만 문자열 초기화함수가 아닌만큼 띄운 널문자가 뒤에 안 옴
	//즉 초기화 내지는 초기화처럼 보이는 대입함수나 방법을 작성해야함.
	Sleep(10);
}

