#pragma once

void Init(char * scene, int len);
void Clear(char * scene, int len);
void Playgame(char * scene, int len, int& playerValue);
void Display(char * scene, int len, const char* str);
bool Gameend(char * scene, int len, int& playerValue);

void GameLoop(char * scene, int len);
