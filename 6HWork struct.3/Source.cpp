#include <iostream>
using namespace std;

//11 Робот-автомобиль описывается как структура с полями: скорость, длительность движения и номер.Напишите функцию для расчёта пройденного расстояния.
struct robot {
	int id;
	double speed;
	int time;
	double distance;
};

void enter(robot& a) {
	do {
		cout << "Введите номер: ";
		cin >> a.id;
		system("CLS");
	} while (a.id < 0);
	do {
		cout << "Введите скорость в м/с: ";
		cin >> a.speed;
		system("CLS");
	} while (a.speed < 0);
	do {
		cout << "Введите время в секундах: ";
		cin >> a.time;
		system("CLS");
	} while (a.time < 0);
}

void output(robot a) {
	cout << "Номер машины: " << a.id << " || Скорость = " << a.speed << " м/с || Время = " << a.time << " с. || Расстояние равно = " << a.distance << " м.\n\n";
}

void distance(robot& a) {
	a.distance = a.speed * a.time;
}

int main()
{
	setlocale(LC_ALL, "rus");
	int col;

	do {
		cout << "Введите кол-во машин: ";
		cin >> col;
		system("CLS");
	} while (col < 1);

	robot* mas = new robot[col];

	for (int i = 0; i < col; i++) {
		cout << "Машина " << i + 1 << ":\n";
		enter(mas[i]);
		distance(mas[i]);
	}

	for (int i = 0; i < col; i++) {
		output(mas[i]);
	}

	return 0;
}