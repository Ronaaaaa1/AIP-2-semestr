// 12 вариант (1 неделя была решена по 1 варианту) 8. Вычислите значение выражения: f.√(x^2 + b)−[b^2sin^3(x + a)] / x при a = 0.1, b = 0.2 и x = 1

/*#include <iostream> 
#include <cmath> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

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
	cout << sqrt(num3 * num3 + num2) - (num2 * num2 * sin(num3 + num1) * sin(num3 + num1) * sin(num3 + num1)) / num3;

	cout << endl;

	return 0;
}

//9f Сделать конвертер величин. Формат ввода: Направление_Перевода Величина. Давление(паскаль, бар, фунт на квадратный дюйм), нужно прокомментировать предыдущую задачу.
#include <iostream> 
#include <cmath> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	float num1 = 0;

	cout << "Давление. Введите величину в паскалях (Па) ";
	cin >> num1;

	cout << "Величина давления в БАРАХ ";
	cout << num1 / 100000 << endl;

	cout << "Величина в ФУНТАХ на квадратный дюйм ";
	cout << num1 * 0.000145 << endl;

	return 0;
}*/

//Задача 15: Сделать калькулятор. Формат ввода: Операция Ч1 Ч2.

#include <iostream>
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	
	int num1, num2, sum, min, del, umn;

	string A;

	cout << ("Введите операцию, которую хотите воспроизвести: + (сложение), - (разность), * (умножение), / (деление) ") << endl;
	cin >> A;
	cout << ("Введите первое число: ");
	cin >> num1;
	cout << ("Введите второе число: ");
	cin >> num2;
	
	if (A == "+") {

		sum = num1 + num2;
		cout << "Результат суммы (+): " << sum << endl;

	}
	else if (A == "-") {

		min = num1 - num2;
		cout << "Результат разности (-): " << min << endl;

	}
	else if (A == "*") {

		umn = num1 * num2;
		cout << "Результат умножения (*): " << umn << endl;

	}
	else if (A == "/") {

		del = num1 / num2;
		cout << "Результат деления (/): " << del << endl;

	}

}