#include<stdio.h>

//if 1번 대소비교
void Compare(int x, int y)
{
	printf("%c", (x > y ? '>' : x == y ? '=' : '<')); //삼항연산자
}

//if 2번 점수입력으로 성적 나타내기
const char* ShowGrade(int x)
{
	if (x > 100 || x < 0) return  "유효숫자가 아닙니다.\n";
	if (x >= 90) {
		return "A";
	}
	else if (x >= 80) {
		return "B";
	}
	else if (x >= 70) {
		return "C";
	}
	else if (x >= 60) {
		return "D";
	}
}


//삼항사용 if2번 수 입력은 100보다 작은 자연수
char ShowGrade2(int x)
{
	return(x >= 90 ? 'A' : x >= 80 ? 'B' : x >= 70 ? 'C' : x >= 60 ? 'D' : 'F'); // 삼항연산자
	 //삼항연산자의 가독성이 떨어지므로 너무 긴 조건문은 사용하지 않는다.	
}


//switch case 사용 if2번, 수 입력은 0~100까지
const char* ShowGrade3(int x)
{
	switch (x / 10)
	{
	case 10:
		return "만점~\n";
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("F\n");
		break;
	}
}


//for문 1번 임의의 숫자의 구구단 출력
// 문자열 배열 -> 동적할당
void mult(int x)
{
	for (int i = 1; i <= 9; i++)
	{
		printf("%d X %d = %d \n", x, i, x*i);
	}
}



//if 3번 윤년 채크
void Chack(int x) // 400의 배수면 참, 100의 배수면 거짓, 4의 배수면 참
{
	if (x % 400 == 0)
	{
		printf("윤년이 아니다\n");
	}
	if (x % 100 == 0)
	{
		printf("윤년이 아니다\n");
	}
	else if (x % 4 == 0)
	{
		printf("윤년이다\n");
	}
	else printf("윤년이 아니다\n");
}

//함수 사용하지 않고 삼항연산자 이용하여 윤년 출력

//if 4번 사분면 고르기 
int Quad(int x, int y)//사분면 구분 함수
{
	if (x > 1000 || x < -1000 || y>1000 || y < -1000) return 0; // 0 = 에러

	if (x == 0 && y == 0) return 0; // x.y가 둘다 0ㅇ이면 원점
	else if (x == 0 || y == 0) return 0; // 0 = 사분면이 아니다
	else
	{
		if (x > 0) //x가 양수일때
		{
			if (y > 0) return 1;//y도 양수면 1사분면
			else return 4; //y가 음수면 4사분면
		}
		else // x가 음수일떄
		{
			if (y > 0) return 2; // y가 양수면 2 사분면
			else return 3; //y가 음수면 3사분면
		}
	}
}
