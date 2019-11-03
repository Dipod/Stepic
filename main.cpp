//Выведите все четные элементы массива.
//
//Формат входных данных
//В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//Выведите ответ на задачу. Элементы выводятся в том же порядке, в котором они стояли в массиве.
//
//Sample Input:
//
//    7
//    1 2 2 3 3 3 4
//
//Sample Output:
//
//    2 2 4
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
        if(temp % 2 == 0){
            array.push_back(temp);
        }
    }
    //array output
    for (auto now : array){
        cout << now << " ";
    }

    return 0;
}