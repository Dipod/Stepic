//Дано натуральное число n > 1. Выведите его наименьший делитель, отличный от 1.
//Решение оформите в виде функции MinDivisor(n). Количество операций в программе должно быть пропорционально корню из n.
//Указание. Если у числа n нет делителя, меньшего n , то число n — простое и ответом будет само число n.
//Формат входных данных
//Вводится натуральное число.
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input 1:
//
//    4
//
//Sample Output 1:
//
//    2
//
//Sample Input 2:
//
//    5
//
//Sample Output 2:
//
//    5
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <cmath>

using namespace std;

int MinDivisor(int n){
    double limit = (sqrt(n) + 1) / 6;
    int a, b;

    if (n % 2 == 0){
        return 2;
    }

    if (n % 3 == 0){
        return 3;
    }

    for(int k = 1; k <= limit; k++){
        a = 6 * k - 1;
        b = 6 * k + 1;
        if(n % a == 0){
            return a;
        }
        if(n % b == 0){
            return b;
        }
    }
    return n;
}

int main()
{
    int n;
    cin >> n;
    cout << MinDivisor(n);
    return 0;
}