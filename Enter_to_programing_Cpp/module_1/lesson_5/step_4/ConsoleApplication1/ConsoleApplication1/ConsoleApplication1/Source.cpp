#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int number;
	cin >> number;

	int lowestNaturalDivisor = 0;;

	int i = 2;
	bool isFinded = false;
	while (!isFinded) {
		if (number % i == 0) { 
			lowestNaturalDivisor = i;
			isFinded = true;
			break;
		}
		i++;
	}
	cout << lowestNaturalDivisor;

	_getch();
	return 0;
}