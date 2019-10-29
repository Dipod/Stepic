#include <iostream>
using namespace std;
int main()
{
	int firstNumber, secondNumber, thirdNumber;
	cin >> firstNumber >> secondNumber >> thirdNumber;
	if (firstNumber >= secondNumber && firstNumber >= thirdNumber){
		cout << firstNumber;
	}
	else if (secondNumber >= thirdNumber){
		cout << secondNumber;
	}
	else {
		cout << thirdNumber;
	}
	return 0;
}