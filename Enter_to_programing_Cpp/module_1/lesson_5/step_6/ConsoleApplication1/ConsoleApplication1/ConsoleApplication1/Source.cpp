#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {
	int number;
	cin >> number;

	bool isNumberPowofTwo = false;

	int exponenta = 0;
	int sqr = pow(2, exponenta);
	while (sqr <= 4096) {
		//cout << sqr << " ";
		if (number == sqr) { isNumberPowofTwo = true; }
		exponenta++;
		sqr = pow(2, exponenta);
	}

	if (isNumberPowofTwo) {
		cout << "YES";
	}
	else { cout << "NO"; }

	_getch();
	return 0;
}