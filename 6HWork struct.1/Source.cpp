#include <iostream>
using namespace std;

//2. �������� ��������� ��� �������� ����������� �����. ��������: ������������ � ������ �����.�������� ��� ����� � �������� �� �������� �� ������������. f.�������� �������, ������� ����� ���������� ������������ ����� ������������ �����.

struct complex {
	int real;
	int imag;
};

char operation(complex a, complex b) {

	if (a.real > b.real) {
		return '>';
	}
	else if (a.real < b.real) {
		return '<';
	}
	else {
		return '=';
	}
}

void enter(complex& a) {
	do {
		cout << "������� ������������ �����: ";
		cin >> a.real;
		system("CLS");
	} while (a.real == 0);

	do {
		cout << "������� ������ �����: ";
		cin >> a.imag;
		system("CLS");
	} while (a.imag == 0);

}

void output(complex a) {
	if (a.imag > 0) {
		cout << a.real << " + " << a.imag << "i";
	}
	else {
		cout << a.real << " - " << a.imag - a.imag * 2 << "i";
	}
}

int main()
{
	setlocale(LC_ALL, "rus");

	complex one = { 0, 0 }, two = one;

	cout << "������� ������ :\n";
	enter(one);

	cout << "������� ������ :\n";
	enter(two);

	cout << "����� 1: ";
	output(one);

	cout << "\n����� 2: ";
	output(two);

	cout << "\n" << one.real << " " << operation(one, two) << " " << two.real;

	return 0;
}
