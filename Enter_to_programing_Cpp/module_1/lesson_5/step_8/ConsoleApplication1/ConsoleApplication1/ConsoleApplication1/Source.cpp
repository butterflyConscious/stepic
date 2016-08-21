#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {

	int sum = 0;
	int number;
	cin >> number;
	while (number != 0) {
		sum += number;
		cin >> number;
	}

	cout << sum;

	_getch();
	return 0;
}