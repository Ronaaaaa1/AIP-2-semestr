#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

void latter() {
	cout << " ***\n *  *\n *  *\n ***\n *  *\n *  *\n *  *\n ***\n";
}

double P(int x) {
	return 2 * M_PI* x;
}

double S(int x) {
	return M_PI * x* x;
}

void circle(int x) {
	cout << "\n ������ �����: " << x;
	cout << "\n �������� ���������� �����: " << P(x);
	cout << "\n ������� ����� �����: " << S(x) << endl;
}

void swap(int x, int y) {
	int a;
	a = x;
	x = y;
	y = a;
}

void HW1() {
	int num;
	cout << "\n ������� ������ ����������: ";
	cin >> num;
	circle(num);
}

void HW2() {
	float a, b;
	cout << "\n ������� ����� �: ";
	cin >> a;
	cout << " ������� ����� �: ";
	cin >> b;
	swap(a, b);
	cout << "\n ������ �������� � � � ���� � ������:";
	cout << "\n �������� �, ����� ��������� �����: " << a;
	cout << "\n �������� �, ����� ��������� �����: " << b;
}

int main()
{
	setlocale(LC_ALL, "rus");//1 ������ ���� ������ �� 1 ��������, ��������� ������ �� 12
	//������� �� ����� ������ ����� ����� �� �������� "*" (���������)
	latter();

	//������������ ������ ��������� ������. ����� �������� � ������� �����: ����
	HW1();

	//������������ ������ ��� �����. ���������� �������� �������� ���������� ���, ����� �������� ������ ��������� �� ������, � ������ - � ������.
	HW2();

	getchar();
	getchar();

	return 0;
}