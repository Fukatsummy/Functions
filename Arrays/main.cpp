#include<iostream>
using namespace std;

#include"Constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Shift.h"
#include"Sort.h"
#include"Statistics.h"

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
	shiftLeft(arr, n, number);
	Print(arr, n);
	shiftRight(arr, n, number);
	Print(arr, n);

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
	shiftLeft(brr, n, number1);
	Print(brr, m);
	shiftRight(brr, m, number1);
	Print(brr, m);

	cout << delimiter << endl;

	
	int arr2[ROWS][COLS];
	//const int n;
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	Sort(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(arr2, ROWS, COLS);
	cout << "Среднее арифметические элементов массива: " << Avg(arr2, ROWS, COLS) << endl;
}



