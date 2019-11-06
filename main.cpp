//В сети интернет каждому компьютеру присваивается четырехбайтовый код, который принято записывать в виде четырех чисел, каждое из которых может принимать значения от 0 до 255, разделенных точками. Вот примеры правильных IP-адресов:
//127.0.0.0
//192.168.0.1
//255.0.255.255
//Напишите программу, которая определяет, является ли заданная строка правильным IP-адресом.
//
//Входные данные
//
//Программа получает на вход строку из произвольных символов.
//
//Выходные данные
//
//Если эта строка является корректной записью IP-адреса, выведите YES, иначе выведите NO.
//
//Примечание
//
//Для перевода из строки в число удобно пользоваться функцией stoi, которая принимает на вход строку, а возвращает число.
//
//Sample Input:
//
//    127.0.0.1
//
//Sample Output:
//
//    YES
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <string> StringToVectorOfSubstrings(string s, char separator){
    vector <string> arrayOfSubstrings;
    int substrLength = 0, substrBeginPos = 0;
    string emptyString;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != separator){
            substrLength++;
        }
        else{
            if(substrLength == 0){
                arrayOfSubstrings.push_back(emptyString);
                substrBeginPos = i + 1;
            }else{
                arrayOfSubstrings.push_back(s.substr(substrBeginPos,substrLength));
                substrLength = 0;
                substrBeginPos = i - substrLength + 1;
            }
        }
    }
    if(substrLength == 0){
        arrayOfSubstrings.push_back(emptyString);
    }else{
            substrBeginPos = s.size() - substrLength;
            arrayOfSubstrings.push_back(s.substr(substrBeginPos,substrLength + 1));
    }
    return arrayOfSubstrings;
}

int main()
{
    string s;
    int ipv4Part = 0;
    getline(cin, s);
    vector <string> arrayOfSubstrings;
    arrayOfSubstrings = StringToVectorOfSubstrings(s,'.');

    if(arrayOfSubstrings.size() != 4){
        cout << "NO";
        return 0;
    }

    for(auto now : arrayOfSubstrings){
        if (now == "" || now.size() > 3){
            cout << "NO";
            return 0;
        }
        try{
            ipv4Part = stoi(now);
        }
        catch(...){
            cout << "NO";
            return 0;
        }
        if (ipv4Part < 0 || ipv4Part > 255) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}