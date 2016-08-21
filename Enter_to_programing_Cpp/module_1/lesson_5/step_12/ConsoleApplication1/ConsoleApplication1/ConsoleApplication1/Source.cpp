#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	int number;
	cin >> number;
	
	int num1 = 0;
	int num2 = 1;
	int tmp;

	int iteration = 1;
	while (iteration < number) {
		tmp = num1;
		num1 = num2;
		num2 += tmp;

		iteration++;
	}

	cout << num2;

	_getch();
	return 0;
}