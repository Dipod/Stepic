//Даны два списка чисел, которые могут содержать до 100000 чисел каждый. Посчитайте, сколько чисел содержится одновременно как в первом списке, так и во втором.
//
//Входные данные
//
//Вводится число N - количество элементов первого списка, а затем N чисел первого списка.
//
//Затем вводится число M - количество элементов второго списка, а затем M чисел второго списка.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//    3
//    1 3 2
//    3
//    4 3 2
//
//Sample Output:
//
//    2
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;
int main()
{
    set <int> s1, s2, intersect;
    int n, temp = 0;
    cin >> n;
    for(int i = 0; i < n; i ++){
        cin >> temp;
        s1.insert(temp);
    }
    cin >> n;
    for(int i = 0; i < n; i ++){
        cin >> temp;
        s2.insert(temp);
    }

    set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),
                     inserter(intersect,intersect.begin()));

    cout << intersect.size();
    return 0;
}