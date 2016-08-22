#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main() {
	double input;
	cin >> input;
	double flooredInput = floor(input);
	double result = input - flooredInput;
	cout << result;

	_getch();
	return 0;
}