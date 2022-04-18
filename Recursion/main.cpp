#include<iostream>
using namespace std;

void elevator(int floor);
int factorial(int n);
double power(double a, int n);
//#define ELEVATOR

void main()
{
	setlocale(LC_ALL, "");
	/*cout << "Hello World!";
	main();*/

#ifdef ELEVATOR
	int n;
	cout << "Введите номер этажа: "; cin >> n;
	elevator(n);
#endif // Elevator
	/*int n;
	cout << "Введите число для вычисления Факториала: "; cin >> n;
	cout << factorial(n) << endl;*/

	int a;
	int n;
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >>n ;
	cout << power(a, n) << endl;
	main();

}
void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor << "этаже\n";
	elevator(floor - 1);
	cout << "Вы на " << floor << "этаже\n";
}
int factorial(int n)//факториал
{
	/*if (n < 0)return 0;
	if (n == 0)return 1;
	return n*factorial(n - 1);*/
	
	return n<0?0:n == 0 ? 1 : n * factorial(n - 1);
}
double power(double a, int n) //степень
{
	/*if (n == 0)return 1;
	else if(n>0) return a * power(a, n - 1);
	else if (n < 0)return 1 / a * power(a, n + 1);*/
	//return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / a * power(a, n + 1);//второй вариант решения
	return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / power(a, -n);//третий вариант
}