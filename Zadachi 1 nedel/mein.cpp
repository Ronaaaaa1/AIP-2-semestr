#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES

int main()
{   
	float a, b;
	//������ 1 - ������ �� ����� ������ ����� ������ ����� (��������)
	std::cout << " ***" << std::endl
		      << " *   *" << std::endl
		      << " *   *" << std::endl
		      << " ****" << std::endl
	          << " *   *" << std::endl
		      << " *    *" << std::endl
		      << " *    *" << std::endl
		      << " *****" << std::endl;

	//������ ����� 2 (������������ ������ ��������� ������, ����� �������� � ������� ������ (�. ����))

	std::cout << " Vvedite radius okruzhnosti " << std::endl;
	int num;
	std::cin >> num;
	std::cout << " radius raven " << num;
	std::cout << "\n perimetr okruzhnosti raven " << 2 * 3.14 * num;
	std::cout << "\n ploshad kruga ravna " << 3.14 * num*num;

	//������ ����� 4 ������������ ������ ��� �����. ���������� �������� �������� ���������� ���, ����� �������� ������ ��������� �� ������, � ������ - � ������.
	//��� ��������������� ����� ���������������� ������ ������

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