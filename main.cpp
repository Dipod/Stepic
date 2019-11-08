//Выведите все исходные точки в порядке возрастания их расстояний от начала координат.
//
//Входные данные
//
//Программа получает на вход набор точек на плоскости. Сначала задано количество точек n, затем идет последовательность из n строк, каждая из которых содержит два числа: координаты точки. Величина n не превосходит 100, все исходные координаты – целые числа, не превосходящие 103.
//
//Выходные данные
//
//Необходимо вывести все исходные точки в порядке возрастания их расстояний от начала координат.
//
//Sample Input:
//
//    2
//    1 2
//    2 3
//
//Sample Output:
//
//    1 2
//    2 3
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <algorithm>
#include <vector>

struct point{
    int x = 0;
    int y = 0;
};

bool pointComparator(const point a1, const point a2){
    return a1.x * a1.x + a1.y * a1.y < a2.x * a2.x + a2.y * a2.y;
}

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <point> points(n);

    for(int i = 0; i < n; i++){
        cin >> points[i].x;
        cin >> points[i].y;
    }

    sort(points.begin(),points.end(),pointComparator);

    for(auto now : points){
        cout << now.x << " " << now.y << endl;
    }
    return 0;
}