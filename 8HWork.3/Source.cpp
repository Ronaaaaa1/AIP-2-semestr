#include <iostream>
using namespace std;

/*9. ��������, ����������� ���������� ������� � ���������� ��� �� ����� � ������� �� ����� �������, ����������� ��������� ��������. ���������� ���� �������.

b. ��������� ������ �� ��������� �����. ����� ��������������� �������
������, ��������� ��������.*/

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
		cout << "������� ������ �����: ";
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
				cout << "�� ������� " << i + 1 << "." << j + 1 << " ���� �����? Y/N\n";
				cin >> flag;
				system("CLS");
			} while (flag != 'Y' && flag != 'N');
			if (flag == 'Y') {
				do {
					cout << "������� ��������: ";
					cin >> speed;
					system("CLS");
				} while (speed < 0);
				do {
					cout << "������� �����: ";
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