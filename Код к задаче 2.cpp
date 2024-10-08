/*
Запрограммировать следующее выражение: (а + b — f / а) + f * a * a — (a + b) 
Числа а, b, f вводятся с клавиатуры. 
Организовать пользовательский интерфейс, таким образом, чтобы было понятно, в каком порядке должны вводиться числа.
Пример:
Введите цифры a, b и f:
a=15
b=10
f=3
Вычисляем по формуле: x=(a + b - f / a) + f * a * a - (a + b)
x=675
*/
#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	int a, b, f, x;
	setlocale(LC_ALL, "Russian");
	cout << "Введите цифры a, b и f:" << endl << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "f = ";
	cin >> f;
	cout << "Вычисляем по формуле: x = (a + b - f / a) + f * a * a - (a + b)" << endl;
	x = (a + b - f / a) + f * a * a - (a + b);
	cout << "x = " << x;
}