#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int time1h, time1m, time1s, time2h, time2m, time2s;
	cin >> time1h >> time1m >> time1s >> time2h >> time2m >> time2s;

	int time1 = time1h * 3600 + time1m * 60 + time1s;
	int time2 = time2h * 3600 + time2m * 60 + time2s;

	int difference = time2 - time1;

	cout << difference;

	_getch();
	return 0;
}