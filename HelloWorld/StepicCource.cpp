#include <iostream>
using namespace std;
int main()
{
	int rub, cop, numberOfPattys;
    std::cin >> rub >> cop >> numberOfPattys;
	std::cout << (rub * 100 + cop) * numberOfPattys / 100 << " " << (rub * 100 + cop) * numberOfPattys % 100;
	return 0;
}