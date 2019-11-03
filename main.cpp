//Дан массив чисел. Выведите все элементы массива, которые больше предыдущего элемента .
//
//Формат входных данных
//В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input:
//
//    5
//    1 5 2 4 3
//
//Sample Output:
//
//    5 4
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> array(n);
    //array input
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    for (int i = 1; i < n; i++){
        if(array[i] > array[i-1]) {
            cout << array[i] << " ";
        }
    }
    return 0;
}