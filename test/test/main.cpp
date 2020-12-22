
#include "header.h"

int main() {
	Screen screen(80); //스크린 구조체의 스크린이란 이름의 변수
	Player player("0-0┏", 40);
	Enemy enemy("*_*", 15);
	Enemy enemy2("*_*", 65);
	while (true) {
		screen.Clear();
		player.Input();
		enemy.Draw(&screen, player);
		enemy2.Draw(&screen, player);
		player.Draw(&screen);
		screen.Display();
	}
	screen.Delete();
	player.Delete();
	enemy.Delete();
	exit(1);
	return 0;
}