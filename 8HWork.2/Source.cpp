#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//5. В квадратной матрице для каждой строки найти минимальный элемент и переставить его с элементом, стоящим в этой строке на главной диагонали.

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
		cout << "Введите кол-во элементов: ";
		cin >> col;
		system("CLS");
	} while (col < 1);

	int** mas = new int* [col];
	for (int i = 0; i < col; i++) {
		mas[i] = new int[col];
	}

	cout << "Первоначальный массив:\n";

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

	cout << "\nНовый массив:\n";

	for (int i = 0; i < col; i++) {
		for (int j = 0; j < col; j++) {
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}