#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n,int minRand=0,int maxRand=100);//заполняет массив рандомным значением
void Print(int arr[], const int n);//выводит на экран
void Sort(int arr[], const int n);//сортирует значения
int Sum(int arr[], const int n);
double Avg(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметические элементов массива: " << Avg(arr, n) << endl;
	
	/*FillRand(brr, m);
	Print(brr, m);
	Sort(brr, m);
	Print(brr, m);*/
}

void FillRand(int arr[],const int n ,int minRand, int maxRand)//заполняет массив случайными числами
{
	for (int i = 0; i < n; i++)
	{
       arr[i] = rand() % (maxRand-minRand)+minRand;
    }
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<< tab;
	}
	cout << endl;
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
int Sum(int arr[], const int n)//реализация
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}