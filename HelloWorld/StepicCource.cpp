#include <iostream>
using namespace std;
int main()
{
	int Number;
	cin >> Number;

	int leftPart = Number / 100;
	int rightPart = Number % 100;
	int dec = rightPart / 10;
	int units = rightPart % 10;
	rightPart = units * 10 + dec;

	cout << leftPart - rightPart + 1;
	return 0;
}