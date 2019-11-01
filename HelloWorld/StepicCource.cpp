//Дано положительное действительное число X.Выведите его первую цифру после десятичной точки.
//Формат входных данных
//Вводится положительное действительное число.
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input :
//
//	1.79
//
//Sample Output :
//
//	7
//
//Напишите программу.Тестируется через stdin → stdout

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double N;
	cin >> N;

	cout << trunc((N - trunc(N)) * 10);
	return 0;
}