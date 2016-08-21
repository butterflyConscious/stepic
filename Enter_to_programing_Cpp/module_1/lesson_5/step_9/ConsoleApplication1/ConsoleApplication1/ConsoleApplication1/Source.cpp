#include <iostream>
#include <conio.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {

	int maxN;
	int number;
	cin >> number;
	maxN = number;
	while (number != 0) {
		maxN = max(maxN, number);
		cin >> number;
	}

	cout << maxN;

	_getch();
	return 0;
}