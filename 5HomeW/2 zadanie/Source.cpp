#include <iostream>
using namespace std;

//4. ������� ��������� Swap(X, Y), �������� ���������� ���������� X � Y (X � Y � ������������ ���������, ���������� ������������ �������� � ���������). � �� ������� ��� ������ ���������� A, B, C, D ��������������� �������� ���������� ��������� ��� : A � B, C � D, B � C � ������� ����� �������� A, B, C, D.

void enter(double& a) {
	cout << "������� �����: ";
	cin >> a;
	system("CLS");
}

void swap(double& a, double& b) {
	double c;
	c = a;
	a = b;
	b = c;
}

int main()
{
	setlocale(LC_ALL, "rus");

	double A = 0, B = 0, C = 0, D = 0;

	enter(A);
	enter(B);
	enter(C);
	enter(D);

	cout << "��������� ��������: " << A << " " << B << " " << C << " " << D;

	swap(A, B);
	swap(C, D);
	swap(B, C);

	cout << "\n����� ��������: " << A << " " << B << " " << C << " " << D;

	return 0;
}