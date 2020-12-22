#include "enemy.h"
#include "header.h"

enemy::enemy(const char * face, int pos)
{
	this->pos = pos;
	this->face_size = strlen(face);
	this->face = (char*)malloc(sizeof(char) * this->face_size);
	mStrncpy_s(this->face, face_size, face, face_size);

}

bool enemy::Delete()
{
	free(face);
	return true;
}

void enemy::Draw(Screen * screen)
{

	mStrncpy_s(screen->scene + pos, screen->size - pos, face, face_size);

}
