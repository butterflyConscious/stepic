//#include"stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int priceRU, priceKO, count;
	cin >> priceRU >> priceKO >> count;

	int prePriceRU = priceRU * count;
	int prePriceKO = priceKO * count;

	int addKO = 0;
	int elseKO = prePriceKO;
	//cout << "info " << prePriceRU << " " << prePriceKO << endl;
	if (prePriceKO >= 100) {
		addKO = prePriceKO / 100;
		elseKO = prePriceKO % 100;
	}

	int finalRU = prePriceRU + addKO;
	int finalKO = elseKO;

	cout << finalRU << " " << finalKO;

	_getch();
	return 0;
}