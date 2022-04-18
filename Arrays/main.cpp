//#include<iostream>
//using namespace std;

//#define tab "\t"
//#define delimiter "\n-----------------------------------------------------------\n"
#include"Constants.h"
#include"FillRand.h"
#include"Statistics.h"
#include"Print.h"
#include"Shift.h"
#include"Sort.h"
#include "stdafx.h"

//const int ROWS = 3;
//const int COLS = 4;

//template<typename T>
//void FillRand(T arr[], const int n, int minRand = 0, int maxRand = 100);
//void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
//template<typename T>
//void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);

template<typename T>void Print(T arr[], const int n);
template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T Sum(T arr[], const int n);
template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> double Avg(T arr[], const int n);
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T minValueIn(T arr[], const int n);
template<typename T>T maxValueIn(T arr[], const int n);

//#include"Statistics.cpp"
//#include"Print.cpp"
//#include"FillRand.cpp"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int number;
	int buffer;
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметические элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	cout << "Введите количество сдвигов: "; cin >> number;
	/*shiftLeft(arr, n, number);
	Print(arr, n);
	shiftRight(arr, n, number);
	Print(arr, n);*/

	cout << delimiter << endl;

	const int m = 8;
	double brr[m];
	int number1;
	int buffer1;
	FillRand(brr, m);
	Print(brr, m);
	Sort(brr, m);
	Print(brr, m);
	cout << "Сумма элементов массива: " << Sum(brr, m) << endl;
	cout << "Среднее арифметические элементов массива: " << Avg(brr, m) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr, m) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr, m) << endl;
	cout << "Введите количество сдвигов: "; cin >> number1;
	/*shiftLeft(brr, n, number1);
	Print(brr, m);
	shiftRight(brr, m, number1);
	Print(brr, m);*/

	cout << delimiter << endl;

	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	Sort(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(arr2, ROWS, COLS);
	cout << "Среднее арифметические элементов массива: " << Avg(arr2, ROWS, COLS) << endl;
}

//template<typename T>
//void FillRand(T arr[], const int n, int minRand, int maxRand)
//{
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = rand() % (maxRand - minRand) + minRand;
//	}
//}
//void FillRand(double arr[], const int n, int minRand, int maxRand)
//{
//	minRand *= 100;
//	maxRand *= 100;
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = rand() % (maxRand - minRand) + minRand;
//		arr[i] /= 100;
//	}
//}
//
//template<typename T>
//void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
//{
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			arr[i][j] = rand() % (maxRand - minRand) + minRand;
//		}
//	}
//}
//template<typename T>void Print(T arr[], const int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	cout << endl;
//}
//template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
//{
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			cout << arr[i][j] << "\t";
//		}
//		cout << endl;
//	}
//}
//
//template<typename T>T Sum(T arr[], const int n)
//{
//	T sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += arr[i];
//	}
//	return sum;
//}
//template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
//{
//	T sum = 0;
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			sum += arr[i][j];
//		}
//	}return sum;
//}
//template<typename T>double Avg(T arr[], const int n)
//{
//	return (double)Sum(arr, n) / n;
//}
//template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
//{
//	return (double)Sum(arr, ROWS, COLS) / (ROWS*COLS);
//}
//
//template<typename T>T minValueIn(T arr[], const int n)
//{
//	T min = arr[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] < min)min = arr[i];
//	}
//	return min;
//}
//template<typename T>T maxValueIn(T arr[], const int n)
//{
//	T max = arr[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] > max)max = arr[i];
//	}
//	return max;
//}



