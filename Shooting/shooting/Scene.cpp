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

void Clean(char * scene)//��ũ�� �ʱ�ȭ
{
	memset(scene, ' ', 80);
	scene[80 - 1] = '\0';
}

void Display(char * scene)// ��ũ���� ���ϴ� ���ڿ� �Է�
{

	printf("%s\r", scene); // �ܼ� ȭ�鿡 ���ڿ��� ���

	//\r �� memset ��ü, �ٸ� ���ڿ� �ʱ�ȭ�Լ��� �ƴѸ�ŭ ��� �ι��ڰ� �ڿ� �� ��
	//�� �ʱ�ȭ ������ �ʱ�ȭó�� ���̴� �����Լ��� ����� �ۼ��ؾ���.
	Sleep(10);
}

