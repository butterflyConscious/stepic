#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int startIndex = 0, curIndex = 0, range = 0;
	int targetNumber, maxNumber;

	cin >> targetNumber;
	maxNumber = targetNumber;

	while (targetNumber != 0)
	{
		// �������� ����� ��������� ��������� ���������� ���������,
		// ��� ����� �������� ���������� ���������,
		// ��� ����, ���� ��������� ������������������.
		do
		{
			cin >> targetNumber;
			++curIndex;

		} while (targetNumber < maxNumber && targetNumber != 0);

		// ���� ��������� �������� �������� ����� ��������� ����������...
		if (targetNumber > maxNumber)
		{
			maxNumber = targetNumber;
			startIndex = curIndex;
			range = 0;
		}
		// ���� ��������� �������� �������� ������ ��������� ����������...
		else if (targetNumber == maxNumber)
		{
			int curRange = curIndex - startIndex;

			// �� ��������� ����������, ���� ��� ������ �������,
			// ��� �������, ��� ������ ���� ���������������� ���-��, �������� �� ����.
			if (range == 0 || range > curRange)
				range = curRange;

			startIndex = curIndex;
		}

		// ���� ���������� ��� targetNumber == 0
	}
	cout << range;

	_getch();
	return 0;
}