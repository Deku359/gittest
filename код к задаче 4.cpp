/*
Программа должна переводить число, введенное с клавиатуры в метрах, в километры.
*/
#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float A, B;
	cout << "Введите количество метров: ";
	cin >> A;
	B = A / 1000;
	cout << A << " метров будет " << B << " километра";
}