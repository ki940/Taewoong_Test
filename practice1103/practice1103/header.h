#pragma once

/*
파일분리 사용방법
헤더 파일 작성시 헤더파일의 이름은 해당 cpp파일과 같아야 하며
cpp 파일에 같은 이름의 .h 파일이 선언되어있어야 한다.

함수 선언시 중복 선언의 문제가 발생해 오류가 생길수 있기 때문에
1. 전처리 구문을 추가해 중복선언을 방지한다.
#pragma once

2. 여러 헤더 파일에 같은 이름의 헤더가 선언되면 중복 선인이 된것.
그래서 cpp 파일에 선언하는 방법

3.각각의 헤더파일을 header.h 헤더파일에 모아서 include한다
이후 다른 헤더파일에서는 헤더파일을 include하지 않고
함수를 끌어올 시 cpp파일(구현부)에서 직접 뭉친header.h헤더를 호출한
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h> //system("cls"), sleep 함수 사용


#include "nFunction.h"
#include "MyString.h"

#include "Test.h"

#include"RspGame.h"