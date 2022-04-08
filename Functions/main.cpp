#include <cmath>
#include<iostream>
using namespace std;

int Add(int a, int b);//прототип функции(объявление функции-Function declaration)
int Sub(int a, int b);//прототип состоит только из заголовка функции
int Mul(int a, int b);//принимаемые параметры
double Div(int a, int b);
double Pow(double a, int b);
double Power(double a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b,s;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Add(a, b);// Вызов(использование) фунции -Function call
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Sub(a, b) << endl;
	cout << a << "*" << b << "=" << Mul(a, b/*передаваемые параметры*/) << endl;
	cout << a << "/" << b << "=" << Div(a, b) << endl;
	cout << a << "^" << b << "=" << Pow(a,b) << endl;
}
int Add(int a, int b)// Реализация функции(Определение функции - Function defination)
{//Реализует то что делает функция
	int c = a + b;
	return c;
}
int Sub(int a, int b)// Реализация состоит из заголовка и тела функции
{
	return a - b;
}
int Mul(int a, int b)//принимаемые параметры
{
	return a * b;
}
double Div(int a, int b)
{
	return (double)a / b;
}
double Pow(double a, int b)
{
	//_getch;
	//return  (double) a^b;
	int s = 1;
	//return 1;
	for (int i = 0; i < b; i++)
		s = s * a;
	return s;
	if (b > 0)  return a * Pow(a, -1 + b);
	if (b < 0)  return 1 / Pow(a, -1 * b);
	return 1;
}