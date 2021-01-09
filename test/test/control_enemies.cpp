
#include "control_enemies.h"

// 애너미 개체들 동적할당 해야하는데 왜 안되는가!!!!!!!!  
// 포인터도 까먹었는가??
// 동적 할당 해제는 어디서 하는가!



void control_enemies::init(Enemy face, int array_number, Screen * screen)
{
	max_number = array_number;
	objacts = (Enemy*)malloc(sizeof(Enemy) * max_number);//이게 큰 틀이고
	//동적할당으로 애너미 오브젝트 배열 공간 잡는 이유는 애너미 갯수가
	//가변적일수 있기 때문이다, 동적할당이란 프로그래머(사용자?)가 임의로
	//메모리공간을 할당하는 방법이며 이 구조체함수의 경우 최대 애너미 갯수가
	//임의로 바뀔수 있기때문에 이렇게 된다.

	for (int i = 0; i < max_number; i++) {
		objacts[i].Init(face.face, screen);
	}
}


void control_enemies::Draw(Screen * screen, Player player)
{

	for (int i = 0; i < max_number; i++) {
		//if (DrawAvailable = TRUE) 
		//함수나 구조체, 또는 if문을 잘못 이해하고 사용한듯 적용되지 않음
		//위 if문은 objacts의 draw를 관리해보려 사용했으나 적용되지 않음.

			objacts[i].Draw(screen, player);
		
		// obhacts = enemy 구조체
		//즉 이건 enemy구조체의 draw, 
		//그리기를 제어하려면 이 반복문 내에 if문을 걸거나 enemy.cpp에서 관리

	}

}


void control_enemies::Delete()
{
	for (int i = 0; i < max_number; i++) {
		objacts[i].Delete();
	}
	free(objacts);
}
