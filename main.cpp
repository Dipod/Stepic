//Дан прямоугольный массив размером n×m. Поверните его на 90 градусов по часовой стрелке, записав результат в новый массив размером m×n.
//Формат входных данных
//Вводятся два числа n и m, не превосходящие 100, затем массив размером n×m.
//Формат выходных данных
//
//Выведите получившийся массив. Числа при выводе разделяйте одним пробелом.
//
//Sample Input:
//
//3 4
//11 12 13 14
//21 22 23 24
//31 32 33 34
//
//Sample Output:
//
//31 21 11
//32 22 12
//33 23 13
//34 24 14
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int array[n][m];
    int temp[m][n];
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
            temp[row][col] = array[col][row];
        }
    }
    for(int col = 0; col < m; col++){
        for(int row = 0; row < n; row++){
            result[col][row] = temp[col][n - 1 - row];
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