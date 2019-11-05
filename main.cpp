//Даны числа n и m. Заполните массив размером n × m в шахматном порядке: клетки одного цвета заполнены нулями, а другого цвета - заполнены числами натурального ряда сверху вниз, слева направо. В левом верхнем углу записано число 1.
//Формат входных данных
//
//Вводятся два числа n и m, не превышающие 100.
//Формат выходных данных
//
//Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//    3 5
//
//Sample Output:
//
//    1   0   2   0   3
//    0   4   0   5   0
//    6   0   7   0   8
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, m, counter = 1, mainCounter = 0;
    cin >> n >> m;
    int array[n][m];
    //array input
    for(int col = 0; col < n; col++){
        for(int row = 0; row < m; row++){
            if(mainCounter % 2 == 0){
                array[col][row] = counter;
                counter++;
            }else{
                array[col][row] = 0;
            }
            mainCounter++;
        }
        if(m % 2 == 0){
            mainCounter++;
        }
    }
    //array output
    for(int col = 0; col < n; col++){
        for(int row = 0; row < m; row++){
            cout << setw(3) << array[col][row] << ' ';
        }
        cout << endl;
    }
    return 0;
}