#include "enemy.h"
#include "header.h"

enemy::enemy(const char * face, int pos)
{
	this->pos = pos;
	this->face_size = strlen(face);
	this->face = (char*)malloc(sizeof(char) * this->face_size);
	mStrncpy_s(this->face, face_size, face, face_size);
	count;
	delay;

}

void enemy::Init(const char * face, Screen * screen)
{
	srand(rand());
	this->pos = rand() % screen->size; // �������� ��ũ��ũ�⺸�� �� Ŀ���� ó��
	this->face_size = strlen(face);
	this->face = (char*)malloc(sizeof(char) * this->face_size);
	mStrncpy_s(this->face, face_size, face, face_size);
}

bool enemy::Delete()
{
	free(face);
	return true;
}

void enemy::Draw(Screen * screen, Player player)
{
	/*
	//�÷��̾� ������ ���Ƿ� 70 + 5 �ֳʺ�� 75 + 4 
	//�÷��̾� ���� + ���� < �ֳʹ� ����, �÷��̾� ���� > ���ʹ� ���� + ���� �� ���� �׷�����
	if (pos > player.pos + player.face_size || pos + face_size < player.pos)
		mStrncpy_s(screen->scene + pos, screen->size - pos, face, face_size);
	*/
	//���� ���� pos �� �÷��̾���� ũ�� ���� pos�� �÷��̾�� ������ ����, 
	
	/*
	if (pos > player.pos + player.face_size)
	{	
		pos--;
		mStrncpy_s(screen->scene + pos, screen->size - pos, face, face_size);
	}
	else if (pos + face_size < player.pos)
	{
		pos++;
		mStrncpy_s(screen->scene + pos, screen->size - pos, face, face_size);
	}
	*/

	// ���ʹ� �����̸� �� ������ ����
	if (pos + face_size < player.pos) count++;
	if (pos > player.pos + player.face_size) count--;
	if (count > 15 || count < -15)
	{
		delay = (count / 15);
		count = 0;
	}
	switch (delay) {
	case 0 : mStrncpy_s(screen->scene + pos, screen->size - pos, face, face_size);
		break;
	case 1: pos++; 
		mStrncpy_s(screen->scene + pos, screen->size - pos, face, face_size);
		break;
	case -1: pos--; 
		mStrncpy_s(screen->scene + pos, screen->size - pos, face, face_size);
		break;
	}
	delay = 0;
	

}
