//Определите среднее значение всех элементов последовательности, завершающейся числом 0.
//
//Формат входных данных
//Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input:
//
//  1
//  7
//  9
//  0
//
//Sample Output:
//
//  5.66666666667
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N, sum = 0, counter = 0;
    double result = 0.0;
    cin >> N;

    while (N != 0) {
        sum = sum + N;
        counter++;
        cin >> N;
    }
    result = (double)sum / (double)counter;
    cout << fixed << setprecision(6) << result;
    return 0;
}