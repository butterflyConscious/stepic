#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int numFibonachi = -1;

	int number;
	cin >> number;

	int num1 = 0;
	int num2 = 1;
	int tmp;

	int iteration = 1;
	while (iteration<=2000) {
		tmp = num1;
		num1 = num2;
		num2 += tmp;

		iteration++;
		if (num2 == number) {
			numFibonachi = iteration;
			break;
		}
	}

	 cout << numFibonachi; 

	_getch();
	return 0;
}