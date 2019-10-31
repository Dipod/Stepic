//Есть две коробки, первая размером A1×B1×C1, вторая размером A2×B2×C2.Определите, можно ли разместить одну из этих коробок внутри другой, при условии, что поворачивать коробки можно только на 90 градусов вокруг ребер.
//Формат входных данных
//Программа получает на вход числа A1, B1, C1, A2, B2, C2.
//Формат выходных данных
//Программа должна вывести одну из следующих строчек :
//Boxes are equal, если коробки одинаковые,
//The first box is smaller than the second one, если первая коробка может быть положена во вторую,
//The first box is larger than the second one, если вторая коробка может быть положена в первую,
//Boxes are incomparable, во всех остальных случаях.
//
//Sample Input 1:
//
//	1
//	2
//	3
//	3
//	2
//	1
//
//Sample Output 1:
//
//	Boxes are equal
//
//Sample Input 2 :
//
//	2
//	2
//	3
//	3
//	2
//	1
//
//Sample Output 2:
//
//	The first box is larger than the second one
//
//Напишите программу.Тестируется через stdin → stdout

#include <iostream>;
using namespace std;

void sortVariables(int* a, int* b, int* c) {
	int buffer;

	if (*a > * b) {
		buffer = *b;
		*b = *a;
		*a = buffer;
	}

	if (*b > * c) {
		buffer = *c;
		*c = *b;
		*b = buffer;
	}

	if (*a > * b) {
		buffer = *b;
		*b = *a;
		*a = buffer;
	}
}

int main()
{
	int x1, y1, z1, x2, y2, z2, buffer;
	cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;

	sortVariables(&x1, &y1, &z1);
	sortVariables(&x2, &y2, &z2);

	if (x1 == x2 && y1 == y2 && z1 == z2) {
		cout << "Boxes are equal";
		return 0;
	}

	if (x1 <= x2 && y1 <= y2 && z1 <= z2) {
		cout << "The first box is smaller than the second one";
		return 0;
	}
	
	if (x1 >= x2 && y1 >= y2 && z1 >= z2) {
		cout << "The first box is larger than the second one";
		return 0;
	}

	cout << "Boxes are incomparable";
	return 0;
}