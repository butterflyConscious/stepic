#include <iostream>
#include <conio.h>
#include <algorithm>

using namespace std;

int main() {
	int N, M, X, Y;
	cin >> N >> M >> X >> Y;

	int x1 = X;
	int x2 = N - X;
	int y1 = Y;
	int y2 = M - Y;

	int min1 = min(x1, x2);
	int min2 = min(y1, y2);
	int minM = min(min1, min2);
	cout << minM;

	_getch();
	return 0;
}
/*
int min(int a, int b, int c, int d) {
	if (a < b && a < c && a < d) {
		return a;
	}
	else if (b < a && b < c && b < d) {
		return b;
	}
	else if (c < a && c < b && c < d) {
		return c;
	}
	else if (d < a && d < b && d < c) {
		return d;
	}
}
*/