#include <iostream>
using namespace std;

//10. ������� ������� Quarter(x, y) ������ ����, ������������ ����� ������������ ��������, � ������� ��������� ����� � ���������� ������������� ������������ (x, y).� ������� ���� ������� ����� ������ ������������ ��������� ��� ���� ����� � ������� ���������� ������������.

int quarter(double x, double y) {
	if (x > 0 && y > 0) {
		return 1;
	}
	else if (x < 0 && y > 0) {
		return 2;
	}
	else if (x > 0 && y < 0) {
		return 3;
	}
	else {
		return 4;
	}
}

void func(double x, double y) {
	cout << " x = " << x << "\n y = " << y << endl;
	switch (quarter(x, y)) {
	case 1:
		cout << " ����� � ������ ������� ��������.\n";
		break;
	case 2:
		cout << " ����� � ����� ������� ��������.\n";
		break;
	case 3:
		cout << " ����� � ������ ������ ��������.\n";
		break;
	case 4:
		cout << " ����� � ����� ������ ��������.\n";
		break;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	double mas[3][2];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			do {
				cout << " ���� ����� " << i + 1 << ".\n";
				if (j == 0) {
					cout << " ������� x: ";
				}
				else {
					cout << " ������� y: ";
				}
				cin >> mas[i][j];
				system("CLS");
			} while (mas[i][j] == 0);

		}
	}

	cout << " ����� 1.\n";
	func(mas[0][0], mas[0][1]);
	cout << "\n ����� 2.\n";
	func(mas[1][0], mas[1][1]);
	cout << "\n ����� 3.\n";
	func(mas[2][0], mas[2][1]);

	return 0;
}

