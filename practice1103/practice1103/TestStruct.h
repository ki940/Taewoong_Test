
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
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

	// -> == 스트럭트 포인터일때 대입 방법, = 와 같은 기능
	void input(PERSON* p2, PERSON* p) {
		p2->age = p->age;
		p2->name = p->name;
		strcpy_s(p2->gen, p->gen);
		p2->ID = p->ID;
		p2->score = p->score;
	}
};

void input(PERSON* p2, PERSON* p);
PERSON* input(PERSON* p);
void print(PERSON* p);
void  print_size();