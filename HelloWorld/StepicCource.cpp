//Яша плавал в бассейне размером N×M метров и устал.В этот момент он обнаружил, что находится на расстоянии X метров от одного из длинных бортиков(не обязательно от ближайшего) и Y метров от одного из коротких бортиков.Какое минимальное расстояние должен проплыть Яша, чтобы выбраться из бассейна на бортик ?
//Формат входных данных
//Программа получает на вход числа N, M, X, Y.
//Формат выходных данных
//
//Программа должна вывести число метров, которое нужно проплыть Яше до бортика.
//
//Sample Input :
//
//	23
//	52
//	8
//	43
//
//Sample Output :
//
//	8
//
//Напишите программу.Тестируется через stdin → stdout

#include <iostream>
using namespace std;
int main()
{
	int N, M, X, Y, longside, shortside, shortestX, shortestY;
	cin >> N >> M >> X >> Y;

	if (N > M) {
		longside = N;
		shortside = M;
	}
	else {
		longside = M;
		shortside = N;
	}

	if (X < shortside - X){
		shortestX = X;
	}
	else{
		shortestX = shortside - X;
	}

	if (Y < longside - Y) {
		shortestY = Y;
	}
	else {
		shortestY = longside - Y;
	}

	if (shortestX < shortestY) {
		cout << shortestX;
	}
	else {
		cout << shortestY;
	}

	return 0;
}