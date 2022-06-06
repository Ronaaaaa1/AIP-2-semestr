#include <iostream>
using namespace std;

//4. Описать процедуру Swap(X, Y), меняющую содержимое переменных X и Y (X и Y — вещественные параметры, являющиеся одновременно входными и выходными). С ее помощью для данных переменных A, B, C, D последовательно поменять содержимое следующих пар : A и B, C и D, B и C и вывести новые значения A, B, C, D.

void enter(double& a) {
	cout << "Введите число: ";
	cin >> a;
	system("CLS");
}

void swap(double& a, double& b) {
	double c;
	c = a;
	a = b;
	b = c;
}

int main()
{
	setlocale(LC_ALL, "rus");

	double A = 0, B = 0, C = 0, D = 0;

	enter(A);
	enter(B);
	enter(C);
	enter(D);

	cout << "Начальные значения: " << A << " " << B << " " << C << " " << D;

	swap(A, B);
	swap(C, D);
	swap(B, C);

	cout << "\nНовые значения: " << A << " " << B << " " << C << " " << D;

	return 0;
}