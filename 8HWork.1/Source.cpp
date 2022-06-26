#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//3. В квадратной матрице, найти сумму отрицательных элементов, лежащих на главной диагонали.

int main()
{
	setlocale(LC_ALL, "rus");
	srand(static_cast<unsigned int>(time(0)));
	int col, sum = 0;

	do {
		cout << "Введите кол-во элементов: ";
		cin >> col;
		system("CLS");
	} while (col < 1);

	int** mas = new int* [col];
	for (int i = 0; i < col; i++) {
		mas[i] = new int[col];
	}

	for (int i = 0; i < col; i++) {
		for (int j = 0; j < col; j++) {
			if ((rand() % 100) % 2 == 0) {
				mas[i][j] = rand() % 10;
			}
			else {
				mas[i][j] = -rand() % 10;
			}
			cout << mas[i][j] << " ";
		}
		if (mas[i][i] < 0) {
			sum += mas[i][i];
		}
		cout << endl;
	}

	cout << "Сумма отрицательных элементов главной диагонали: " << sum;

	return 0;
}