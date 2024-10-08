/*Составьте программу, которая напечатает рисунок, используя символы из таблицы ASCII(см.Рисунок 1).
*/
#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b = 0;
	cout << "Введите число: ";
	cin >> a;
	for (; b < 10; b++)
	{
		cout << char(a);
	}


}