//Дан массив чисел. Посчитайте, сколько в нем пар элементов, равных друг другу. Считается, что любые два элемента, равные друг другу образуют одну пару, которую необходимо посчитать.
//
//Формат входных данных
//В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input 1:
//
//    5
//    1 2 3 2 3
//
//Sample Output 1:
//
//    2
//
//Sample Input 2:
//
//    5
//    1 1 1 1 1
//
//Sample Output 2:
//
//    10
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, coupleCounter = 0;
    cin >> n;
    vector <int> array(n);
    //array input
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    //array processing
    for(int j = 0; j < n; j++){
        for(int i = j + 1; i < n; i++){
            if(array[j] == array[i]){
                coupleCounter++;
            }
        }
    }
    //array output
    cout << coupleCounter;
}