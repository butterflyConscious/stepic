#include <iostream>
#include <conio.h>
#include <algorithm>

using namespace std;

int main() {
	//INPUT DATA of pool(N, M) and hero(X, Y)
	int N, M, X, Y;
	cin >> N >> M >> X >> Y;

	//regularize sides
	if (N > M) {
		M = M + N;
		N = M - N;
		M = M - N;
	}

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
