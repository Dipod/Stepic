//Во входной строке записана последовательность чисел через пробел. Для каждого числа выведите слово YES (в отдельной строке), если это число ранее встречалось в последовательности или NO, если не встречалось.
//
//Входные данные
//
//Вводится число N - количество элементов списка, а затем N чисел.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//    6
//    1 2 3 2 3 4
//
//Sample Output:
//
//    NO
//    NO
//    NO
//    YES
//    YES
//    NO
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <set>

using namespace std;
int main()
{
    set <int> s;
    int n, temp = 0;
    cin >> n;
    for(int i = 0; i < n; i ++){
        cin >> temp;
        if(s.find(temp) == s.end()){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
        s.insert(temp);
    }
    return 0;
}