#include <cmath>
#include<iostream>
using namespace std;

int Add(int a, int b);//�������� �������(���������� �������-Function declaration)
int Sub(int a, int b);//�������� ������� ������ �� ��������� �������
int Mul(int a, int b);//����������� ���������
double Div(int a, int b);
double Pow(double a, int b);
double Power(double a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b,s;
	cout << "������� ��� �����: "; cin >> a >> b;
	int c = Add(a, b);// �����(�������������) ������ -Function call
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Sub(a, b) << endl;
	cout << a << "*" << b << "=" << Mul(a, b/*������������ ���������*/) << endl;
	cout << a << "/" << b << "=" << Div(a, b) << endl;
	cout << a << "^" << b << "=" << Pow(a,b) << endl;
}
int Add(int a, int b)// ���������� �������(����������� ������� - Function defination)
{//��������� �� ��� ������ �������
	int c = a + b;
	return c;
}
int Sub(int a, int b)// ���������� ������� �� ��������� � ���� �������
{
	return a - b;
}
int Mul(int a, int b)//����������� ���������
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