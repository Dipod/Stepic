//Во время проведения олимпиады каждый из участников получил свой идентификационный номер – натуральное число. Необходимо отсортировать список участников олимпиады по количеству набранных ими баллов.
//
//Входные данные
//
//На первой строке дано число N (1 ≤ N ≤ 1000) – количество участников. На каждой следующей строке даны идентификационный номер и набранное число баллов соответствующего участника. Все числа во входном файле не превышают 105.
//
//Выходные данные
//
//В выходной файл выведите исходный список в порядке убывания баллов. Если у некоторых участников одинаковые баллы, то их между собой нужно упорядочить в порядке возрастания идентификационного номера.
//
//Sample Input 1:
//
//    3
//    101 80
//    305 90
//    200 14
//
//Sample Output 1:
//
//    305 90
//    101 80
//    200 14
//
//Sample Input 2:
//
//    3
//    20 80
//    30 90
//    25 90
//
//Sample Output 2:
//
//    25 90
//    30 90
//    20 80
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <algorithm>
#include <vector>

struct participant{
    int indexNumber = 0;
    int points = 0;
};

bool participantComparator(const participant a1, const participant a2){
    if(a1.points == a2.points){
        return a1.indexNumber < a2.indexNumber;
    }
    return a1.points > a2.points;
};

using namespace std;
int main()
{
    int n, temp = 0;
    cin >> n;
    vector <participant> participants(n);

    for(int i = 0; i < n; i++){
        cin >> participants[i].indexNumber;
        cin >> participants[i].points;
    }

    sort(participants.begin(),participants.end(),participantComparator);

    for(auto now : participants){
        cout << now.indexNumber << " " << now.points << endl;
    }
    return 0;
}