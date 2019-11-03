//Циклически сдвиньте элементы списка вправо (A[0] переходит на место A[1], A[1] на место A[2], ..., последний элемент переходит на место A[0]).
//
//Формат входных данных
//В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input:
//
//    5
//    1 2 3 4 5
//
//Sample Output:
//
//    5 1 2 3 4
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, temp;
    vector <int> array;
    cin >> n;
    //array input
    array.push_back(0);
    for(int i = 0; i < n; i++){
        cin >> temp;
        array.push_back(temp);
    }
    //array processing
    swap(array[0],array[n]);
    array.pop_back();

    //array output
    for(auto now : array){
        cout << now << " ";
    }
}