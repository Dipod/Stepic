//Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада в конце года.Вклад составляет X рублей Y копеек.Определите размер вклада через год.
//
//При решении этой задачи нельзя пользоваться условными инструкциями и циклами.
//Формат входных данных
//Программа получает на вход целые числа P, X, Y.
//Формат выходных данных
//Программа должна вывести два числа : величину вклада через год в рублях и копейках.Дробная часть копеек отбрасывается.
//
//Sample Input :
//
//	12
//	179
//	0
//
//Sample Output :
//
//	200 48
//
//Напишите программу.Тестируется через stdin → stdout

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int P, X, Y;

	cin >> P >> X >> Y;

	double money, percentInYear;

	money = (double)X + (double)Y / 100.0 + 0.000000001; //error compensation
	percentInYear = (double)P / 100.0 + 1.0 + 0.000000001;

	money = money * percentInYear;

	X = trunc(money);
	money = money - X;
	Y = trunc(money * 100.0);
	
	cout << X << " " << Y;
	return 0;
}