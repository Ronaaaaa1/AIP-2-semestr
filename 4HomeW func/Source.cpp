#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;

void HW1() {
	int n = 0;
	cout << "Введите N: ";
	cin >> n;
	system("CLS");
	string nulls = "";
	for (int i = 0; i < n; i++) {
		nulls += "0";
		cout << nulls << endl;
	}
}

void enter(double* a, double* b, double* c) {
	do {
		cout << "Введите начало диапазона: ";
		cin >> *a;

		cout << "Введите конец диапазона: ";
		cin >> *b;
	} while (*a >= *b);

	do {
		cout << "Введите шаг: ";
		cin >> *c;
	} while (*c > (*b - *a));
}

void HW2() {
	double step = 0, start = 0, stop = 0;
	enter(&start, &stop, &step);

	cout << "Табуляция функции (y = (2+x)^2 + 3x): \n";

	do {
		cout << pow(2 + start, 2) + 3 * start << "\n";
		start += step;
	} while (start <= stop);
}

void HW3() {
	double step = 0, start = 0, stop = 0;

	enter(&start, &stop, &step);

	cout << "Табуляция функции: \n";

	do {
		cout << sqrt(5 * start + 4 * pow(start, 3)) + (4 * start) + (3 / sin((9 * start) + 71)) << "\n";
		start += step;
	} while (start <= stop);
}

int enter_col() {
	int col;
	do {
		cout << "Введите кол-во шаров: ";
		cin >> col;
		system("CLS");
	} while (col < 1);
	return col;
}

float enter_r() {
	float rStartball;
	do {
		cout << "Введите диаметр внутреннего шара (см): ";
		cin >> rStartball;
		system("CLS");
	} while (rStartball <= 0);

	return rStartball / 2;
}

float enter_width() {
	float width;
	do {
		cout << "Введите толщину стенок шара (см): ";
		cin >> width;
		system("CLS");
	} while (width <= 0);
	return width;
}

void HW4() {
	int col = 0;
	float all_V = 0, rStartball = 0, width = 0;

	col = enter_col();

	rStartball = enter_r();

	width = enter_width();

	for (int i = 0; i < col; i++) {
		all_V += (4 / 3) * M_PI * pow(rStartball, 3);
		rStartball += width;
	}
	cout << all_V / 1000 << " литров" << endl;
}

void enter_xh(double* x, int* h) {
	cout << "Введите х: ";
	cin >> *x;

	do {
		cout << "Введите Ч: ";
		cin >> *h;
	} while (*h < 1);
}

void HW5() {
	double x = 0, y = 0, a = 0;
	int h = 0;

	enter_xh(&x, &h);

	cout << "y = ";

	for (int i = 1; i < h + 1; i++) {
		a = 1 / (i * x);
		y += a;
		if (i == h) {
			cout << a;
		}
		else {
			cout << a << " + ";
		}
	}
	cout << "\ny = " << y;
}

void HW6() {
	double x = 0, y = 0, a = 0;
	int h = 0;

	enter_xh(&x, &h);

	cout << "y = ";

	for (int i = 1; i < h + 1; i++) {
		a = i * x;
		if (i == 1) {
			y = a;
			cout << a;
		}
		else if ((i % 2 == 0) && (i != h + 1)) {
			y -= a;
			cout << " - " << a;
		}
		else {
			y += a;
			cout << " + " << a;
		}
	}

	cout << "\ny = " << y;
}

int main() {
	setlocale(LC_ALL, "rus");
	//Вывести на экран Н строк из нулей, причем количество нулей в каждой строке равно номеру строки.Количество строк Н вводит пользователь

		HW1();

	// задача 2 Протабулировать функцию (шаг и диапазон задаёт пользователь): y = (2+x)^2 + 3x

		HW2();

	//Задача 2 Протабулировать функцию(шаг и диапазон задаёт пользователь) : y = √(5x+4x^3) + 4x+3/sin(9x+ 71)

		HW3();

	//Задача 8 Составить алгоритм определения суммарного объёма в литрах 12-ти вложенных друг в друга шаров со стенками 5 мм.Внутренний диаметр внутреннего шара равен 10 см. Считать, что шары вкладываются друг в друга без зазоров. (Преобразуйте задачу так, что численные значения вводит пользователь).

	     HW4();

	//Задача 3b у=1/x+1/2x+1/3x+...+(Ч х)

		HW5();

	//Задача 3f y=x-2x+3x-4x+...+Чx

		HW6();

	return 0;
}
