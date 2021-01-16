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
	//this->pos = rand() % screen->size; // 랜덤값이 스크린크기보다 안 커지게 처리
	/*count = rand() % 2;
	if (count == 0) {
		this->pos = 0;
	}
	else this->pos = screen->size - strlen(face);
	*/
	this->face_size = strlen(face)+1;//+1은 null문자가 들어가야할 공간 확보
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
		DrawAvailable = false; // 캐릭터의 값보다 크거나 작지 않으면 그리지 않음

		delay = 0;
		posinit(screen);
		player.Playerincounter++;//플레이어와 적이 만나면 인카운터 증가
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
