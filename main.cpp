//Учительница задала Пете домашнее задание — в заданном тексте расставить ударения в словах, после чего поручила Васе проверить это домашнее задание. Вася очень плохо знаком с данной темой, поэтому он нашел словарь, в котором указано, как ставятся ударения в словах. К сожалению, в этом словаре присутствуют не все слова. Вася решил, что в словах, которых нет в словаре, он будет считать, что Петя поставил ударения правильно, если в этом слове Петей поставлено ровно одно ударение.
//
//Оказалось, что в некоторых словах ударение может быть поставлено больше, чем одним способом. Вася решил, что в этом случае если то, как Петя поставил ударение, соответствует одному из приведенных в словаре вариантов, он будет засчитывать это как правильную расстановку ударения, а если не соответствует, то как ошибку.
//
//Вам дан словарь, которым пользовался Вася и домашнее задание, сданное Петей. Ваша задача — определить количество ошибок, которое в этом задании насчитает Вася.
//
//Входные данные
//
//Вводится сначала число N — количество слов в словаре (0 ≤ N ≤ 20000).
//
//Далее идет N строк со словами из словаря. Каждое слово состоит не более чем из 30 символов. Все слова состоят из маленьких и заглавных латинских букв. В каждом слове заглавная ровно одна буква — та, на которую попадает ударение. Слова в словаре расположены в алфавитном порядке. Если есть несколько возможностей расстановки ударения в одном и том же слове, то эти варианты в словаре идут в произвольном порядке.
//
//Далее идет упражнение, выполненное Петей. Упражнение представляет собой строку текста, суммарным объемом не более 300000 символов. Строка состоит из слов, которые разделяются между собой ровно одним пробелом. Длина каждого слова не превышает 30 символов. Все слова состоят из маленьких и заглавных латинских букв (заглавными обозначены те буквы, над которыми Петя поставил ударение). Петя мог по ошибке в каком-то слове поставить более одного ударения или не поставить ударения вовсе.
//
//Выходные данные
//
//Выведите количество ошибок в Петином тексте, которые найдет Вася.
//
//Примечание к примеру
//
//1. В слове cannot, согласно словарю возможно два варианта расстановки ударения. Эти варианты в словаре могут быть перечислены в любом порядке (т.е. как сначала cAnnot, а потом cannOt, так и наоборот).
//Две ошибки, совершенные Петей — это слова be (ударение вообще не поставлено) и fouNd (ударение поставлено неверно). Слово thE отсутствует в словаре, но поскольку в нем Петя поставил ровно одно ударение, признается верным.
//
//2. Неверно расставлены ударения во всех словах, кроме The (оно отсутствует в словаре, в нем поставлено ровно одно ударение). В остальных словах либо ударные все буквы (в слове PAGE), либо не поставлено ни одного ударения.
//
//Sample Input 1:
//
//    4
//    cAnnot
//    cannOt
//    fOund
//    pAge
//    thE pAge cAnnot be fouNd
//
//Sample Output 1:
//
//    2
//
//Sample Input 2:
//
//    4
//    cAnnot
//    cannOt
//    fOund
//    pAge
//    The PAGE cannot be found
//
//Sample Output 2:
//
//    4
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;

vector <string> getWords(const string& s){
    int pos = 0, pos2 = 0;
    vector <string> result;
    if(s.empty()){
        return result;
    }
    pos = s.find(' ');
    while(pos != -1){
        result.push_back(s.substr(pos2, pos - pos2));
        pos2 = pos + 1;
        pos = s.find(' ', pos2);
    }
    result.push_back(s.substr(pos2, s.size() - pos2));
    return result;
}

bool IsUppercaseLetter(char a){
    return a >= 'A' && a <= 'Z';
}

char lowercase(char a){
    if (IsUppercaseLetter(a)){
        return 'a' + (a - 'A');
    }else{
        return a;
    }
}

string lowercaseString(const string& s){
    string result;
    for(auto now : s){
        result += lowercase(now);
    }
    return result;
}

bool checkWordInSolution(const string& s, map <string,set <string>>& dictionary){
    int uppercaseLetters = 0;
    map <string,set <string>>::iterator it;

    for(auto now : s){
        if(IsUppercaseLetter(now)){
            uppercaseLetters++;
        }
    }

    if(uppercaseLetters == 0 || uppercaseLetters > 1){
        return false;
    }

    it = dictionary.find(lowercaseString(s));
    if(it != dictionary.end()){
        return (*it).second.find(s) != (*it).second.end();
    }else{
        return true;
    }
}

int main(){
    int n = 0, result = 0;
    cin >> n;
    vector <string> words(n);
    string currentString;
    for(int i = 0; i < n; i++){
        cin >> words[i];
    }
    map <string,set <string>> dictionary;
    map <string,set <string>>::iterator it;
    for(int i = 0; i < n; i++){
        for(const auto & word : words){
            it = dictionary.find(lowercaseString(word));
            if(it != dictionary.end()){
                (*it).second.insert(word);
            }else{
                set <string> temp;
                temp.insert(word);
                dictionary[lowercaseString(word)] = temp;
            }
        }
    }
    getline(cin,currentString);
    getline(cin,currentString);
    words = getWords(currentString);
    for(const auto& now : words){
        if(!checkWordInSolution(now, dictionary)){
            result++;
        }
    }
    cout << result;
    return 0;
}