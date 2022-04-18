//#include"Print.h"
#include"stdafx.h"
#include"Constants.h"

template<typename T>void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)//выводит на экран
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
