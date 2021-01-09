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
	this->pos = rand() % screen->size; // 랜덤값이 스크린크기보다 안 커지게 처리
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
	//플레이어 포스는 임의로 70 + 5 애너비는 75 + 4 
	//플레이어 포스 + 랭스 < 애너미 포스, 플레이어 포스 > 에너미 포스 + 랭스 일 때만 그려진다
	if (pos > player.pos + player.face_size || pos + face_size < player.pos)
		mStrncpy_s(screen->scene + pos, screen->size - pos, face, face_size);
	*/
	//조건 수정 pos 가 플레이어값보다 크면 감소 pos가 플레이어보다 작으면 증가, 
	
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

	// 에너미 딜레이를 줄 변수값 선언
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
