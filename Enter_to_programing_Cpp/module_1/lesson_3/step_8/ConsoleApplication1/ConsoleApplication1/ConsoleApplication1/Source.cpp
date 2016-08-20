#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int num;
	cin >> num;

	int a, b, c;

	a = num / 100;
	//cout << "a= " << a << endl;
	b = (num - (num / 100) * 100) / 10;
	//cout << "b= " << b << endl;
	c = num - a*100 - b*10;
	//cout << "c= " << c << endl;

	int result = a + b + c;

	cout << result << endl;

	_getch();
	return result;
}