//Даны четыре действительных числа: x1, y1, x2, y2. Напишите функцию distance(x1, y1, x2, y2), вычисляющую расстояние между точкой (x1. y1) и (x2, y2). Считайте четыре действительных числа и выведите результат работы этой функции.
//Формат входных данных
//Вводятся четыре действительных числа.
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input:
//
//    0
//    0
//    1
//    1
//
//Sample Output:
//
//    1.41421
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double distance(double x1, double y1, double x2, double y2){
    return sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
}

int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << setprecision(6) << distance(x1,y1,x2,y2);
    return 0;
}