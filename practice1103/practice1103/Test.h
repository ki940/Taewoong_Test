#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<string.h>

const char* ShowGrade(int x);
char ShowGrade2(int x);
const char* ShowGrade3(int x);

void Chack(int x);
int Quad(int x, int y);

void star(int x);
void Printstar(int x);

int AsciiNum(char x);

int ArrayPointer();
int Pointer1();
int Test_swap2();
void Test_swap3(); // ������ ��ġ���� ����. ���߿� ã�� �����


int Test_ReferenceVariable();
void testMove();


//string ���Ϸ� ���� �и��Ұ�. 
// string ���� �Լ����� ����,���� �и��� �����ϴ� ���� ���� �� �������� ����.




//����ü , ���Ƿ� ����� �ڷ���
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
		strcpy_s(p2->gen, p->gen);
		p2->ID = p->ID;
		p2->score = p->score;
	}
};


void input(PERSON* p2, PERSON* p);
PERSON* input(PERSON* p);
void print(PERSON* p);
void  print_size();
int TestStruct();




//�����Ҵ�  malloc(memory allocation)(stdlib.h �� ����Ǿ������Ƿ� c���� ���� �� include������Ѵ�)
//���ڷ� ���޵� ũ���� ����Ʈ �� ��ŭ �޸� ������ ����� void * �� ��ȯ�Ǵ� �Լ��̸�
//������� (���� �޾ƿ� ����) = (������ ������ Ÿ�� *) malloc(sizeof(���� ������Ÿ��) * ����� ũ��)
//ex) int arr = (int *) malloc(sizeof(int) * 10) == int�� ������Ÿ���� 10�� ������ �Ҵ�
//��� �� �ݵ�� free�� ����� ��(�޸� ����) ex) free(arr) << free�ȿ� ���� �̸��� ������ ������ �̸�(�ּ�?)

//mallco calloc memset ����
void Test_DynamicAllocation();