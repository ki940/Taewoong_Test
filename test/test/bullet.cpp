#include "bullet.h"

bullet::bullet(Player * player)
{
	//동적할당이랑 배열 사용을 잘 못하겠음, 
	//memset(objact, '\0', objact_size);
	objact == "<";
	pos = (int)player->pos;
	if (player->face_direction)
	{
		objact == ">";
		pos = player->pos + player->face_size;
	}
	objact_size = strlen(objact);
	DrawAvaillable = true;

}

void bullet::init()
{

}

void bullet::UpdatePos(Screen * screen, Player * player, Enemy * enemy)
{
	//불릿 위치랑 적 위치 같을떄
	//불릿 + 사이즈 위치랑 적 위치 같을때
	//불릿 위치랑 적 + 적사이즈 위치 같을때
	//불릿 위치 + 사이즈랑 적 + 사이즈 위치 같을때 비활성화
	if (pos == enemy->pos ||
		pos + objact_size == enemy->pos ||
		pos == enemy->pos + enemy->face_size ||
		pos + objact_size == enemy->pos + enemy->face_size)
	{
		DrawAvaillable = false;
	}
	if (player->face_direction) pos += 0.3f;
	else pos -= 0.3f;

}

void bullet::Draw(Screen * screen)
{
	if (!DrawAvaillable) return;

	mStrncpy_s(screen->scene + (int)pos, screen->size - (int)pos, objact, objact_size);

}
