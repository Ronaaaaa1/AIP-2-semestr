#include <iostream>
using namespace std;
int col;

//6. Имеется информация о датчиках: диапазон измеряемых значений (min, max), погрешность, максимальная скорость.Вывести данные о самом точном датчике.
//7. Имеется информация о датчиках: диапазон измеряемых значений (min, max), погрешность, максимальная скорость.Вывести данные о датчике с наименьшей скоростью работы.

struct sensor {
	double min;
	double max;
	double error;
	double max_speed;
};

void enter(sensor& a) {
	do {
		cout << "Введите минимальное значение: ";
		cin >> a.min;
		cout << "Введите максимальное значение: ";
		cin >> a.max;
		system("CLS");
	} while (a.min >= a.max);

	do {
		cout << "Введите погрешность: ";
		cin >> a.error;
		system("CLS");
	} while (a.error < 1);

	do {
		cout << "Введите максимальную скорость: ";
		cin >> a.max_speed;
		system("CLS");
	} while (a.max_speed < 1);
}

void output(sensor a) {
	cout << "min = " << a.min << " || max = " << a.max << " || Погрешность = " << a.error << " || Макс. скорость = " << a.max_speed << "\n\n";
}

void min_error(sensor* a) {
	int min = 0;
	for (int i = 1; i < col; i++) {
		if (a[i].error < a[min].error) {
			min = i;
		}
	}
	output(a[min]);
}

void min_speed(sensor* a) {
	int min = 0;
	for (int i = 1; i < col; i++) {
		if (a[i].max_speed < a[min].max_speed) {
			min = i;
		}
	}
	output(a[min]);
}

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Введите кол-во датчиков: ";
	cin >> col;
	system("CLS");

	sensor* mas = new sensor[col];

	for (int i = 0; i < col; i++) {
		cout << "Введите " << i + 1 << " датчик:\n";
		enter(mas[i]);
	}

	cout << "Все датчики:\n\n";

	for (int i = 0; i < col; i++) {
		output(mas[i]);
	}

	cout << "Самый точный датчик: ";
	min_error(mas);

	cout << "Самый медленный датчик: ";
	min_speed(mas);

	return 0;
}