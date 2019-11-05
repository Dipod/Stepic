//Переведите символ в верхний регистр.
//
//Входные данные
//
//Вводится единственый символ.
//
//Выходные данные
//
//Если введеный символ является строчной буквой латинского алфавита, то выведите такую же заглавную букву. В противном случае выведите тот же символ, который был введен.
//
//Sample Input:
//
//    b
//
//Sample Output:
//
//    B
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
using namespace std;

bool IsLowercaseLetter(char a){
    return a >= 'a' && a <= 'z';
}

char uppercase(char a){
    if (IsLowercaseLetter(a)){
        return 'A' + (a - 'a');
    }else{
        return a;
    }
}

int main()
{
    char a;
    cin >> a;
    cout << uppercase(a);
    return 0;
}