#include "header.h"
#include "nFunction.h"


//if 1번 대소비교
char Compare(int x, int y)
{
	//printf("%c", (x > y ? '>' : x == y ? '=' : '<')); //삼항연산자 
	return (x > y ? '>' : x == y ? '=' : '<');
	//앞에값이 뒤보다 크면 '>' 같으면 '=' 작으면 '<' 표시하는 함수
}

// 지역변수 전역변수
//call by value
//지역변수로 스왑함, 주소값이 아니라 함수 내의 새 변수에 인자의 값만 받아와서 그 두개의 값을 바꾼다
//그렇기 때문에 함수 내부에선 값이 바뀌지만 함수 외부에선 서로 값이 바뀌지 않는다
//이를 해결하기 위해 call by reference를 사용한다
void swap1(int a, int b) {
	printf("%p, %p\n", &a, &b);
	printf("%d, %d\n", a, b);
	int temp = a;
	a = b;
	b = temp;
	printf("%p, %p\n", &a, &b);
	printf("%d, %d\n", a, b);
}

//callby reference
//인자의 주소값(포인터)을 서로 바꾸게 된다
//값이 아닌 인자의 주소값이 바뀌는 것이기에 함수 밖에서도 스왑이 적용되며 포인터 인자로 호출했으므로 출력시 *를 꼭 붙여주자
//서로의 주소값이 바뀌므로 자연스럽게 값도 서로 바뀐다
void swap2(int* a, int* b) { // a의 주소 b의 주소를 인자로 호출
	printf("%p, %p\n", a, b);// a와 b의 주소를 출력
	printf("%d, %d\n", *a, *b);//a와 b의 값을 출력
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("%p, %p\n", a, b);
	printf("%d, %d\n", *a, *b);
}


//문자열, 배열, 포인터에 대해 정리하기
//문자열은  NULL 또는 '\0'로 끝나는 문자들로 이루어진 배열이다
//배열은 같은 데이터타입을 가지는 변수들의 집합이다

//포인터는 주소값을 가르키는 변수이다, *(참조 연산자)를 붙여 선언하며
//int형 포인터는 int * 변수명, char형 포인터는 char * 변수명
//포인터의 크기는 운영체제 크기에 따라 32bit시 4byte, 64bit 시 8byte가 된다



//래퍼런스를 이용한 스왑, 포인터가 아니더라도 함수 외부의 값이 바뀜을 확인할수 있다.
void swap3(int & x, int & y)
{
	printf("swap3: %p %d %p %d \n", &x, x, &y, y);
	int temp = x; 
	x = y;
	y = temp;
	printf("swap3: %p %d %p %d \n", &x, x, &y, y);
}




//컴퓨터의 메모리 구조 정리
//프로그램엔 코드, 데이터, 힙, 스택 영역이 있으며
//코드는 일반적인 우리가 치는 코드가 들어가있는 영역

//데이터 영역은 프로그램 시작부터 끝까지 살아남아야 하는 데이터가 들어가있는 장소
//정적변수와 전역변수가 보통 포함됨

//스택과 힙 영역은 코드와 데이터 영역 아래에서 설정되며 힙은 위에서부터 아래로 스택은 아래에서부터 위로 데이터가 쌓인다
//힙과 스택을 무한정 쌓다보면 둘의 데이터가 만나 오류가 생기니 이 공간을 사용할때에는 주의해야 함
//그래서 동적할당 시 메모리 해제(free)를 꼭 해줘야 한다

//스택 영역은 프로그램이 돌아가면서 지워졌다 생성되었다 하는 데이터들
//함수 내부에서 자연스럽게 생성되고 사라지는 데이터, 함수가 끝나면 메모리도 자연히 해제된다
//함수 내부에서 생성되었다 사라지는 데이터 = 스택 영역, 지역변수와 매개변수 선입후출

//힙 영역은 프로그래머에 의해 임의적으로 공간을 가졌다가 임의적으로 해제할수 있는 공간,
//<동적할당 부분>, 사용자가 임의로 메모리공간을 할당해제를 할수 있는 공간.
//함수가 끝나도 메모리공간 해제(free)를 안 해주면 메모리공간이 계속 남는다.
//new, malloc, calloc, 



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


//10가지 수 중 가장 큰수, 작은수, 합, 평균 출력하기 배열
int*  ArrayTest()// 10개의 크기를 가지는 배열과 그 안의 랜덤한 숫자를 집어넣는 함수
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		srand(i);// 랜덤에 시드를 부여하는 함수
		arr[i] = rand();// 랜덤한 숫자를 i번째에 삽입
	}
	printf("arr의 값\n");

	for (int i = 0; i < 10; i++)
	{
		printf("%d번째 배열의 수 = %d\n", i + 1, arr[i]);
	}
	return arr;
}

void  ArrayTest2(int* arr, int size)// size의 크기를 가지는 배열과 그 안의 랜덤한 숫자를 집어넣는 함수
{
	for (int i = 0; i < size; i++)
	{
		srand(i);// 랜덤에 시드를 부여하는 함수
		arr[i] = rand();// 랜덤한 숫자를 i번째에 삽입
	}
}

void ArrayPrint(int* arr, int size) {
	printf("arr의 값\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d번째 배열의 수 = %d\n", i + 1, arr[i]);
	}
}

int ArrayMax(int * array_name, int array_length) // 배열중 가장 큰 숫자 찾기
{
	int maxnum = array_name[0];
	for (int i = 0; i < array_length; i++)
	{
		if (array_name[i] > maxnum) {
			maxnum = array_name[i];
		}
	}
	return maxnum;
}

int ArrayMin(int * arr, int len)
{
	int min = arr[0];
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

int ArraySum(int * arr, int len)
{
	int sum = 0;
	for (int i = 0; i < len - 1; i++)
	{
		sum += arr[i];
	}
	return sum;
}

float ArrayEvry(int * arr, int len)
{
	float sum = 0;
	for (int i = 0; i < len - 1; i++)
	{
		sum += (float)arr[i];
	}
	return sum / len;
}
