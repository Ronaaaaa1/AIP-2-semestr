#include <iostream>
using namespace std;

//��������. 1. �������� ���������, ������� ������ ����� : ����, ������, ������� b.�������� �������, ������� ���������� ��� �������.���������� true, ���� ������ �������� ������ �������.

struct time1 {
	int hours;
	int minutes;
	int seconds;
};

bool time_operation(time1 a, time1 b) {
	if (a.hours > b.hours) {
		return true;
	}
	else if (a.minutes > b.minutes) {
		return true;
	}
	else if (a.seconds > b.seconds) {
		return true;
	}
	else {
		return false;
	}
}

void time_enter(time1& a) {
	do {
		cout << "������� ���������� �����: ";
		cin >> a.hours;
		system("CLS");
	} while (a.hours < 0);

	do {
		cout << "������� ���������� �����: ";
		cin >> a.minutes;
		system("CLS");
	} while (a.minutes < 0 || a.minutes > 59);

	do {
		cout << "������� ���������� ������: ";
		cin >> a.seconds;
		system("CLS");
	} while (a.seconds < 0 || a.seconds > 59);
}

void time_output(time1 a) {
	cout << a.hours << ":" << a.minutes << ":" << a.seconds;
}

int main()
{
	setlocale(LC_ALL, "rus");

	time1 one = { 0, 0, 0 }, two = one;

	cout << "������� ������ �����:\n";
	time_enter(one);

	cout << "������� ������ �����:\n";
	time_enter(two);

	if (time_operation(one, two) == true) {
		time_output(one);
		cout << " > ";
		time_output(two);
	}
	else {
		time_output(one);
		cout << " < ";
		time_output(two);
	}


	return 0;
}
