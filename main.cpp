//Найдите в данной строке самое длинное слово и выведите его.
//
//Входные данные
//
//Вводится одна строка. Слова в ней отделены одним пробелом.
//
//Выходные данные
//
//Выведите самое длинное слово. Если таких слов несколько, то выводить нужно, которое встречается раньше.
//
//Sample Input:
//
//    Everyone of us has all we need
//
//Sample Output:
//
//    Everyone
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, result;
    int wordLength = 0, wordBeginPos = 0, maxWordLength = 0;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        if (s[i] != ' ') {
            wordLength++;
        }else{
            if(maxWordLength == 0){
                maxWordLength = wordLength;
            }else{
                if (maxWordLength < wordLength){
                    wordBeginPos = i - wordLength;
                    maxWordLength = wordLength;
                }
            }
            wordLength = 0;
        }
    }
    if (maxWordLength < wordLength){
        wordBeginPos = s.size() - wordLength;
        maxWordLength = wordLength + 1;
    }

    result = s.substr(wordBeginPos,maxWordLength);
    cout << result;
    return 0;
}