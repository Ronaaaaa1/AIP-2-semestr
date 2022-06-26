#include <iostream>
using namespace std;

/*9. Объявить, реализовать заполнение данными с клавиатуры ИЛИ из файла и вывести на экран матрицу, описывающую следующие сущности. Предложите свой вариант.

b. Состояние робота на шахматной доске. Робот характеризуется уровнем
заряда, скоростью движения.*/

class robot {
public:
	robot() {
		charge = NULL;
		speed = NULL;
	}

	void enter(int _charge, double _speed) {
		charge = _charge;
		speed = _speed;
	}

	void output() {
		cout << "|| ch = " << charge << " sp = " << speed << " ";
	}

private:
	int charge;
	double speed;
};

int main()
{
	setlocale(LC_ALL, "rus");
	int col, charge;
	double speed;
	char flag;

	do {
		cout << "Введите размер доски: ";
		cin >> col;
		system("CLS");
	} while (col < 1);

	robot** mas = new robot * [col];
	for (int i = 0; i < col; i++) {
		mas[i] = new robot[col];
	}

	for (int i = 0; i < col; i++) {
		charge = speed = 0;
		flag = NULL;
		for (int j = 0; j < col; j++) {
			do {
				cout << "На позиции " << i + 1 << "." << j + 1 << " есть робот? Y/N\n";
				cin >> flag;
				system("CLS");
			} while (flag != 'Y' && flag != 'N');
			if (flag == 'Y') {
				do {
					cout << "Введите скорость: ";
					cin >> speed;
					system("CLS");
				} while (speed < 0);
				do {
					cout << "Введите заряд: ";
					cin >> charge;
					system("CLS");
				} while (charge < 0 || charge > 100);
				mas[i][j].enter(charge, speed);
			}
		}
	}

	for (int i = 0; i < col; i++) {
		for (int j = 0; j < col; j++) {
			mas[i][j].output();
		}
		cout << "||\n";
	}

	return 0;
}