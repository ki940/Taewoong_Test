
#include "header.h"

int main() {
	Screen screen(80); //스크린 구조체의 스크린이란 이름의 변수
	Player player("0-0┏", 40);

	Enemy enemy("*_*",&screen); //int num [10] ;
	control_enemies array_init;
	int enemynumber = 10;
	array_init.init(enemy,enemynumber, &screen);
	//가져올 애너미 구조체 변수명, 늘어날 배열의 갯수, 그릴 장소
	
	/*
	Enemy* enemies =  (Enemy*)malloc(sizeof(Enemy) * 10); // 이게 큰 틀이고
	int EnemyNum = 10;
	for (int i = 0; i < EnemyNum; i++) { //이게 잡아놓은 애너미 공간에 값 넣는거고
		enemies[i].Init("*_*", &screen);//이게 각각의 공간에 동적할당겸 값 넣는건데
	}
	*/



	while (true) {
		screen.Clear();
		player.Input();
		//컨트롤애너미 구조체에서 동적할당한 개체를 어떻게 끌어오는가?
		/*
		for (int i = 0; i < enemynumber ; i++)
		{
			//enemies[i].Draw(&screen, player)
		}
		*/
		array_init.Update(&player);
		array_init.Draw(&screen, &player);

		player.Draw(&screen);
		screen.Display();
	}
	/*
	for (int i = 0; i < EnemyNum; i++)
	{
		enemies[i].Delete(); //이게 세부 틀 해제고
	}
	free(enemies);//이게 큰 틀 해제고
	*/
	screen.Delete();
	player.Delete();
	//enemy.Delete();//기존 단일 애너미 생성시에 동적할당 해제 함수
	array_init.Delete();
	exit(1);
	return 0;
}