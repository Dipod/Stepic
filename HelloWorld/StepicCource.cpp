//Даны длины сторон треугольника.Вычислите площадь треугольника.
//Формат входных данных
//Вводятся три положительных числа.
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input :
//
//	3
//	4
//	5
//
//Sample Output :
//
//	6
//
//Напишите программу.Тестируется через stdin → stdout

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c, p, S;
	cin >> a >> b >> c;

	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << fixed << setprecision(6) << S;
	return 0;
}