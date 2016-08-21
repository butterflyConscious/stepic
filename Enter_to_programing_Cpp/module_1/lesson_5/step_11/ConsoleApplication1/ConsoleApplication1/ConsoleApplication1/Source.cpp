#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	int number;
	cin >> number;
	int max1 = number;
	int max2 = 0;

	while (number != 0) {
		cin >> number;
		if (number > max1) {
			max2 = max1;
			max1 = number;
		}
		else if (number == max1) {
			max2 = number;
		}
		else if (number < max1 && number > max2) {
			max2 = number;
		}
	}

	cout << max2;

	_getch();
	return 0;
}