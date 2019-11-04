//Найдите индексы первого вхождения максимального элемента.
//Формат входных данных
//
//Программа получает на вход размеры массива n и m, затем n строк по m чисел в каждой. n и m не превышают 100.
//Формат выходных данных
//
//Выведите два числа: номер строки и номер столбца, в которых стоит наибольший элемент в двумерном массиве. Если таких элементов несколько, то выводится тот, у которого меньше номер строки, а если номера строк равны то тот, у которого меньше номер столбца.
//
//Sample Input:
//
//    3 4
//    0 3 2 4
//    2 3 5 5
//    5 1 2 3
//
//Sample Output:
//
//    1 2
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
using namespace std;

int main()
{
    int columns, rows, colMax = 0, rowMax = 0, temp;
    cin >> columns >> rows;
    int array[100][100];
    //array input
    for(int col = 0; col < columns; col++){
        for(int row = 0; row < rows; row++){
            cin >> array[col][row];
        }
    }
    //array processing
    for(int col = 0; col < columns; col++){
        for(int row = 0; row < rows; row++){
            if(col == 0 && row == 0){
                temp = array[col][row];
            }else if(temp < array[col][row]){
                temp = array[col][row];;
                colMax = col;
                rowMax = row;
            }
        }
    }
    cout << colMax << " " << rowMax;
    return 0;
}