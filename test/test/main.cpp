
#include "header.h"

int main() {
	Screen screen(80); //��ũ�� ����ü�� ��ũ���̶� �̸��� ����
	Player player("0-0��", 70);
	Enemy enemy("*_*", 75);
	while (true) {
		screen.Clear();
		player.Input();
		enemy.Draw(&screen);
		player.Draw(&screen);
		screen.Display();
	}
	screen.Delete();
	player.Delete();
	enemy.Delete();
	exit(1);
	return 0;
}