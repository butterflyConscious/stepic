#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int students1, students2, students3;
	cin >> students1;
	cin >> students2;
	cin >> students3;

	int part1, part2, part3;

	if(students1 % 2 == 0) { part1 = students1 / 2; }
	else { part1 = students1 / 2 + 1; }
	
	if (students2 % 2 == 0) { part2 = students2 / 2; }
	else { part2 = students2 / 2 + 1; }
	
	if (students3 % 2 == 0) { part3 = students3 / 2; }
	else { part3 = students3 / 2 + 1; }

	int result = part1 + part2 + part3;

	cout << result;

	_getch();
	return 0;
}