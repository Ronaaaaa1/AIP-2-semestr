#include <iostream>
#include <cmath>
using namespace std;

//P���������� ����� �� �������� ���������� ����� � ����������� ������� �� ����������� ��������� �������. � ����������, ������ ���� ����������, ����������� ���������� �����, ������ ���� ���� ���������� - ��������� � ���������� � ������������.


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

	if (a.y <= (2 - pow(a.x, 2)) && ((a.y >= a.x) || ((a.y >= 0) && (a.y <= a.x)))) {
		cout << "����� �������� � �������.\n";
	}
	else {
		cout << "����� �� �������� � �������.\n";
	}

	return 0;
}