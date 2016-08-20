
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int chislo;
	cin >> chislo;
	int c = chislo % 100;
	cout << c / 10;

	_getch();
	return 0;
}
