//По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “змейкой”, как показано в примере.
//Формат входных данных
//Вводятся два числа n и m, каждое из которых не превышает 30.
//Формат выходных данных
//
//Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//  3 5
//
//Sample Output:
//
//   1   2   3   4   5
//  10   9   8   7   6
//  11  12  13  14  15
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, m, counter = 1;
    cin >> n >> m;
    int array[n][m];
    //array input
    for(int col = 0; col < n; col++){
        for(int row = 0; row < m; row++){
            if(col % 2 == 0){
                array[col][row] = counter;
            }else{
                array[col][m - 1 - row] = counter;
            }
            counter++;
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