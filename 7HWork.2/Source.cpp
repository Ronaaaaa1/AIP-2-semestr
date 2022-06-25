#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int col;

//2. Вычислить сумму элементов массива: b.больших 9, меньших 20, меньших 3,

int more9(int* mas) {
	int sum = 0;
	for (int i = 0; i < col; i++) {
		if (mas[i] > 9) {
			sum += mas[i];
		}
	}
	return sum;
}

int less20(int* mas) {
	int sum = 0;
	for (int i = 0; i < col; i++) {
		if (mas[i] < 20) {
			sum += mas[i];
		}
	}
	return sum;
}

int less3(int* mas) {
	int sum = 0;
	for (int i = 0; i < col; i++) {
		if (mas[i] < 3) {
			sum += mas[i];
		}
	}
	return sum;
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(static_cast<unsigned int>(time(0)));

	cout << "Введите кол-во элементов: ";
	cin >> col;
	system("CLS");

	int* mas = new int[col];

	for (int i = 0; i < col; i++) {
		mas[i] = rand() % 100;
	}

	for (int i = 0; i < col; i++) {
		cout << mas[i] << " ";
	}

	cout << "\nСумма элементов больше 9: " << more9(mas);
	cout << "\nСумма элементов меньше 20: " << less20(mas);
	cout << "\nСумма элементов меньше 3: " << less3(mas);

	return 0;
}