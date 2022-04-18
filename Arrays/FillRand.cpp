//#include"FillRand.h"
#include"stdafx.h"
#include"Constants.h"

template<typename T>void FillRand(T arr[], const int n, int minRand, int maxRand)//заполняет массив случайными числами
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
template<typename T>void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)//заполняет массив рандомным значением
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
