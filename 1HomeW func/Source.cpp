#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

void latter() {
	cout << " ***\n *  *\n *  *\n ***\n *  *\n *  *\n *  *\n ***\n";
}

double P(int x) {
	return 2 * M_PI* x;
}

double S(int x) {
	return M_PI * x* x;
}

void circle(int x) {
	cout << "\n Радиус равен: " << x;
	cout << "\n Периметр окружности равна: " << P(x);
	cout << "\n Площадь круга равна: " << S(x) << endl;
}

void swap(int x, int y) {
	int a;
	a = x;
	x = y;
	y = a;
}

void HW1() {
	int num;
	cout << "\n Введите радиус окружности: ";
	cin >> num;
	circle(num);
}

void HW2() {
	float a, b;
	cout << "\n Введите число А: ";
	cin >> a;
	cout << " Введите число Б: ";
	cin >> b;
	swap(a, b);
	cout << "\n Меняем значение А и Б друг с другом:";
	cout << "\n Значение А, после изменения равно: " << a;
	cout << "\n Значение Б, после изменения равно: " << b;
}

int main()
{
	setlocale(LC_ALL, "rus");//1 неделя была решена по 1 варианту, остальные недели по 12
	//Вывести на экран Первую букву имени из символов "*" (звездочка)
	latter();

	//Пользователь вводит параметры фигуры. Найти периметр и площадь фигур: Круг
	HW1();

	//Пользователь вводит два числа. Необходимо поменять значения переменных так, чтобы значение первой оказалось во второй, а второй - в первой.
	HW2();

	getchar();
	getchar();

	return 0;
}