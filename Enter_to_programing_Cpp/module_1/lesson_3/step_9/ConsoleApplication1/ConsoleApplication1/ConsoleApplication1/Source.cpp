#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	int nat_num;
	cin >> nat_num;

	int result = ++nat_num;

	if ((result % 2) > 0) result++;

	cout << result;

	_getch();
	return 0;
}