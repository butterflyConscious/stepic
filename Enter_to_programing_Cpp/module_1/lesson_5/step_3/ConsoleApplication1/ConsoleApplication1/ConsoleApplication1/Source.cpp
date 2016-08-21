#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	int i = 1;
	int sqrForI = pow(i, 2);
	while (sqrForI <= N) {
		cout << sqrForI << " ";
		i++;
		sqrForI = pow(i, 2);
	}


	_getch();
	return 0;
}