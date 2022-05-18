#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;

int main()
{
//Вывести на экран Н строк из нулей, причем количество нулей в каждой строке равно номеру строки.Количество строк Н вводит пользователь
	
   /*setlocale(LC_ALL, "rus");

	int n = 0; string a = "";
	cout << "Введите N: ";
	cin >> n;
	system("CLS");

	for (int i = 0; i < n; i++) {
		a += "0";
		cout << a << "\n";
	}*/

// задача 2 Протабулировать функцию (шаг и диапазон задаёт пользователь): y = (2+x)^2 + 3x
	
      /*	setlocale(LC_ALL, "rus");
		double step = 0, start = 0, stop = 0;

		do {
			cout << "Введите начало диапазона: ";
			cin >> start;

			cout << "Введите конец диапазона: ";
			cin >> stop;
		} while (start >= stop);

		do {
			cout << "Введите шаг: ";
			cin >> step;
		} while (step > (stop - start));

		cout << "Табуляция функции (y = (2+x)^2 + 3x): \n";

		do {
			cout << pow(2 + start, 2) + 3 * start << "\n";
			start += step;
		} while (start <= stop);*/

//Задача 2 Протабулировать функцию(шаг и диапазон задаёт пользователь) : y = √(5x+4x^3) + 4x+3/sin(9x+ 71)

		/*setlocale(LC_ALL, "rus");
		double step = 0, start = 0, stop = 0;

		do {
			cout << "Введите начало диапазона: ";
			cin >> start;

			cout << "Введите конец диапазона: ";
			cin >> stop;
		} while (start >= stop);

		do {
			cout << "Введите шаг: ";
			cin >> step;
		} while (step > (stop - start));

		cout << "Табуляция функции: \n";

		do {
			cout << sqrt(5 * start + 4 * pow(start,3)) + (4 * start) + (3 / sin((9 * start) + 71))<< "\n";
			start += step;
		} while (start <= stop);*/

//Задача 8 Составить алгоритм определения суммарного объёма в литрах 12-ти вложенных друг в друга шаров со стенками 5 мм.Внутренний диаметр внутреннего шара равен 10 см. Считать, что шары вкладываются друг в друга без зазоров. (Преобразуйте задачу так, что численные значения вводит пользователь).

	setlocale(LC_ALL, "rus");
	int col = 0;
	float all_V = 0, rStartball = 0, width = 0;

	do {
		cout << "Введите кол-во шаров: ";
		cin >> col;
		system("CLS");
	} while (col < 1);

	do {
		cout << "Введите диаметр внутреннего шара (см): ";
		cin >> rStartball;
		system("CLS");
	} while (rStartball <= 0);

	rStartball /= 2;

	do {
		cout << "Введите толщину стенок шара (см): ";
		cin >> width;
		system("CLS");
	} while (width <= 0);

	for (int i = 0; i < col; i++) {
		all_V += (4 / 3) * M_PI * pow(rStartball, 3);
		rStartball += width;
	}
	cout << all_V / 1000 << " литров" << endl;

//Задача 3b у=1/x+1/2x+1/3x+...+(Ч х)

		/*setlocale(LC_ALL, "rus");
		double x = 0, y = 0, a = 0;
		int h = 0;

		cout << "Введите х: ";
		cin >> x;

		do {
			cout << "Введите Ч: ";
			cin >> h;
		} while (h < 1);

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
		cout << "\ny = " << y;*/

		//Задача 3f y=x-2x+3x-4x+...+Чx

		/*setlocale(LC_ALL, "rus");
		double x = 0, y = 0, a = 0;
		int h = 0;

		cout << "Введите х: ";
		cin >> x;

		do {
			cout << "Введите Ч: ";
			cin >> h;
		} while (h < 1);

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

		cout << "\ny = " << y;*/

		return 0;
	}

