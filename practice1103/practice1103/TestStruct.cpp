#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//����ü? ����ڰ� ���Ƿ� ����� ���ο� �ڷ���
//struct
//struct NAME{   };
//ex)

struct Name {
	char name[10];
	int age;
	char * gender;
};


struct PERSON {
	int age;
	char* name;
	char gen[7];
	int ID;
	int score;

	/*
	PERSON(PERSON* p) {
		age = p->age;
		name = p->name;
		strcpy(gen, p->gen);
		ID = p->ID;
		score = p->score;
	}

	PERSON(int _age, char* _name, char* _gen, int _ID, int _score): age(_age), name(_name), ID(_ID), score(_score) {
		strcpy(gen, _gen);
	}

	PERSON(int _age, char* _name, char* _gen, int _ID, int _score) {
		age = _age;
		name = _name;
		strcpy(gen, _gen);
		ID = _ID;
		score = _score;
	}

	PERSON(int age, char* name, char* gen, int ID, int score) {
		this->age = age;
		this->name = name;
		strcpy(this->gen, gen);
		this->ID = ID;
		this->score = score;
	}*/

	// -> == ��Ʈ��Ʈ �������϶� ���� ���, = �� ���� ���
	void input(PERSON* p2, PERSON* p) {
		p2->age = p->age;
		p2->name = p->name;
		strcpy(p2->gen, p->gen);
		p2->ID = p->ID;
		p2->score = p->score;
	}
};

void input(PERSON* p2, PERSON* p) {
	p2->age = p->age;
	p2->name = p->name;
	strcpy(p2->gen, p->gen);
	p2->ID = p->ID;
	p2->score = p->score;
}


// �޸� ���� �Ұ�
PERSON* input(PERSON* p) {
	PERSON* p2 = (PERSON*)malloc(sizeof(PERSON));
	p2->age = p->age;
	p2->name = p->name;
	strcpy(p2->gen, p->gen);
	p2->ID = p->ID;
	p2->score = p->score;
	return p2;
}

void print(PERSON* p) {
	printf("%s %d %s %d %d\n", p->name, p->age, p->gen, p->ID, p->score);
}

void  print_size()
{
	printf("sizeof(PSERSON): %d\n", sizeof(PERSON));
	printf("sizeof(PSERSON::age): %d\n", sizeof(PERSON::age));
	printf("sizeof(PSERSON::name): %d\n", sizeof(PERSON::name));
	printf("sizeof(PSERSON::gen): %d\n", sizeof(PERSON::gen));
	printf("sizeof(PSERSON::ID): %d\n", sizeof(PERSON::ID));
	printf("sizeof(PSERSON::score): %d\n", sizeof(PERSON::score));
}

/*
int main()
{
	PERSON hong = { 19, const_cast<char*>("ȫ�浿"), "male", 1234, 100 };

	PERSON chal;
	chal.age = 19;
	chal.name = const_cast<char*>("�̼���");
	// chal.gen = "female"; //���� �迭�� ����Ǿ char* �� ���Ե��� ����.
	strcpy(chal.gen, "female");
	chal.ID = 5678;
	chal.score = 80;

	PERSON* sue = (PERSON*)malloc(sizeof(PERSON));
	sue->age = 17;
	sue->name = const_cast<char*>("��ö��");
	strcpy(sue->gen, "male");
	sue->ID = 2424;
	sue->score = 90;

	print(&hong);
	print(&chal);
	print(sue);

	PERSON* kim = (PERSON*)malloc(sizeof(PERSON));
	input(kim, &hong);
	print(kim);

	PERSON* lee = (PERSON*)malloc(sizeof(PERSON));
	lee->input(lee, sue);
	print(lee);

	free(lee);
	free(kim);
	free(sue);
	return 0;
}
*/