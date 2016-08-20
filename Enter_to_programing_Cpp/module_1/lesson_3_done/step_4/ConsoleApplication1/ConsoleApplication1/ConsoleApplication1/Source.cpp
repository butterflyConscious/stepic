#include <iostream>
#include <conio.h> //for _getch();
using namespace std;

int main() {

	int squirrels, nuts;
	cin >> squirrels >> nuts;
	cout << nuts % squirrels;

	_getch();
	return 0;
}