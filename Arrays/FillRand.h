#pragma once
#include"Constants.h"
#include"FillRand.cpp"

template<typename T>
void FillRand(T arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);//заполняет массив рандомным значением
template<typename T>
void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);