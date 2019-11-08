//Выведите фамилии и имена учащихся в порядке убывания их среднего балла.
//
//Входные данные
//
//Заданы сначала количество учащихся n, затем n строк, каждая из которых содержит фамилию, имя и три числа (оценки по трем предметам: математике, физике, информатике). Данные в строке разделены одним пробелом. Оценки принимают значение от 1 до 5.
//
//Выходные данные
//
//Необходимо вывести пары фамилия-имя по одной на строке, разделяя фамилию и имя одним пробелом. Выводить оценки не нужно. Если несколько учащихся имеют одинаковые средние баллы, то их нужно выводить в порядке, заданном во входных данных.
//
//Sample Input:
//
//    3
//    Markov Valeriy 5 5 5
//    Sergey Petrov 1 1 1
//    Petrov Petr 3 3 3
//
//Sample Output:
//
//    Markov Valeriy
//    Petrov Petr
//    Sergey Petrov
//
//Напишите программу. Тестируется через stdin → stdout

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

struct student{
    string lastName = "";
    string firstName = "";
    int mathPoints = 0;
    int physicsPoints = 0;
    int compSciencePoints = 0;
};

bool studentComparator(const student a1, const student a2){
    return a1.mathPoints + a1.physicsPoints + a1.compSciencePoints > a2.mathPoints + a2.physicsPoints + a2.compSciencePoints;
}

int main()
{
    int n;
    cin >> n;
    vector <student> students(n);

    for(int i = 0; i < n; i++){
        cin >> students[i].lastName;
        cin >> students[i].firstName;
        cin >> students[i].mathPoints;
        cin >> students[i].physicsPoints;
        cin >> students[i].compSciencePoints;
    }

    stable_sort(students.begin(),students.end(),studentComparator);

    for(auto now : students){
        cout << now.lastName << " " << now.firstName << endl;
    }
    return 0;
}