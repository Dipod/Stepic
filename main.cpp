//По введенному символу определите, является ли он цифрой.
//
//Входные данные
//
//Вводится единственый символ.
//
//Выходные данные
//
//Выведите "yes", если символ является цифрой и "no" в противном случае. Обратите внимание, что слова нужно выводить маленькими буквами.
//
//Sample Input 1:
//
//    1
//
//Sample Output 1:
//
//    yes
//
//Sample Input 2:
//
//    a
//
//Sample Output 2:
//
//no
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
using namespace std;

bool IsNumber(char a){
    return a >= '0' && a <= '9';
}

int main()
{
    char a;
    cin >> a;
    cout << (IsNumber(a) ? "yes" : "no");
    return 0;
}