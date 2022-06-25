#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//1. —генерировать массив со случайными числами в диапазоне: b.[10, 20]
int main()
{
	setlocale(LC_ALL, "rus");
	srand(static_cast<unsigned int>(time(0)));

	int col;

	cout << "¬ведите кол-во элементов: "; 
	cin >> col;
	system("CLS");

	int* mas = new int[col];

	for (int i = 0; i < col; i++) {
		mas[i] = 10 + rand() % 11;
	}

	for (int i = 0; i < col; i++) {
		cout << mas[i] << " ";
	}

	return 0;
}