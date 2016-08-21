#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {
	int number;
	cin >> number;

	int exponenta = 0;
	int sqr = pow(2, exponenta);
	while (sqr <= number) {
		cout << sqr << " ";
		exponenta++;
		sqr = pow(2, exponenta);
	}

	_getch();
	return 0;
}