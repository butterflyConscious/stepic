#include <iostream>
#include <conio.h>
#include <math.h>
//#include <iomanip>
using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	
	double p = (a + b + c) / 2.0;
	double s = sqrt(p*(p - a)*(p - b)*(p - c));
	cout << s;

	_getch();
	return 0;
}