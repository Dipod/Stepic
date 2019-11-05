//По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m по спирали, выходящей из левого верхнего угла и закрученной по часовой стрелке, как показано в примере.
//Формат входных данных
//
//Вводятся два числа n и m, не превышающие 100.
//Формат выходных данных
//
//Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//    4 5
//
//Sample Output:
//
//     1   2   3   4   5
//    14  15  16  17   6
//    13  20  19  18   7
//    12  11  10   9   8
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, m, col = 0, row = 0, step = 1; //step == 1 -> left to right; step == 2 -> up to down; step == 3 -> right to left; step == 4 -> down to up
    cin >> n >> m;
    int array[100][100] = {0};
    //array input
    for(int counter = 1; counter <= n * m; counter++){
        switch(step){
            case 1: {
                if (array[col][row] != 0 || row == m){
                    row--;
                    col++;
                    step = 2;
                    counter--;
                }else{
                    array[col][row] = counter;
                    row++;
                }
                break;
            }
            case 2: {
                if (array[col][row] != 0 || col == n){
                    row--;
                    col--;
                    step = 3;
                    counter--;
                }else{
                    array[col][row] = counter;
                    col++;
                }
                break;
            }
            case 3: {
                if (row == -1 || array[col][row] != 0 ){
                    row++;
                    col--;
                    step = 4;
                    counter--;
                }else{
                    array[col][row] = counter;
                    row--;
                }
                break;
            }
            case 4: {
                if (col == -1 || array[col][row] != 0 ){
                    col++;
                    row++;
                    step = 1;
                    counter--;
                }else{
                    array[col][row] = counter;
                    col--;
                }
                break;
            }
            default: {
                cout << "switch case error!";
                return 0;
            }
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