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
	cout << "������� ����� �����: "; cin >> n;
	elevator(n);
#endif // Elevator
	/*int n;
	cout << "������� ����� ��� ���������� ����������: "; cin >> n;
	cout << factorial(n) << endl;*/

	int a;
	int n;
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >>n ;
	cout << power(a, n) << endl;
	main();

}
void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "�� � �������" << endl;
		return;
	}
	cout << "�� �� " << floor << "�����\n";
	elevator(floor - 1);
	cout << "�� �� " << floor << "�����\n";
}
int factorial(int n)//���������
{
	/*if (n < 0)return 0;
	if (n == 0)return 1;
	return n*factorial(n - 1);*/
	
	return n<0?0:n == 0 ? 1 : n * factorial(n - 1);
}
double power(double a, int n) //�������
{
	/*if (n == 0)return 1;
	else if(n>0) return a * power(a, n - 1);
	else if (n < 0)return 1 / a * power(a, n + 1);*/
	//return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / a * power(a, n + 1);//������ ������� �������
	return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / power(a, -n);//������ �������
}