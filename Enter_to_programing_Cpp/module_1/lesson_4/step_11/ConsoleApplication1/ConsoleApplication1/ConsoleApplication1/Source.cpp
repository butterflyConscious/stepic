#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if ((abs(a - c) == abs(b - d)) || a == c || b == d) {
		cout << "YES";
	}
	else { cout << "NO"; }

	_getch();
	return 0;
}