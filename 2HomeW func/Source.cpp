#include <iostream>
#include <cmath>
using namespace std;

double formula(float x, float y, float z) {
	return sqrt(z * z + y) - (y * y * sin(z + x) * sin(z + x) * sin(z + x)) / z;
}

void HW1() {
	float num1 = 0;
	float num2 = 0;
	float num3 = 0;
	cout << "Введите число А: ";
	cin >> num1;
	cout << "Введите число B: ";
	cin >> num2;
	cout << "Введите число X: ";
	cin >> num3;
	cout << "Ответ: ";
	cout << formula(num1, num2, num3) << endl;
}

void HW2() {
	float num1 = 0;
	cout << "Давление. Введите величину в паскалях (Па) ";
	cin >> num1;
	cout << "Величина давления в БАРАХ ";
	cout << num1 / 100000 << endl;
	cout << "Величина в ФУНТАХ на квадратный дюйм ";
	cout << num1 * 0.000145 << endl;
}

double calc(string A, double a, double b) {
	if (A == "+") {
		return a + b;
	}
	else if (A == "-") {
		return a - b;
	}
	else if (A == "*") {
		return a * b;
	}
	else if (A == "/") {

		return a / b;
	}
}

void HW3() {
	double num1, num2;
	string A;

	cout << ("Введите операцию, которую хотите воспроизвести: + (сложение), - (разность), * (умножение), / (деление) ") << endl;
	cin >> A;
	cout << ("Введите первое число: ");
	cin >> num1;
	cout << ("Введите второе число: ");
	cin >> num2;
	cout << "Результат операции: " << calc(A, num1, num2) << endl;
}

int main() {
	setlocale(LC_ALL, "rus");

	// 12 вариант (1 неделя была решена по 1 варианту) 8. Вычислите значение выражения: f.√(x^2 + b)−[b^2sin^3(x + a)] / x при a = 0.1, b = 0.2 и x = 1

		HW1();

	//9f Сделать конвертер величин. Формат ввода: Направление_Перевода Величина. Давление(паскаль, бар, фунт на квадратный дюйм), нужно прокомментировать предыдущую задачу.

		HW2();

	//Задача 15: Сделать калькулятор. Формат ввода: Операция Ч1 Ч2.

		HW3();

	return 0;
}
