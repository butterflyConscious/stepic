#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	//INPUT DATA for two boxes first(a1, b1, c1) and second (a2, b2, c2)
	//initializing with zeros for correct if statement work
	int a1 = 0, b1 = 0, c1 = 0, a2 = 0, b2 = 0, c2 = 0;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

	//IF BOXES ARE EQUAL
	if (
		(a1 == a2 && b1 == b2 && c1 == c2) ||
		(a1 == a2 && c1 == b2 && b1 == c2) ||
		(b1 == a2 && a1 == b2 && c1 == c2) ||
		(b1 == a2 && c1 == b2 && a1 == c2) ||
		(c1 == a2 && a1 == b2 && b1 == c2) ||
		(c1 == a2 && b1 == b2 && a1 == c2)
		){
		cout << "Boxes are equal";
	}

	//IF first box smaller then second
	else if (
		(a1 <= a2 && b1 <= b2 && c1 <= c2) ||
		(a1 <= a2 && c1 <= b2 && b1 <= c2) ||
		(b1 <= a2 && a1 <= b2 && c1 <= c2) ||
		(b1 <= a2 && c1 <= b2 && a1 <= c2) ||
		(c1 <= a2 && a1 <= b2 && b1 <= c2) ||
		(c1 <= a2 && b1 <= b2 && a1 <= c2)
		) {
		cout << "The first box is smaller than the second one";
	}

	//IF first box is larger than the second one
	else if (
		(a1 >= a2 && b1 >= b2 && c1 >= c2) ||
		(a1 >= a2 && c1 >= b2 && b1 >= c2) ||
		(b1 >= a2 && a1 >= b2 && c1 >= c2) ||
		(b1 >= a2 && c1 >= b2 && a1 >= c2) ||
		(c1 >= a2 && a1 >= b2 && b1 >= c2) ||
		(c1 >= a2 && b1 >= b2 && a1 >= c2)
		) {
		cout << "The first box is larger than the second one";
	}

	//IF Boxes are incomparable
	else { 
		cout << "Boxes are incomparable";
	}


	_getch();
	return 0;
}

