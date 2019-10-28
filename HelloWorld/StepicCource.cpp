#include <iostream>
using namespace std;
int main()
{
	int V, T;
	cin >> V >> T;

	int kilometersCount = V * T;

	cout << (109 + (V * T) % 109) % 109;
	return 0;
}