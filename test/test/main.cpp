
#include "header.h"

int main() {
	Screen screen(80); //��ũ�� ����ü�� ��ũ���̶� �̸��� ����
	Player player("0-0��", 40);

	Enemy enemy("*_*",&screen); //int num [10] ;
	control_enemies array_init;
	int enemynumber = 10;
	array_init.init(enemy,enemynumber, &screen);
	//������ �ֳʹ� ����ü ������, �þ �迭�� ����, �׸� ���
	
	/*
	Enemy* enemies =  (Enemy*)malloc(sizeof(Enemy) * 10); // �̰� ū Ʋ�̰�
	int EnemyNum = 10;
	for (int i = 0; i < EnemyNum; i++) { //�̰� ��Ƴ��� �ֳʹ� ������ �� �ִ°Ű�
		enemies[i].Init("*_*", &screen);//�̰� ������ ������ �����Ҵ�� �� �ִ°ǵ�
	}
	*/



	while (true) {
		screen.Clear();
		player.Input();
		//��Ʈ�Ѿֳʹ� ����ü���� �����Ҵ��� ��ü�� ��� ������°�?
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
		enemies[i].Delete(); //�̰� ���� Ʋ ������
	}
	free(enemies);//�̰� ū Ʋ ������
	*/
	screen.Delete();
	player.Delete();
	//enemy.Delete();//���� ���� �ֳʹ� �����ÿ� �����Ҵ� ���� �Լ�
	array_init.Delete();
	exit(1);
	return 0;
}