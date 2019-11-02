//Дана последовательность натуральных чисел x1, x2, ..., xn. Определите стандартное отклонение для данной последовательности натуральных чисел, завершающейся числом 0.
//
//Формат входных данных
//Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания). В последовательности не менее двух чисел до 0.
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
//  4.16333199893
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int N, sum = 0, sumOfSquares = 0, counter = 0;
    double deviation;
    cin >> N;

    while (N != 0) {
        sum = sum + N;
        sumOfSquares = sumOfSquares + N * N;
        counter++;
        cin >> N;
    }
    deviation = sqrt((sumOfSquares - (double)sum * (double)sum / (double)counter) / (counter - 1));
    cout << fixed << setprecision(6) << deviation;
    return 0;
}