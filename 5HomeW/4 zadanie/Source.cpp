#include<iostream>
#include<cmath>
using namespace std;

//f. y=2*x^2+10 ���� x>5;	y=0 ���� x=5;	y=2*|x+6|-x^2 ���� x<5;

void enter(double& y) {
	cout << "������� �: ";
	cin >> y;
}

double uravnenie(double x) {
	if (x > 5) {
		return 2 * pow(x, 2) + 10;
	}
	else if (x < 5) {
		return 2 * abs(x + 6) - pow(x, 2);
	}
	else {
		return 0;
	}
}

int main() {
	setlocale(LC_ALL, "rus");
	double d = 0;
	enter(d);
	uravnenie(d);
	cout << "� �����: " << uravnenie(d);

	return 0;
}