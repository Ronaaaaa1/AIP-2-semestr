#include <iostream>
using namespace std;

//11 �����-���������� ����������� ��� ��������� � ������: ��������, ������������ �������� � �����.�������� ������� ��� ������� ����������� ����������.
struct robot {
	int id;
	double speed;
	int time;
	double distance;
};

void enter(robot& a) {
	do {
		cout << "������� �����: ";
		cin >> a.id;
		system("CLS");
	} while (a.id < 0);
	do {
		cout << "������� �������� � �/�: ";
		cin >> a.speed;
		system("CLS");
	} while (a.speed < 0);
	do {
		cout << "������� ����� � ��������: ";
		cin >> a.time;
		system("CLS");
	} while (a.time < 0);
}

void output(robot a) {
	cout << "����� ������: " << a.id << " || �������� = " << a.speed << " �/� || ����� = " << a.time << " �. || ���������� ����� = " << a.distance << " �.\n\n";
}

void distance(robot& a) {
	a.distance = a.speed * a.time;
}

int main()
{
	setlocale(LC_ALL, "rus");
	int col;

	do {
		cout << "������� ���-�� �����: ";
		cin >> col;
		system("CLS");
	} while (col < 1);

	robot* mas = new robot[col];

	for (int i = 0; i < col; i++) {
		cout << "������ " << i + 1 << ":\n";
		enter(mas[i]);
		distance(mas[i]);
	}

	for (int i = 0; i < col; i++) {
		output(mas[i]);
	}

	return 0;
}