#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int x = abs(a - c);
	int y = abs(b - d);

	if ( (x == 2 && y == 1 ) || (x == 1 && y == 2) ) {
		cout << "YES";
	}
	else { cout << "NO"; }

	_getch();
	return 0;
}