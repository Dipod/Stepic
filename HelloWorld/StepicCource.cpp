#include <iostream>
using namespace std;
int main()
{
	int firstClass, secondClass, thirdClass;
    std::cin >> firstClass >> secondClass >> thirdClass;
	std::cout << (firstClass + 1) / 2 + (secondClass + 1) / 2 + (thirdClass + 1) / 2;
	return 0;
}