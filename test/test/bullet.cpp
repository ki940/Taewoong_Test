#include "bullet.h"

bullet::bullet(Player * player)
{
	//�����Ҵ��̶� �迭 ����� �� ���ϰ���, 
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
	//�Ҹ� ��ġ�� �� ��ġ ������
	//�Ҹ� + ������ ��ġ�� �� ��ġ ������
	//�Ҹ� ��ġ�� �� + �������� ��ġ ������
	//�Ҹ� ��ġ + ������� �� + ������ ��ġ ������ ��Ȱ��ȭ
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
