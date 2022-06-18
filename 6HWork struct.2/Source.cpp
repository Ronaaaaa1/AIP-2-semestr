#include <iostream>
using namespace std;
int col;

//6. ������� ���������� � ��������: �������� ���������� �������� (min, max), �����������, ������������ ��������.������� ������ � ����� ������ �������.
//7. ������� ���������� � ��������: �������� ���������� �������� (min, max), �����������, ������������ ��������.������� ������ � ������� � ���������� ��������� ������.

struct sensor {
	double min;
	double max;
	double error;
	double max_speed;
};

void enter(sensor& a) {
	do {
		cout << "������� ����������� ��������: ";
		cin >> a.min;
		cout << "������� ������������ ��������: ";
		cin >> a.max;
		system("CLS");
	} while (a.min >= a.max);

	do {
		cout << "������� �����������: ";
		cin >> a.error;
		system("CLS");
	} while (a.error < 1);

	do {
		cout << "������� ������������ ��������: ";
		cin >> a.max_speed;
		system("CLS");
	} while (a.max_speed < 1);
}

void output(sensor a) {
	cout << "min = " << a.min << " || max = " << a.max << " || ����������� = " << a.error << " || ����. �������� = " << a.max_speed << "\n\n";
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

	cout << "������� ���-�� ��������: ";
	cin >> col;
	system("CLS");

	sensor* mas = new sensor[col];

	for (int i = 0; i < col; i++) {
		cout << "������� " << i + 1 << " ������:\n";
		enter(mas[i]);
	}

	cout << "��� �������:\n\n";

	for (int i = 0; i < col; i++) {
		output(mas[i]);
	}

	cout << "����� ������ ������: ";
	min_error(mas);

	cout << "����� ��������� ������: ";
	min_speed(mas);

	return 0;
}