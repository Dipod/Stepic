//Дано число N. Определите, сколькими способами можно расставить на доске N×N N ферзей, не бьющих друг друга.
//Формат входных данных
//
//Задано единственное число N. (N ≤ 10)
//Формат выходных данных
//Выведите ответ на задачу.
//Подсказка
//Напишите рекурсивную функцию, которая пытается поставить ферзя в очередной столбец. Если на эту клетку ставить ферзя нельзя (он бьет предыдущих), то такой вариант даже не стоит рассматривать. Когда вы успешно поставили ферзя в последний столбец - увеличивайте счетчик.
//
//Sample Input:
//
//    8
//
//Sample Output:
//
//    92
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <vector>

using namespace std;

struct queenCoordinate{
    int x = 0;
    int y = 0;
};

bool beatCheck(queenCoordinate a1, queenCoordinate a2)
{
    int x_shift = (a2.x - a1.x) * (a2.x - a1.x);
    int y_shift = (a2.y - a1.y) * (a2.y - a1.y);
    return x_shift == y_shift || (a1.x == a2.x || a1.y == a2.y);
}

int solve(vector <queenCoordinate> queenCoordinates, int n, int currentRow){
    int result = 0;
    queenCoordinate temp;
    temp.x = currentRow;
    for(int col = 1; col <= n; col++){
        bool badAccommodation = false;
        temp.y = col;
        for(auto now : queenCoordinates){
            if(!badAccommodation){
                badAccommodation = beatCheck(now,temp);
            }else{
                break;
            }
        }
        if(!badAccommodation){
            if(currentRow == n){
                result++;
            }else{
                vector <queenCoordinate> childQueenCoordinates;
                childQueenCoordinates = queenCoordinates;
                childQueenCoordinates.push_back(temp);
                result += solve(childQueenCoordinates, n, currentRow + 1);
            }
        }
    }
    return result;
}

int main()
{
    int n = 0;
    cin >> n;
    vector <queenCoordinate> queenCoordinates;

    cout << solve(queenCoordinates, n, 1);

    return 0;
}