#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;
int col_str, col_stb;

//11. Реализовать вычисление матричных норм из списка выше(можно для квадратных матриц): 6. Дана матрица.Составить массив, каждый элемент которого равен максимальному элементу соответствующей строки матрица.

void operation(int** mas, int* mas1) {
	int max;
	for (int i = 0; i < col_str; i++) {
		max = 0;
		for (int j = 0; j < col_stb; j++) {
			if (mas[i][j] > mas[i][max]) {
				max = j;
			}
		}
		mas1[i] = mas[i][max];
	}
}

int max(int* mas) {
	int max = 0;
	for (int i = 0; i < col_stb; i++) {
		if (mas[i] > mas[max]) {
			max = i;
		}
	}
	return mas[max];
}

void norm1(int** mas) {
	int* mas1 = new int[col_stb];

	for (int i = 0; i < col_stb; i++) {
		mas1[i] = 0;
	}

	for (int i = 0; i < col_str; i++) {
		for (int j = 0; j < col_stb; j++) {
			if (mas[i][j] < 0) {
				mas1[j] += abs(mas[i][j]);
			}
			else {
				mas1[j] += mas[i][j];
			}
		}
	}

	cout << "\n\nМатричная норма 1 = " << max(mas1);
}

void norm2(int** mas) {
	int sum = 0;

	for (int i = 0; i < col_str; i++) {
		for (int j = 0; j < col_stb; j++) {
			sum += pow(mas[i][j], 2);
		}
	}

	cout << "\nМатричная норма 2 = " << sqrt(sum);
}

void norm3(int** mas) {
	int* mas1 = new int[col_str];

	for (int i = 0; i < col_str; i++) {
		mas1[i] = 0;
	}

	for (int i = 0; i < col_str; i++) {
		for (int j = 0; j < col_stb; j++) {
			if (mas[i][j] < 0) {
				mas1[i] += abs(mas[i][j]);
			}
			else {
				mas1[i] += mas[i][j];
			}
		}
	}

	cout << "\nМатричная норма 3 = " << max(mas1);
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
	int* mas1 = new int[col_str];

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

	cout << "Матрица:\n";
	for (int i = 0; i < col_str; i++) {
		for (int j = 0; j < col_stb; j++) {
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}

	operation(mas, mas1);

	cout << "\nМассив:\n";
	for (int i = 0; i < col_str; i++) {
		cout << mas1[i] << " ";
	}

	norm1(mas);
	norm2(mas);
	norm3(mas);

	return 0;
}