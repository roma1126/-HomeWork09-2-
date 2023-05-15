#include <iostream>
#include "Fraction.h"

static std::ostream& operator << (std::ostream& out, const Fraction& fraction)
{
	return out << fraction.get_numerator() << "/" << fraction.get_denominator();
};



int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Rus");

	int x = 0;
	int y = 0;

	Fraction f(0, 0);


	std::cout << "Введите числитель дроби 1: " << "\n";
	std::cin >> x;
	std::cout << "Введите знаменатель дроби 1: " << "\n";
	std::cin >> y;
	Fraction a1(x, y);

	std::cout << "Введите числитель дроби 2: " << "\n";
	std::cin >> x;
	std::cout << "Введите знаменатель дроби 2: " << "\n";
	std::cin >> y;
	Fraction a2(x, y);



	std::cout << a1.print_info() << " + " << a2.print_info() << " = " << a1 + a2 << "\n";


	std::cout << a1.print_info() << " - " << a2.print_info() << " = " << a1 - a2 << "\n";

	std::cout << a1.print_info() << " * " << a2.print_info() << " = " << a1 * a2 << "\n";

	std::cout << a1.print_info() << " / " << a2.print_info() << " = " << a1 / a2 << "\n";

	std::cout << "++" << a1.print_info() << " * " << a2.print_info(); std::cout << " = " << ++a1 * a2 << "\n";

	std::cout << "Значение дроби 1 " << a1.print_info() << "\n";


	std::cout << a1.print_info() << "--" << " * " << a2.print_info();
	std::cout << " = " << a1-- * a2 << "\n";
	std::cout << "Значение дроби 1 " << a1.print_info() << "\n";


	return 0;
}