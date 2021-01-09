
#include "control_enemies.h"

// �ֳʹ� ��ü�� �����Ҵ� �ؾ��ϴµ� �� �ȵǴ°�!!!!!!!!  
// �����͵� ��Ծ��°�??
// ���� �Ҵ� ������ ��� �ϴ°�!



void control_enemies::init(Enemy face, int array_number, Screen * screen)
{
	max_number = array_number;
	objacts = (Enemy*)malloc(sizeof(Enemy) * max_number);//�̰� ū Ʋ�̰�
	//�����Ҵ����� �ֳʹ� ������Ʈ �迭 ���� ��� ������ �ֳʹ� ������
	//�������ϼ� �ֱ� �����̴�, �����Ҵ��̶� ���α׷���(�����?)�� ���Ƿ�
	//�޸𸮰����� �Ҵ��ϴ� ����̸� �� ����ü�Լ��� ��� �ִ� �ֳʹ� ������
	//���Ƿ� �ٲ�� �ֱ⶧���� �̷��� �ȴ�.

	for (int i = 0; i < max_number; i++) {
		objacts[i].Init(face.face, screen);
	}
}

void control_enemies::Draw(Screen * screen, Player player)
{
	for (int i = 0; i < max_number; i++) {
		objacts[i].Draw(screen, player);
	}
}

void control_enemies::Delete()
{
	for (int i = 0; i < max_number; i++) {
		objacts[i].Delete();
	}
	free(objacts);
}
