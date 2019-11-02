//Дан многочлен P(x)=anxn + an−1xn−1+ … + a1x + a0 и число x. Вычислите значение этого многочлена, воспользовавшись схемой Горнера:
//
//  P(x)=(…(((anx + an−1)x + an−2)x + an−3) … )x+ a0
//
//Формат входных данных
//Сначала программе подается на вход целое неотрицательное число n ≤ 20, затем действительное число x, затем следует n+1 вещественное число — коэффициенты многочлена от старшего к младшему.
//Формат выходных данных
//Программа должна вывести значение многочлена.
//
//Sample Input 1:
//
//  1
//  0.000
//  1.000
//  1.000
//
//Sample Output 1:
//
//  1
//
//Sample Input 2:
//
//  2
//  0.500
//  1.000
//  1.000
//  1.000
//
//Sample Output 2:
//
//  1.75
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, counter = 0;
    double x, a, a2, result = 0.0;
    cin >> n;
    cin >> x;

    if(n == 0){
        cin >> a;
        cout << fixed << setprecision(6) << a;
        return 0;
    }

    while (counter < n) {
        if (counter == 0){
            cin >> a >> a2;
            result = a * x + a2;
        } else{
            cin >> a;
            result = result * x + a;
        }
        counter++;
    }
    cout << fixed << setprecision(6) << result;
    return 0;
}