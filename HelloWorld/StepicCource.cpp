#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int seconds;
	cin >> seconds;
	seconds = seconds % 86400;
	int hours = seconds / 3600;
	seconds = seconds % 3600;
	int minutes = seconds / 60;
	seconds = seconds % 60;
	cout << hours << ":";
	cout.fill('0');
	cout << setw(2) << minutes << ":" << setw(2) << seconds;
	return 0;
}