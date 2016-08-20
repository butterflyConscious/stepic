#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int H, A, B;
	cin >> H >> A >> B;
	int count = 0;
	int meters = 0;
	while (meters < H) { 
		count++;
		meters = meters + A;
		if (meters >= H) break;
		meters = meters - B;
	}
	cout << count;
	_getch();
	return 0;
}