#include <iostream>
using namespace std;

//������� ��������� TimeToHMS(T, H, M, S), ������������ �� ������� T (� ��������) ������������ � ��� ���������� ����� H, ����� M � ������ S(T � �������, H, M � S � �������� ��������� ������ ����).��������� ��� ���������, ����� ���������� �����, ����� � ������ ��� ���� ������ �������� ������� T1, T2,. . ., T5.

void TimeToHMS(int time) {
	int H = time / 3600, M = time / 60;
	cout << "���-�� �����: " << H << endl;
	cout << "���-�� �����: " << M << endl;
	cout << "���-�� ������: " << time << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");

	int mas[5];

	for (int i = 0; i < 5; i++) {
		cout << "������� ������� � ��������: ";
		cin >> mas[i];
		TimeToHMS(mas[i]);
		cout << endl;
	}

	return 0;
}
