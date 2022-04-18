#include"stdafx.h"

void FillRand(double arr[], const int n, int minRand, int maxRand)//заполняет массив случайными числами
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}
