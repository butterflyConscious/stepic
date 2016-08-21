#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	
	if (a == b && b == c) {
		cout << 3;
	}
	else if (b == a || b == c || a == c) {
		cout << 2;
	}
	else { cout << 0; }

	_getch();
	return 0;
}