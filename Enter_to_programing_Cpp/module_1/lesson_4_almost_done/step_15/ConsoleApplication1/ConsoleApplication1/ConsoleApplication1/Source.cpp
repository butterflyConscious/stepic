#include <iostream>
#include <conio.h>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (a <= min(b, c)) { cout << a << " " << min(b, c) << " " << max(b, c); }
	else if (b <= min(a, c)) { cout << b << " " << min(a, c) << " " << max(a, c); }
	else if (c <= min(a, b)) { cout << c << " " << min(b, a) << " " << max(b, a); }

	_getch();
	return 0;
}