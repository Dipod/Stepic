//Дано число n, не превосходящее 10, и массив размером n × n. Проверьте, является ли этот массив симметричным относительно главной диагонали. Выведите слово “YES”, если массив симметричный, и слово “NO” в противном случае.
//
//Sample Input:
//
//    3
//    0 1 2
//    1 2 3
//    2 3 4
//
//Sample Output:
//
//    YES
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
            cin >> array[col][row];
        }
    }
    //array processing
    for(int col = 0; col < n; col++){
        for(int row = 0; row < n; row++){
            if(col == row){
                continue;
            }
            if(array[col][row] != array[row][col]){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}