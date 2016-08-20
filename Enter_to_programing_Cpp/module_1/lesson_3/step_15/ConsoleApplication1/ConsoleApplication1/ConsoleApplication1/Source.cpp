#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int number;
	cin >> number;
	int n1 = number / 1000;
	int n2 = (number - n1 * 1000) / 100;
	int n3 = (number - n1 * 1000 - n2 * 100) / 10;
	int n4 = number - n1 * 1000 - n2 * 100 - n3 * 10;

	//cout << n1 << n2 << n3 << n4;

	int res = (n1 == n4) && (n2 == n3);
	cout << res;

	_getch();
	return 0;
}