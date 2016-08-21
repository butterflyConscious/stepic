#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	if (a > b) {
		cout << a;
	}
	else if (b > a) {
		cout << b;
	}
	else { cout << a; }


	_getch();
	return 0;
}