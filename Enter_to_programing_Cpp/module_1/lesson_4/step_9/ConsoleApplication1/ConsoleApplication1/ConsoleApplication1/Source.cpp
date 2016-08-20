#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if (
		(a == c || (a-1) == c || (a+1) == c )
		&&(b == d || (b-1) == d || (b+1) == d)
		) {
		cout << "YES";
	}
	else { cout << "NO"; }

	_getch();
	return 0;
}