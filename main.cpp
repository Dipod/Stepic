//Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга. Вам дана расстановка 8 ферзей на доске, определите, есть ли среди них пара бьющих друг друга.
//
//Формат входных данных
//Программа получает на вход восемь пар чисел, каждое число от 1 до 8 - координаты 8 ферзей.
//Формат выходных данных
//Если ферзи не бьют друг друга, выведите слово NO, иначе выведите YES.
//
//Sample Input 1:
//
//    1 7
//    2 4
//    3 2
//    4 8
//    5 6
//    6 1
//    7 3
//    8 5
//
//Sample Output 1:
//
//    NO
//
//Sample Input 2:
//
//    1 8
//    2 7
//    3 6
//    4 5
//    5 4
//    6 3
//    7 2
//    8 1
//
//Sample Output 2:
//
//    YES
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <vector>
using namespace std;

bool beatCheck(int x1, int y1, int x2, int y2)
{
    int x_shift = (x2 - x1) * (x2 - x1);
    int y_shift = (y2 - y1) * (y2 - y1);
    return x_shift == y_shift || (x1 == x2 || y1 == y2);
}

int main()
{
    vector <int> arrayX(8);
    vector <int> arrayY(8);
    //array input
    for(int i = 0; i < 8; i++){
        cin >> arrayX[i];
        cin >> arrayY[i];
    }
    //array processing
    for(int j = 0; j < 8; j++){
        for(int i = 0; i < 8; i++){
            if(i != j && beatCheck(arrayX[j],arrayY[j],arrayX[i],arrayY[i])){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}