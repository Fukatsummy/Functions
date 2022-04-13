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
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr, n) << endl;
	cout << "������� ���������� �������: "; cin >> number;
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
	cout << "����� ��������� �������: " << Sum(brr, m) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(brr, m) << endl;
	cout << "����������� �������� � �������: " << minValueIn(brr, m) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(brr, m) << endl;
	cout << "������� ���������� �������: "; cin >> number1;
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
	cout << "����� ��������� �������: " << Sum(arr2, ROWS, COLS);
	cout << "������� �������������� ��������� �������: " << Avg(arr2, ROWS, COLS) << endl;
}



