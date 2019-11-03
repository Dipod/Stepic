//Найдите количество положительных элементов в данном массиве.
//
//Формат входных данных
//В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input:
//
//    5
//    1 -2 3 -4 5
//
//Sample Output:
//
//    3
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int temp, n;
    cin >> n;
    vector <int> array;
    //array input
    for (int i = 0; i < n; i++){
        cin >> temp;
        if(temp > 0){
            array.push_back(temp);
        }
    }
    cout << array.size();
    return 0;
}