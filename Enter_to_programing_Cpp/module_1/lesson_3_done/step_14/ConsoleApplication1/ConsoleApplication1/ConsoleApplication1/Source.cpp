#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int V, T;
	cin >> V >> T;

	int allDistance = V * T;
	int mkad = allDistance % 109;
	if (mkad < 0) { mkad = 109 + mkad; }
	cout << mkad;

	_getch();
	return 0;
}