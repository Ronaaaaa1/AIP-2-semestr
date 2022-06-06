#include <iostream>
using namespace std;

//ќписать процедуру TimeToHMS(T, H, M, S), определ€ющую по времени T (в секундах) содержащеес€ в нем количество часов H, минут M и секунд S(T Ч входной, H, M и S Ч выходные параметры целого типа).»спользу€ эту процедуру, найти количество часов, минут и секунд дл€ п€ти данных отрезков времени T1, T2,. . ., T5.

void TimeToHMS(int time) {
	int H = time / 3600, M = time / 60;
	cout << " ол-во часов: " << H << endl;
	cout << " ол-во минут: " << M << endl;
	cout << " ол-во секунд: " << time << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");

	int mas[5];

	for (int i = 0; i < 5; i++) {
		cout << "¬ведите отрезок в секундах: ";
		cin >> mas[i];
		TimeToHMS(mas[i]);
		cout << endl;
	}

	return 0;
}
