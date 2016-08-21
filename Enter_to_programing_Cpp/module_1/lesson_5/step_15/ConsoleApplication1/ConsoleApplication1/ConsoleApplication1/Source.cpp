#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	int localMaximum = 0;

	int num1, num2, num3;
	int number;

	cin >> number;
	num1 = number;
	cin >> number;
	num2 = number;
	cin >> number;
	num3 = number;

	while (number != 0) {
		if (num1 < num2 && num2> num3) {
			localMaximum++;
		}
		cin >> number;
		num1 = num2;
		num2 = num3;
		num3 = number;
	}
	cout << localMaximum;

	_getch();
	return 0;
}