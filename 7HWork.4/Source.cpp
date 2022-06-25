#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int col, sum1 = 1, sum2 = 1;

//4. ��������� ������������ �������������/������������� ��������� �������

void operation(int* mas) {

	for (int i = 0; i < col; i++) {
		if (mas[i] > 0) {
			sum1 *= mas[i];
		}
		else if (mas[i] < 0) {
			sum2 *= mas[i];
		}
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(static_cast<unsigned int>(time(0)));

	cout << "������� ���-�� ���������: ";
	cin >> col;
	system("CLS");

	int* mas = new int[col];

	for (int i = 0; i < col; i++) {
		mas[i] = rand() % 10;
	}

	for (int i = 0; i < col; i++) {
		if (((i + rand()) % 2) != 0) {
			mas[i] -= mas[i] * 2;
		}
	}

	for (int i = 0; i < col; i++) {
		cout << mas[i] << " ";
	}

	operation(mas);

	cout << "\n������������ ������������� ���������: " << sum1;
	cout << "\n������������ ������������� ���������: " << sum2;

	return 0;
}