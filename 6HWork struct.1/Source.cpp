#include <iostream>
using namespace std;

//2. Создайте структуру для хранения комплексных чисел. Атрибуты: вещественная и мнимая части.Объявите два числа и получите их значения от пользователя. f.Напишите функцию, которая будет сравнивать вещественную часть комплексного числа.

struct complex {
	int real;
	int imag;
};

char operation(complex a, complex b) {

	if (a.real > b.real) {
		return '>';
	}
	else if (a.real < b.real) {
		return '<';
	}
	else {
		return '=';
	}
}

void enter(complex& a) {
	do {
		cout << "Введите вещественную часть: ";
		cin >> a.real;
		system("CLS");
	} while (a.real == 0);

	do {
		cout << "Введите мнимую часть: ";
		cin >> a.imag;
		system("CLS");
	} while (a.imag == 0);

}

void output(complex a) {
	if (a.imag > 0) {
		cout << a.real << " + " << a.imag << "i";
	}
	else {
		cout << a.real << " - " << a.imag - a.imag * 2 << "i";
	}
}

int main()
{
	setlocale(LC_ALL, "rus");

	complex one = { 0, 0 }, two = one;

	cout << "Введите первое :\n";
	enter(one);

	cout << "Введите второе :\n";
	enter(two);

	cout << "число 1: ";
	output(one);

	cout << "\nЧисло 2: ";
	output(two);

	cout << "\n" << one.real << " " << operation(one, two) << " " << two.real;

	return 0;
}
