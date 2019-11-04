//Дан двумерный массив размером n×m (n и m не превосходят 1000). Симметричный ему относительно главной диагонали массив называется транспонированным к данному. Он имеет размеры m×n: строки исходного массива становятся столбцами транспонированного, столбцы исходного массива становятся строками транспонированного.
//
//Для данного массива постройте транспонированный массив и выведите его на экран.
//
//Sample Input:
//
//    3 4
//    11 12 13 14
//    21 22 23 24
//    31 32 33 34
//
//Sample Output:
//
//    11 21 31
//    12 22 32
//    13 23 33
//    14 24 34
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int array[n][m];
    int result[m][n];
    //array input
    for(int col = 0; col < n; col++){
        for(int row = 0; row < m; row++){
            cin >> array[col][row];
        }
    }
    //array processing
    for(int col = 0; col < n; col++){
        for(int row = 0; row < m; row++){
            result[row][col] = array[col][row];
        }
    }
    //array output
    for(int col = 0; col < m; col++){
        for(int row = 0; row < n; row++){
            cout << result[col][row] << ' ';
        }
        cout << endl;
    }
    return 0;
}