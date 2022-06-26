#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//5. � ���������� ������� ��� ������ ������ ����� ����������� ������� � ����������� ��� � ���������, ������� � ���� ������ �� ������� ���������.

void swap1(int* mas, int min, int i) {
	int swap;
	swap = mas[i];
	mas[i] = mas[min];
	mas[min] = swap;
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(static_cast<unsigned int>(time(0)));
	int col, min, swap;

	do {
		cout << "������� ���-�� ���������: ";
		cin >> col;
		system("CLS");
	} while (col < 1);

	int** mas = new int* [col];
	for (int i = 0; i < col; i++) {
		mas[i] = new int[col];
	}

	cout << "�������������� ������:\n";

	for (int i = 0; i < col; i++) {
		min = 0;
		for (int j = 0; j < col; j++) {
			if ((rand() % 100) % 2 == 0) {
				mas[i][j] = rand() % 10;
			}
			else {
				mas[i][j] = -rand() % 10;
			}
			if (mas[i][j] < mas[i][min]) {
				min = j;
			}
			cout << mas[i][j] << " ";
		}

		swap1(mas[i], min, i);

		cout << endl;
	}

	cout << "\n����� ������:\n";

	for (int i = 0; i < col; i++) {
		for (int j = 0; j < col; j++) {
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}