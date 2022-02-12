#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES

int main()
{   
	float a, b;
	//Задача 1 - Ввести на экран первую букву своего имени (Вероника)
	std::cout << " ***" << std::endl
		      << " *   *" << std::endl
		      << " *   *" << std::endl
		      << " ****" << std::endl
	          << " *   *" << std::endl
		      << " *    *" << std::endl
		      << " *    *" << std::endl
		      << " *****" << std::endl;

	//Задача номер 2 (пользлватель вводит параметры фигуры, вывод периметр и площадь фигуры (а. круг))

	std::cout << " Vvedite radius okruzhnosti " << std::endl;
	int num;
	std::cin >> num;
	std::cout << " radius raven " << num;
	std::cout << "\n perimetr okruzhnosti raven " << 2 * 3.14 * num;
	std::cout << "\n ploshad kruga ravna " << 3.14 * num*num;

	//Задача номер 4 Пользователь вводит два числа. Необходимо поменять значения переменных так, чтобы значение первой оказалось во второй, а второй - в первой.
	//Для воспроизведения нужно заккоментировать вторую задачу

	::cout << " Vvedite chislo A, a zatem chislo B " << std::endl;
	int num;
	std::cin >> a >> b;
	std::cout << "\n pomenaem znachenia A i B drug s drugom ";
	std::cout << "\n Znachenie A, posle izmenenia ravno " << b;
	std::cout << "\n Znachenie B, posle izmenenia ravno " << a;

	std::getchar();
	std::getchar();

	return 0;

}