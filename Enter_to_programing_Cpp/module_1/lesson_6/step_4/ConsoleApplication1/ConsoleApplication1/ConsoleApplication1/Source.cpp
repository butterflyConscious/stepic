#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {
	double input;
	cin >> input;
	double flooredInput = floor(input);
	double output = (input - flooredInput) * 10;
	int flooredOutput = floor(output);
	cout << flooredOutput;

	_getch();
	return 0;
}