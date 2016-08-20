//#include "std"
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int secondsIn = 0;
	cin >> secondsIn;
	int hours = secondsIn / 3600;
	int left = secondsIn % 3600;
	int minutes = left / 60;
	int seconds = left % 60;

	//cout << hours << ":" << minutes << ":" << seconds;
	printf("%d:%02d:%02d", hours%24, minutes, seconds);

	_getch();
	return 0;
}