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
		// Пытаемся найти очередное вхождение локального максимума,
		// или новое значение локального максимума,
		// или нуль, знак окончания последовательности.
		do
		{
			cin >> targetNumber;
			++curIndex;

		} while (targetNumber < maxNumber && targetNumber != 0);

		// Если очередное значение является новым локальным максимумом...
		if (targetNumber > maxNumber)
		{
			maxNumber = targetNumber;
			startIndex = curIndex;
			range = 0;
		}
		// Если очередное значение является старым локальным максимумом...
		else if (targetNumber == maxNumber)
		{
			int curRange = curIndex - startIndex;

			// То обновляем расстояние, если оно меньше старого,
			// при условии, что старое было инициализировано чем-то, отличным от нуля.
			if (range == 0 || range > curRange)
				range = curRange;

			startIndex = curIndex;
		}

		// Цикл завершится при targetNumber == 0
	}
	cout << range;

	_getch();
	return 0;
}