#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int enter1(double* x) {
	cout << "\n ������� �: ";
	cin >> *x;
	cout << "\n";
	return 0;
}

int enter2(double* x, double* y) {
	cout << "\n ������� �: ";
	cin >> *x;
	cout << "\n";

	cout << "������� y: ";
	cin >> *y;
	system("CLS");
	return 0;
}

void HW1() {
	double x = 0, y = 0;
	enter1(&x);

	if (x > -8) {

		y = (2 + x) * (2 + x) + 7;
		cout << "Y ����� \n" << y;
	}
	else {

		if (x < -8) {
			y = abs(2 * x - 1) - 1;
			cout << "Y ����� \n" << y;
		}
		else {
			cout << "Y ����� 5";
		}
	}
}

void HW2() {
	double x = 0, y = 0;
	enter1(&x);

	if (x > 2) {

		y = 2 * x - 15;
		cout << "Y ����� \n" << y;
	}
	else {
		if (x < 2) {
			y = 3 * abs(x - 1) - 8;
			cout << "Y ����� \n" << y;
		}
		else {
			cout << "Y ����� 5";
		}
	}
}

void HW3() {
	double x = 0, y = 0;
	enter2(&x, &y);

	if (y <= (2 - pow(x, 2)) && ((y >= x) || ((y >= 0) && (y <= x)))) {
		cout << "����� �������� � �������.\n";
	}
	else {
		cout << "����� �� �������� � �������.\n";
	}
}

void HW4() {
	double x = 0, y = 0;
	enter2(&x, &y);

	if (y >= pow(x, 2) && y <= pow(M_E, x) && y <= pow(M_E, -x)) {
		cout << "����� �������� � �������.\n";
	}
	else {
		cout << "����� �� �������� � �������.\n";
	}
}

int main() {
	setlocale(LC_ALL, "rus");

	/*������1 G y=(2+x)^2+7, ���� x>-8
	y=5, ���� x=-8
	y=|2*x-1|-1, ���� x<-8*/

	HW1();

	/*������ � y=2x-15, ���� x>2
	y=5, ���� x=2
	y = 3*|x-1|-8, ���� x<2*/

	HW2();

	//������ 2 �) �=�, �=2-�^2

	HW3();

	//������ 3 � �������� ���������, ������� ��������� �� ������������ ���������� ����� � ����������, ������ �� ����� � �������������� �������. y=e^-x, y=e^x, y=x^2

	HW4();

	return 0;
}