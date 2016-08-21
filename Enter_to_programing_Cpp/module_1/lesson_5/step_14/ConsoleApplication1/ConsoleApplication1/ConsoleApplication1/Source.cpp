#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int number;
	cin >> number;
	int previusNum;

	int counter = 1;
	int maxCounter = 1;
	while (number != 0)
	{
		previusNum = number;
		cin >> number;

		if (previusNum == number) {
			counter++;
		}
		else if (previusNum != number) {
			counter = 1;
		}

		if (counter > maxCounter) {
			maxCounter = counter;
		}
	}

	cout << maxCounter;

	_getch();
	return 0;
}