#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

//* �������� ����������� ����� �� �������� ���������� ����� � ����������� ������� �� ����������� ��������� �������.� ����������, ������ ���� ����������, ����������� ���������� �����, ������ ���� ���� ���������� - ��������� � ���������� � ������������.

struct cord {
	double x;
	double y;
};

int main()
{
	setlocale(LC_ALL, "rus");
	cord a;
	cout << "������� �: ";
	cin >> a.x;
	cout << "\n";

	cout << "������� y: ";
	cin >> a.y;
	system("CLS");

	if (a.y >= pow(a.x, 2) && a.y <= pow(M_E, a.x) && a.y <= pow(M_E, -a.x)) {
		cout << "����� �������� � �������.\n";
	}
	else {
		cout << "����� �� �������� � �������.\n";
	}

	return 0;
}