#include <iostream>
using namespace std;
int main()
{
	int firstNumber, secondNumber;
	cin >> firstNumber >> secondNumber;
	if (firstNumber > secondNumber){
		cout << 1;
	}
	else if (firstNumber == secondNumber){
		cout << 0;
	}
	else {
		cout << 2;
	}
	return 0;
}