//Дано три числа.Упорядочите их в порядке неубывания.
//Формат входных данных
//Вводятся три числа.
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input :
//
//	1
//	2
//	1
//
//Sample Output :
//
//	1 1 2
//
//Напишите программу.Тестируется через stdin → stdout

#include <iostream>
using namespace std;
int main()
{
	int firstNumber, secondNumber, thirdNumber, buffer;
	cin >> firstNumber >> secondNumber >> thirdNumber;

	if (firstNumber > secondNumber) {
		buffer = secondNumber;
		secondNumber = firstNumber;
		firstNumber = buffer;
	}

	if (secondNumber > thirdNumber) {
		buffer = thirdNumber;
		thirdNumber = secondNumber;
		secondNumber = buffer;
	}

	if (firstNumber > secondNumber) {
		buffer = secondNumber;
		secondNumber = firstNumber;
		firstNumber = buffer;
	}

	cout << firstNumber << " " << secondNumber << " " << thirdNumber;

	return 0;
}