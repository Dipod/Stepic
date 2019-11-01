//Дана последовательность натуральных чисел, завершающаяся числом 0. Определите, какое наибольшее число подряд идущих элементов этой последовательности равны друг другу.Если не нашлось ни одной пары, тройки и т.д.элементов, равных друг другу, то программа должна вывести число 1.
//Формат входных данных
//Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input :
//
//	1
//	7
//	7
//	9
//	1
//	0
//
//Sample Output :
//
//	2
//
//Напишите программу.Тестируется через stdin → stdout

#include <iostream>
using namespace std;

int main()
{
	int N, maxEqualOrderCount = 1, previous = -1, result = 1;
	cin >> N;
	if (N == 0) {
		cout << 0;
	}
	while (N != 0) {
		if (previous == N) {
			maxEqualOrderCount++;
		}
		else {
			if (result < maxEqualOrderCount) {
				result = maxEqualOrderCount;
			}
			maxEqualOrderCount = 1;
		}
		previous = N;
		cin >> N;
	}
	if (result < maxEqualOrderCount) {
		result = maxEqualOrderCount;
		maxEqualOrderCount = 1;
	}
	cout << result;
	return 0;
}