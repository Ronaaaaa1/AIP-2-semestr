#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{    /*������1 G y=(2+x)^2+7, ���� x>-8
       y=5, ���� x=-8
       y=|2*x-1|-1, ���� x<-8*/


	/*setlocale(LC_ALL, "rus");
	double x = 0, y = 0;
	cout << "������� �: ";
	cin >> x;
	cout << "\n";

	if (x>-8) {

		y = (2 + x) * (2 + x) + 7;
		cout << "Y ����� \n" << y;
	}
	else {

		if (x < -8) {
			y = abs(2 * x - 1) - 1;
			cout << "Y ����� \n" << y;
		}
		else {
			cout << "Y ����� 5";
		}

	}

	return 0;

	/*������ � y=2x-15, ���� x>2
      y=5, ���� x=2
      y = 3*|x-1|-8, ���� x<2*/

	/*setlocale(LC_ALL, "rus");
	double x = 0, y = 0;
	cout << "������� �: ";
	cin >> x;
	cout << "\n";

	if (x > 2) {

		y = 2 * x - 15;
		cout << "Y ����� \n" << y;
	}
	else {

		if (x < 2) {
			y = 3 * abs(x - 1) - 8;
			cout << "Y ����� \n" << y;
		}
		else {
			cout << "Y ����� 5";
		}

	}

	return 0;*/

	//������ 2 �) �=�, �=2-�^2
		/*setlocale(LC_ALL, "rus");
		double x = 0, y = 0;
		cout << "������� �: ";
		cin >> x;
		cout << "\n";

		cout << "������� y: ";
		cin >> y;
		system("CLS");

		if (y <= (2 - pow(x, 2)) && ((y >= x) || ((y >= 0) && (y <= x)))) {
			cout << "����� �������� � �������.\n";
		}
		else {
			cout << "����� �� �������� � �������.\n";
		}

		return 0;*/
	
		//������ 3 � �������� ���������, ������� ��������� �� ������������ ���������� ����� � ����������, ������ �� ����� � �������������� �������. y=e^-x, y=e^x, y=x^2
			setlocale(LC_ALL, "rus");
			double x = 0, y = 0;
			cout << "������� �: ";
			cin >> x;
			cout << "\n";

			cout << "������� y: ";
			cin >> y;
			system("CLS");

			if (y >= pow(x, 2) && y <= pow(M_E, x) && y <= pow(M_E, -x)) {
				cout << "����� �������� � �������.\n";
			}
			else {
				cout << "����� �� �������� � �������.\n";
			}

			return 0;
		}

