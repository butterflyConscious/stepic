#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {
	
	int count = 0;
	int number;
	cin >> number;
	while (number > 0) {
		count++;
		cin >> number;
	}

	cout << count;

	_getch();
	return 0;
}