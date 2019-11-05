//По данной строке определите, является ли она палиндромом (то есть, читается одинаково как слева-направо, так и справа-налево).
//
//Входные данные
//
//На вход подается 1 строка без пробелов.
//
//Выходные данные
//
//Необходимо вывести yes, если строка является палиндромом, и no в противном случае.
//
//Sample Input:
//
//    kayak
//
//Sample Output:
//
//    yes
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    unsigned int limit = s.size() / 2;
    for(unsigned int i = 0; i <= limit; i++){
        if (s[i] != s[s.size() - 1 - i]) {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}