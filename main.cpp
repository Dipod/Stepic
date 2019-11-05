//По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “диагоналями”, как показано в примере.
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
//    1   2   4   7  10
//    3   5   8  11  13
//    6   9  12  14  15
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, m, col = 0, row = 0, counter = 1;
    cin >> n >> m;
    int array[n][m];
    //array input
    while(counter <= n * m) {
        if(row >= 0 && row < m) {
            array[col][row] = counter;
            counter++;
        }
        col++;
        row--;
        if(col == n){
            col = 0;
            row += n + 1;
        }
    }
    //array output
    for(col = 0; col < n; col++){
        for(row = 0; row < m; row++){
            cout << setw(3) << array[col][row] << ' ';
        }
        cout << endl;
    }
    return 0;
}