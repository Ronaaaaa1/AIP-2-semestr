#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{    /*Задача1 G y=(2+x)^2+7, если x>-8
       y=5, если x=-8
       y=|2*x-1|-1, если x<-8*/


	/*setlocale(LC_ALL, "rus");
	double x = 0, y = 0;
	cout << "Введите х: ";
	cin >> x;
	cout << "\n";

	if (x>-8) {

		y = (2 + x) * (2 + x) + 7;
		cout << "Y равен \n" << y;
	}
	else {

		if (x < -8) {
			y = abs(2 * x - 1) - 1;
			cout << "Y равен \n" << y;
		}
		else {
			cout << "Y равен 5";
		}

	}

	return 0;

	/*Задача Е y=2x-15, если x>2
      y=5, если x=2
      y = 3*|x-1|-8, если x<2*/

	/*setlocale(LC_ALL, "rus");
	double x = 0, y = 0;
	cout << "Введите х: ";
	cin >> x;
	cout << "\n";

	if (x > 2) {

		y = 2 * x - 15;
		cout << "Y равен \n" << y;
	}
	else {

		if (x < 2) {
			y = 3 * abs(x - 1) - 8;
			cout << "Y равен \n" << y;
		}
		else {
			cout << "Y равен 5";
		}

	}

	return 0;*/

	//Задача 2 В) у=х, у=2-х^2
		/*setlocale(LC_ALL, "rus");
		double x = 0, y = 0;
		cout << "Введите х: ";
		cin >> x;
		cout << "\n";

		cout << "Введите y: ";
		cin >> y;
		system("CLS");

		if (y <= (2 - pow(x, 2)) && ((y >= x) || ((y >= 0) && (y <= x)))) {
			cout << "Точка попадает в область.\n";
		}
		else {
			cout << "Точка не попадает в область.\n";
		}

		return 0;*/
	
		//Задача 3 Е Напишите программу, которая принимает от пользователя координаты точки и определяет, попала ли точка в заштрихованную область. y=e^-x, y=e^x, y=x^2
			setlocale(LC_ALL, "rus");
			double x = 0, y = 0;
			cout << "Введите х: ";
			cin >> x;
			cout << "\n";

			cout << "Введите y: ";
			cin >> y;
			system("CLS");

			if (y >= pow(x, 2) && y <= pow(M_E, x) && y <= pow(M_E, -x)) {
				cout << "Точка попадает в область.\n";
			}
			else {
				cout << "Точка не попадает в область.\n";
			}

			return 0;
		}

