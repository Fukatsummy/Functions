#pragma once
#include"Constants.h"
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);//��������� ������ ��������� ���������

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100);

void FillRand(char arr[ROWS][COLS], const int n, const int COLS, const int ROWS);
void FillRand(double arr[], const int n, const int ROWS, const int COLS, int minRand, int maxRand);