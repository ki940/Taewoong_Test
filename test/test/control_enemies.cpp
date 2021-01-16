
#include "control_enemies.h"

void control_enemies::init(Enemy face, int array_number, Screen * screen)
{
	max_number = array_number;
	objacts = (Enemy*)malloc(sizeof(Enemy) * max_number);
	
	for (int i = 0; i < max_number; i++) {
		objacts[i].Init(face.face, screen);
	}
	objacts[0].DrawAvailable = true;
	objacts[0].pos = 0;
	objacts[1].DrawAvailable = true;
	objacts[1].pos = screen->size - face.face_size;
}

void control_enemies::Update(Player * player)
{
	if (player -> DrawAvailable() == false) return;
	count++;
	if (count >= 150)
	{
		indexnumber++;
		count = 0;
	}
	if (indexnumber == max_number) {
		indexnumber = 0;
	}

	objacts[indexnumber].DrawAvailable = true;

}

void control_enemies::Draw(Screen * screen, Player * player)
{
	
	
	for (int i = 0; i < max_number; i++) {
	
			objacts[i].UpdatePos(screen, player);
			objacts[i].Draw(screen);
		// objacts = enemy ����ü
		//�� �̰� enemy����ü�� draw, 
		//�׸��⸦ �����Ϸ��� �� �ݺ��� ���� if���� �ɰų� enemy.cpp���� ����
	}

}


void control_enemies::Delete()
{
	for (int i = 0; i < max_number; i++) {
		objacts[i].Delete();
	}
	free(objacts);
}
