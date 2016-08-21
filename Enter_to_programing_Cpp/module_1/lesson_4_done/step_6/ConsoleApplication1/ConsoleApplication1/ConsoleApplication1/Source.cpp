#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int p = (a + b + c) / 2;
	int S = sqrt(p * (p - a) * (p - b) * (p - c));

	if (S > 0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	_getch();
	return 0;
}