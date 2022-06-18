#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

//* Сделайте рефакторинг задач на проверку нахождения точки в закрашенной области из предыдущего домашнего задания.В результате, вместо двух переменных, описывающих координаты точки, должна быть одна переменная - структура с атрибутами – координатами.

struct cord {
	double x;
	double y;
};

int main()
{
	setlocale(LC_ALL, "rus");
	cord a;
	cout << "Введите х: ";
	cin >> a.x;
	cout << "\n";

	cout << "Введите y: ";
	cin >> a.y;
	system("CLS");

	if (a.y >= pow(a.x, 2) && a.y <= pow(M_E, a.x) && a.y <= pow(M_E, -a.x)) {
		cout << "Точка попадает в область.\n";
	}
	else {
		cout << "Точка не попадает в область.\n";
	}

	return 0;
}