#include"FillRand.h"
#include"stdafx.h"

template<typename T>void FillRand(T arr[], const int n, int minRand, int maxRand)//��������� ������ ���������� �������
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}

void FillRand(double arr[], const int n, int minRand, int maxRand)//��������� ������ ���������� �������
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}

template<typename T>void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)//��������� ������ ��������� ���������
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
