#include <iostream>
using namespace std;
int main()
{
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int x_shift = (x2 - x1) * (x2 - x1);
	int y_shift = (y2 - y1) * (y2 - y1);
	if (x_shift == 1 && y_shift == 4 || x_shift == 4 && y_shift == 1){
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}