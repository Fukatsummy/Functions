#include<iostream>
#include<conio.h>
using namespace std;

#define VERTICAL_SHIFT  "\n\n\n\n\n"
#define HORIZONTAL_SHIFT  "\t\t\t\t"

void PrintField(char field[], const int n, char player);
void Move(char field[], const int n, char player);
void Check(char field[], const int n, char player);

void main()
{
	setlocale(LC_ALL, "");

	const int n = 9;
	char field[n] = {};
	//for (int i = 0; i < n; i++)field[i] = i + 49;//49 - ASCII-код символа 1
	PrintField(field, n, '0');
}
void PrintField(char field[], const int n, char player)
{
	system("CLS");//функция system() вызывает любую команду командной строки
	//точнее любую программу, которую можно запустить из командной строки
	//команда CLS очищает экран(clear)
	cout << VERTICAL_SHIFT;
	for (int i = 6; i >= 0; i -= 3)
	{
		cout << HORIZONTAL_SHIFT;
		cout << " ";
		for (int j = 0; j < 3; j++)
		{
			cout << field[i + j];
			if (j < 2)cout << " | ";
		}
		cout << endl;
		if (i > 0)cout << HORIZONTAL_SHIFT << "--- --- ---\n";
	}
	//Move(field, n, player);
	Check(field, n, player);
}
void Move(char field[], const int n, char player)
{
	char key;
	do
	{
		key = _getch();
		if (key == 27)return;
		if (key<'1' || key>'9')cout << "\aБудь внимателен!\n";
		// \a (alert/alarm)-вывод в консоль звукового синглана
		else if (field[key - 49] != 0 && field[key - 49] != ' ')cout << "\aЗанято!\n";
	} while (key<'1' || key>'9' || field[key - 49] != 0 && field[key - 49] != ' ');
	field[key - 49] = player;
	//Check(field, n, player);
	PrintField(field, n, player /*== 'X' ? '0' : 'X'*/);
}
void Check(char field[], const int n, char player)
{
	bool game_over = false;
	if (field[0] == player && field[4] == player && field[8] == player)game_over = true;
	if (field[2] == player && field[4] == player && field[6] == player)game_over = true;
	for (int i = 6; i >= 0; i -= 3)
	{
		if (field[i] == field[i + 1] && field[i] == field[i + 2] && field[i] == player)game_over = true;
	}
	for (int i = 0; i < 3; i++)
	{
		if (field[i] == field[i + 3] && field[i] == field[i + 6] && field[i] == player)game_over = true;
	}
	if (game_over)
	{
		cout << player << " Победа!\n";
		return;
	}
	//PrintField(field, n, player == 'X' ? '0' : 'X');
	Move(field, n, player == 'X' ? '0' : 'X');
}