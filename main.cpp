//Вам дан словарь, состоящий из пар слов. Каждое слово является синонимом к парному ему слову. Все слова в словаре различны. Для одного данного слова определите его синоним.
//
//Входные данные
//
//Программа получает на вход количество пар синонимов N. Далее следует N строк, каждая строка содержит ровно два слова-синонима. После этого следует одно слово.
//
//Выходные данные
//
//Программа должна вывести синоним к данному слову.
//
//Sample Input:
//
//    3
//    Hello Hi
//    Bye Goodbye
//    List Array
//    Goodbye
//
//Sample Output:
//
//    Bye
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    map <string,string> dictionary;
    string word1, word2;

    for(int i = 0; i < n; i++){
        cin >> word1 >> word2;
        dictionary[word1] = word2;
        dictionary[word2] = word1;
    }

    cin >> word1;
    cout << dictionary[word1];
    return 0;
}