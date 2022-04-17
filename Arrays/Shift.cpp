#include"Statistics.h"
#include"stdafx.h"

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
	for (int i = n - 1; i > number_of_shifts2; i--)
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
	for (int i = n - 1; i > number_of_shifts2; i--)
	{
		int buffer = arr[n - 1];
		for (int i = (n - 1); i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}

void shiftLeft(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftRight(char arr[], const int n, int number_of_shifts2)
{
	for (int i = 0; i < number_of_shifts2; i++)
	{
		char buffer = arr[n - 1];
		for (int i = (n - 1); i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}

void shiftLeft(int arr2[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr2[0];
		for (int j = 0; j < n; j++)
		{
			arr2[j] = arr2[j + 1];
		}
		arr2[n - 1] = buffer;
	}
}
void shiftLeft(double arr2[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr2[0];
		for (int j = 0; j < n; j++)
		{
			arr2[j] = arr2[j + 1];
		}
		arr2[n - 1] = buffer;
	}
}

void shiftRight(int arr2[], const int n, int number_of_shifts2)
{
	for (int i = 0; i < number_of_shifts2; i++)
	{	
		int buffer = arr2[n - 1];
		for (int j = 0; j < number_of_shifts2; j--)
		{
			arr2[j] = arr2[j - 1];
		}
		arr2[n + 1] = buffer;
	}
}
void shiftRight(double arr2[], const int n, int number_of_shifts2)
{
	for (int i = 0; i < number_of_shifts2; i++)
	{
		double buffer = arr2[0];
		for (int j = 0; j < number_of_shifts2; j--)
		{
			arr2[j] = arr2[j - 1];
		}
		arr2[n + 1] = buffer;
	}
}