#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	int count = 0;

	int number;
	cin >> number;

	int maxN = number;
	count++;
	int previusMax = maxN;

	while (number != 0) {
		cin >> number;

		if (maxN < number) { 
			maxN = number;
			previusMax = maxN;
			count = 0;
		}
		
		if (number == previusMax) {
			count++; 
			
		}
	}

	cout << count;

	_getch();
	return 0;
}