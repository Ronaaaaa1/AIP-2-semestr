#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int col;

//13. Увеличить все отрицательные элементы на 5, а положительные уменьшить на 1

void izmen(int* mas) {
	for (int i = 0; i < col; i++) {
		if (mas[i] < 0) {
			mas[i] += 5;
		}
		else {
			mas[i]--;
		}
	}
}

int main() {

	setlocale(LC_ALL, "ru");
	srand(static_cast<unsigned int>(time(0)));

	do {
		cout << "Введите кол-во элементов: ";
		cin >> col;
		system("CLS");
	} while (col < 1);

	int* mas = new int[col];

	for (int i = 0; i < col; i++) {
		if (rand() % 2 != 0) {
			mas[i] = rand() % 100;
		}
		else {
			mas[i] = -rand() % 100;
		}
	}

	for (int i = 0; i < col; i++) {
		cout << mas[i] << " ";
	}

	izmen(mas);

	cout << "\nРезультат:\n";

	for (int i = 0; i < col; i++) {
		cout << mas[i] << " ";
	}

	return 0;
}