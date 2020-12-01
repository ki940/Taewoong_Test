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
void Test_swap3(); // 순서에 위치하지 않음. 나중에 찾기 어려움


int Test_ReferenceVariable();
void testMove();


//string 파일로 따로 분리할것. 
// string 관련 함수들이 많고,따로 분리해 관리하는 것이 관리 및 가독성에 좋음.




//구조체 , 임의로 만드는 자료형
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
int TestStruct();




//동적할당  malloc(memory allocation)(stdlib.h 에 선언되어있으므로 c에서 사용시 꼭 include해줘야한다)
//인자로 전달된 크기의 바이트 수 만큼 메모리 공간을 만들며 void * 로 반환되는 함수이며
//사용방법은 (값을 받아올 변수) = (변수의 데이터 타입 *) malloc(sizeof(변수 데이터타입) * 사용할 크기)
//ex) int arr = (int *) malloc(sizeof(int) * 10) == int형 데이터타입의 10개 공간을 할당
//사용 후 반드시 free를 사용할 것(메모리 해제) ex) free(arr) << free안에 들어가는 이름은 대입한 변수의 이름(주소?)

//mallco calloc memset 이해
void Test_DynamicAllocation();