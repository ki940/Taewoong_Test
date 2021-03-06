#include "player.h"
#include "header.h"

player::player(const char * _face, int _pos)
{
	init(_pos);
	face_size = strlen(_face);
	face = (char*)malloc(sizeof(char) * face_size);
	mStrncpy_s(face, face_size, _face, face_size);
	face_direction = 1;
}
void player::init(int pos)
{
	this->pos = pos;
	overlap = 0;
}

bool player::Delete()
{
	free(face);
	return true;
}

void player::Input()
{
	if (_kbhit()) {
		switch (_getch())
		{
		case 'a':
			if (DrawAvailable() == false) return;
				pos--;
			mStrncpy_s(face, face_size, "┓0-0", face_size);
			face_direction = 0;
			break;

		case 'd':
			if (DrawAvailable() == false) return;
			pos++;
			mStrncpy_s(face, face_size, "0-0┏", face_size);
			face_direction = 1;
			break;

		case ' '://이곳에 발사버튼을 놔야하는데 여기서 불렛 구조체를 참조?하는법을 잘 모르겠음
		//인풋 매개에 불릿구조체를 놓고 해도 되는건지 놓을땐 어떻게 놔야하는지
			
			break;
		case 'q':
			//return;
			exit(1);//이후 재시작 버튼 넣을때도 이 케이스문에 넣으면 될듯
		case 'r':
			init(pos);
		default:
			break;
		}
	}
}

void player::Draw(Screen* screen)
{
	if (DrawAvailable() == false) return;
	if (pos < 0)  pos = 0;
	else if (pos > screen->size - face_size) pos = screen->size - face_size;
	mStrncpy_s(screen->scene + pos, screen->size - pos, face, face_size);
}
