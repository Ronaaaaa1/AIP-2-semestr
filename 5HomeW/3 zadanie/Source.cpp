#include <iostream>
using namespace std;

//10. Описать функцию Quarter(x, y) целого типа, определяющую номер координатной четверти, в которой находится точка с ненулевыми вещественными координатами (x, y).С помощью этой функции найти номера координатных четвертей для трех точек с данными ненулевыми координатами.

int quarter(double x, double y) {
	if (x > 0 && y > 0) {
		return 1;
	}
	else if (x < 0 && y > 0) {
		return 2;
	}
	else if (x > 0 && y < 0) {
		return 3;
	}
	else {
		return 4;
	}
}

void func(double x, double y) {
	cout << " x = " << x << "\n y = " << y << endl;
	switch (quarter(x, y)) {
	case 1:
		cout << " Точка в правой верхней четверти.\n";
		break;
	case 2:
		cout << " Точка в левой верхней четверти.\n";
		break;
	case 3:
		cout << " Точка в правой нижней четверти.\n";
		break;
	case 4:
		cout << " Точка в левой нижней четверти.\n";
		break;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	double mas[3][2];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			do {
				cout << " Ввод точки " << i + 1 << ".\n";
				if (j == 0) {
					cout << " Введите x: ";
				}
				else {
					cout << " Введите y: ";
				}
				cin >> mas[i][j];
				system("CLS");
			} while (mas[i][j] == 0);

		}
	}

	cout << " Точка 1.\n";
	func(mas[0][0], mas[0][1]);
	cout << "\n Точка 2.\n";
	func(mas[1][0], mas[1][1]);
	cout << "\n Точка 3.\n";
	func(mas[2][0], mas[2][1]);

	return 0;
}

