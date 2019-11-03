//Выведите значение наименьшего нечетного элемента списка, а если в списке нет нечетных элементов - выведите число 0.
//
//Формат входных данных
//В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input 1:
//
//    5
//    0 1 2 3 4
//
//Sample Output 1:
//
//    1
//
//Sample Input 2:
//
//    5
//    2 4 6 8 10
//
//Sample Output 2:
//
//    0
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>

using namespace std;

int main()
{
    int result = 0, temp, n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if (temp % 2 != 0){
            if(result == 0){
                result = temp;
            }
            if(temp < result){
                result = temp;
            }
        }
    }
    cout << result;
}