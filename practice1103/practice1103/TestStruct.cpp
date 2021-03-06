#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"
//구조체? 사용자가 임의로 만드는 새로운 자료형
//struct
//struct NAME{   };
//ex)




void input(PERSON* p2, PERSON* p) {
	p2->age = p->age;
	p2->name = p->name;
	strcpy(p2->gen, p->gen);
	p2->ID = p->ID;
	p2->score = p->score;
}


// 메모리 해제 불가
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
	PERSON hong = { 19, const_cast<char*>("홍길동"), "male", 1234, 100 };

	PERSON chal;
	chal.age = 19;
	chal.name = const_cast<char*>("이수진");
	// chal.gen = "female"; //오류 배열로 선언되어서 char* 가 대입되지 않음.
	strcpy(chal.gen, "female");
	chal.ID = 5678;
	chal.score = 80;

	PERSON* sue = (PERSON*)malloc(sizeof(PERSON));
	sue->age = 17;
	sue->name = const_cast<char*>("김철수");
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