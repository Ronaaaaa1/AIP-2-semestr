// 3. ��������� ����� ��������/������ ��������� �������

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int col, sum1 = 0, sum2 = 0;

void operation(int* mas) {

	for (int i = 0; i < col; i++) {
		if (((i + 1) % 2) == 0) {
			sum1 += mas[i];
		}
		else {
			sum2 += mas[i];
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
		mas[i] = rand() % 100;
	}

	for (int i = 0; i < col; i++) {
		cout << mas[i] << " ";
	}

	operation(mas);

	cout << "\n����� ������ ���������: " << sum1;
	cout << "\n����� �������� ���������: " << sum2;

	return 0;
}