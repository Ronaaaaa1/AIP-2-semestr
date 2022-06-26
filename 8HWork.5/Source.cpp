#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int col_str, col_stb;

//1. Преобразовать матрицу: элементы строки, в которой находится минимальный элемент матрицы, заменить нулями.

void operation(int** mas) {
	int min;
	for (int i = 0; i < col_str; i++) {
		min = 0;
		for (int j = 0; j < col_stb; j++) {
			if (mas[i][j] < mas[i][min]) {
				min = j;
			}
		}
		for (int j = 0; j < col_stb; j++) {
			if (mas[i][j] == mas[i][min]) {
				mas[i][j] = 0;
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(static_cast<unsigned int>(time(0)));

	do {
		cout << "Введите кол-во строк: ";
		cin >> col_str;
		system("CLS");
	} while (col_str < 1);

	do {
		cout << "Введите кол-во столбцов: ";
		cin >> col_stb;
		system("CLS");
	} while (col_stb < 1);

	int** mas = new int* [col_str];

	for (int i = 0; i < col_str; i++) {
		mas[i] = new int[col_stb];
	}

	for (int i = 0; i < col_str; i++) {
		for (int j = 0; j < col_stb; j++) {
			if (rand() % 2 == 0) {
				mas[i][j] = rand() % 10;
			}
			else {
				mas[i][j] = -rand() % 10;
			}
		}
	}

	cout << "Изначальный массив:\n";
	for (int i = 0; i < col_str; i++) {
		for (int j = 0; j < col_stb; j++) {
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}

	operation(mas);

	cout << "\nРезультат:\n";
	for (int i = 0; i < col_str; i++) {
		for (int j = 0; j < col_stb; j++) {
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}