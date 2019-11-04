//Дано число n, не превышающее 100. Создайте массив размером n×n и заполните его по следующему правилу. На главной диагонали должны быть записаны числа 0. На двух диагоналях, прилегающих к главной, числа 1. На следующих двух диагоналях числа 2, и т.д. Выведите полученный массив на экран, разделяя элементы массива пробелами.
//
//Sample Input:
//
//    5
//
//Sample Output:
//
//    0 1 2 3 4
//    1 0 1 2 3
//    2 1 0 1 2
//    3 2 1 0 1
//    4 3 2 1 0
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n][n];
    //array input
    for(int col = 0; col < n; col++){
        for(int row = 0; row < n; row++){
            array[col][row] = col - row > 0 ? col - row : -(col - row);
        }
    }
    //array output
    for(int col = 0; col < n; col++){
        for(int row = 0; row < n; row++){
                cout << array[col][row] << ' ';
        }
        cout << endl;
    }
    return 0;
}