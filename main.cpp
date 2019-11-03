//Дан список, упорядоченный по неубыванию элементов в нем. Определите, сколько в нем различных элементов.
//
//Формат входных данных
//В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input:
//
//    6
//    1 2 2 3 3 3
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
    int n, temp;
    vector <int> array;
    cin >> n;
    cin >> temp;
    array.push_back(temp);

    for(int i = 1; i < n; i++){
        cin >> temp;
        if(array.back() != temp){
            array.push_back(temp);
        }
    }
    cout << array.size();
}