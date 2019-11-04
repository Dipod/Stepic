//Дано нечетное число n, не превосходящее 15. Создайте двумерный массив из n×n элементов, заполнив его символами "." (каждый элемент массива является строкой из одного символа). Затем заполните символами "*" среднюю строку массива, средний столбец массива, главную диагональ и побочную диагональ. В результате "*" в массиве должны образовывать изображение звездочки. Выведите полученный массив на экран, разделяя элементы массива пробелами.
//
//Sample Input:
//
//    5
//
//Sample Output:
//
//    * . * . *
//    . * * * .
//    * * * * *
//    . * * * .
//    * . * . *
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
using namespace std;

bool beatCheck(int x1, int y1, int x2, int y2)
{
    int x_shift = (x2 - x1) * (x2 - x1);
    int y_shift = (y2 - y1) * (y2 - y1);
    return x_shift == y_shift || (x1 == x2 || y1 == y2);
}

int main()
{
    int n, centr;
    cin >> n;
    centr = n / 2;
    char array[n][n];
    //array input
    for(int col = 0; col < n; col++){
        for(int row = 0; row < n; row++){
            if(beatCheck(centr,centr,col,row)){
                array[col][row] = '*';
            }else{
                array[col][row] = '.';
            }

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