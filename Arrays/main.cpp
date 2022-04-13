#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n---------------------------\n"

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);//заполняет массив рандомным значением
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS,int minRand = 0, int maxRand = 100);//заполняет массив рандомным значением

void Print(int arr[], const int n);//выводит на экран
void Print(double arr[], const int n);//выводит на экран
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);//выводит на экран

void Sort(int arr[], const int n);//сортирует значения
void Sort(double arr[], const int n);//сортирует значения
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);

void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftLeft(double arr[], const int n, int number_of_shifts);

void shiftRight(int arr[], const int n,int number_of_shifts2);
void shiftRight( double[], const int n,int number_of_shifts2);

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

void FillRand(int arr[], const int n, int minRand, int maxRand)//заполняет массив случайными числами
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)//заполняет массив случайными числами
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)//заполняет массив рандомным значением
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j]=rand()%(maxRand - minRand) + minRand;
		}
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)//выводит на экран
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
void Sort(double arr[], const int n)
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
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
			        {
				         int buffer = arr[i][j];
				         arr[i][j] = arr[k][l];
				         arr[k][l] = buffer;
			        }
					//iterations++;
				}
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
double Sum(double arr[], const int n)//реализация
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				sum += arr[i][j];
			}
	    }return sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return Sum(arr, n) / n;
}
//double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
//{
//	return (double) Sum /( ROWS * COLS);
//}

int minValueIn(int arr[], const int n)
{
	int min = arr[1];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
double minValueIn(double arr[], const int n)
{
	double min = arr[1];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

int maxValueIn(int arr[], const int n)
{
	int max = arr[1];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
double maxValueIn(double arr[], const int n)
{
	double max = arr[1];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

void shiftRight(int arr[], const int n, int number_of_shifts2)
{
	for (int i = n-1; i > number_of_shifts2; i--)
	{
		int buffer = arr[n - 1];
		for (int i = (n - 1); i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void shiftRight(double arr[], const int n, int number_of_shifts2)
{
	for (int i = n-1; i > number_of_shifts2; i--)
	{
		int buffer = arr[n - 1];
		for (int i = (n - 1); i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}

