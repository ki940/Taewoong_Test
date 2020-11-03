
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>



//포인터의 이해
 /*
#include <string.h>    // strlen 함수가 선언된 헤더 파일

int main()
{
	const char *s1 = "Hello";       // 포인터에 문자열 Hello의 주소 저장
	char s2[] = { 'H', 'e', 'l', 'l', 'o'};    // 크기가 10인 char형 배열을 선언하고 문자열 할당
	int s3[] = { 1, 2, 3, 4, 5 };
	int * s4 = s3; //포인터 선언


	printf("%c\n", *s2);
	printf("%d\n", strlen(s1));    // 5: strlen 함수로 문자열의 길이를 구함
	printf("%d\n", strlen(s2));    // 5: strlen 함수로 문자열의 길이를 구함
	printf("%d\n", sizeof(s1));
	printf("%d\n", sizeof(s2));
	printf("%d\n", sizeof(s3));
	printf("%d\n", sizeof(s3)/sizeof(int)); //

	printf("%d\n", s3[0]);//배열의 첫번째 값
	printf("%d\n", s4[0]);//포인터의 첫번째 값 배열의 주소값을 불러왔을때 배열로 이용 가능한가 확인
	printf("%p\n", s3);//배열의 주소값
	printf("%p\n", s4);//포인터의 주소값
	printf("%d\n", *s4);//포인터의 주소가 가리키는 값
	printf("%p %p %p\n", s4-1, s4, s4+1);//포인터의 주소값
	printf("%d %d %d\n", *(s4 - 1), *s4, *(s4 + 1));//포인터의 주소값이 이동했을때 내용물 값


	return 0;
}
*/


/*
//포인터와 배열 그리고 문자열
//문자열 래퍼런스의 이해가 더 필요, 이는 대입받은 주소를 계속 따라가는데 어째서 이렇게 되는가?
int main()
{
	const char *s1 = "Hello, world!";       // char 포인터에 문자열의 메모리 주소를 저장
	char s2[20] = "Hello, world!";    // char 배열에 문자열 저장,
	const char * s3 = s1;      // char 배열에 문자열 저장(배열의 크기 생략)s1주소를 복사해서 옴

	//s4는 s1을 따라간다, s1과 주소를 공유하는 중
	const char* & s4 = s1;	//문자열 래퍼런스 사용: s1 에 대한 또 다른 이름(별명)

	printf("s1 %p %s\n", s1, s1);
	printf("s2 %p %s\n", s2, s2);
	printf("s3 %p %s\n", s3, s3);
	printf("s4 %p %s\n", s4, s4);

	printf("s1에 Hello2 대입\n");
	s1 = "Hello2"; // s1에 새로운 문자열을 대입했고 문자열 래퍼런스를 사용한 s4는 바뀐 s1의 주소를 받는다
	printf("s1 %p %s\n", s1, s1);
	printf("s2 %p %s\n", s2, s2);
	printf("s3 %p %s\n", s3, s3);
	printf("s4 %p %s\n", s4, s4);
	return 0;
}
*/


//2020_10_27

//배열을 이용해 배열 원소의 평균 구하기, 
float average(int * array_name, int array_length)//float형으로 선언했으므로 출력할 때 %f로 출력함을 잊지 말자
{
	float aver;
	float sum = 0;
	for (int i = 0; i < array_length; i++) {
		sum += array_name[i];
	}
	aver = sum / array_length;
	return aver;
}

//길이가 정해진 배열을 for문 rand함수를 이용해 배열 원소 채우기, 
int* Random1(int* array_name, int array_length) {
	for (int i = 0; i < array_length; i++) {
		srand(i);//시드값을 주는 rand함수, i가 증가하면서 시드값도 자연히 바뀐다.
		array_name[i] = rand();//rand함수 사용시 time헤더와 stdlib헤더 필수
	}
	return array_name;
}

int* Random2(int* array_name, int array_length) {
	for (int i = 0; i < array_length; i++) {
		srand(i);
		*(array_name + i) = rand(); //배열의 주소 + i(++)로 연속되는 배열의 성질을 이용한 원소 채우기
	}
	return array_name;
}

int* Random3(int* array_name, int array_length) {
	for (int i = 0; i < array_length; i++) {
		srand(i);
		*(array_name++) = rand();//배열의 주소 ++(증가연산자)로 연속되는 배열의 성질을 이용한 원소 채우기
	}
	return (array_name - array_length);
}

void print_array(int* array_name, int array_length) {
	for (int i = 0; i < array_length; i++) {
		printf("%p:  %d\n", &array_name[i], array_name[i]);//%p(포인터(주소) 출력) 주소와 값을 확인한다
	}
}
