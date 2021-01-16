#include "enemy.h"
#include "header.h"

enemy::enemy(const char * face,Screen * screen)
{
	this->Init(face, screen);
}

void enemy::posinit(Screen * screen)
{
	srand(rand());
	if (rand() % 2 == 0) pos = 0;
	else pos = screen->size - face_size;
}

void enemy::Init(const char * face, Screen * screen)
{
	DrawAvailable = FALSE;
	srand(rand());
	//this->pos = rand() % screen->size; // �������� ��ũ��ũ�⺸�� �� Ŀ���� ó��
	/*count = rand() % 2;
	if (count == 0) {
		this->pos = 0;
	}
	else this->pos = screen->size - strlen(face);
	*/
	this->face_size = strlen(face)+1;//+1�� null���ڰ� ������ ���� Ȯ��
	this->face = (char*)malloc(sizeof(char) * this->face_size);
	memset(this->face, '\0', this->face_size);//face
	mStrncpy_s(this->face, face_size-1, face, face_size-1);
	posinit(screen);
	delay = 0;
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
	

	if (DrawAvailable == false) return;
	
	if (pos > player.pos + player.face_size)
	{
		pos -= 0.1f;
	
	}
	else if (pos + face_size < player.pos)
	{
		pos += 0.1f;
	
	}
	else
	{
		DrawAvailable = false; // ĳ������ ������ ũ�ų� ���� ������ �׸��� ����

		delay = 0;
		posinit(screen);
		player.Playerincounter++;//�÷��̾�� ���� ������ ��ī���� ����
	}

	if (DrawAvailable == false) return;

	if (delay > 20) {
		delay = 0;
	}
	mStrncpy_s(screen->scene + (int)pos, screen->size - (int)pos, face, face_size - 1);
	delay++;

	/*
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
	*/

}
