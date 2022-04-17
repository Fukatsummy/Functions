#include"Statistics.h"
#include"stdafx.h"

template<typename T>int Sum(T arr[], const int n)//реализация
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
//double Sum(double arr[], const int n)//реализация
//{
//	double sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += arr[i];
//	}
//	return sum;
//}
template<typename T>int Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}return sum;
}

template<typename T>double Avg(T arr[], const int n)
{
	return Sum(arr, n) / n;
}
//double Avg(double arr[], const int n)
//{
//	return Sum(arr, n) / n;
//}
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS*COLS);
}

template<typename T>int minValueIn(T arr[], const int n)
{
	int min = arr[1];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
//double minValueIn(T arr[], const int n)
//{
//	double min = arr[1];
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] < min)min = arr[i];
//	}
//	return min;
//}
template<typename T>int maxValueIn(T arr[], const int n)
{
	int max = arr[1];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
//double maxValueIn(double arr[], const int n)
//{
//	double max = arr[1];
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] > max)max = arr[i];
//	}
//	return max;
//}
