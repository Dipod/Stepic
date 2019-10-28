#include <iostream>
using namespace std;
int main()
{
	int Number, Hundreds, Dozens, Units;
    std::cin >> Number;

	Hundreds = Number / 100;
	Dozens = Number / 10 % 10;
	Units = Number % 10;

	std::cout << Hundreds + Dozens + Units;
	return 0;
}