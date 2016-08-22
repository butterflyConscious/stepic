#include <iostream>
#include <conio.h>
#include <math.h>
//#include <iomanip>
using namespace std;

int main() {
	double P, X, Y;
	cin >> P >> X >> Y;

	double copeyki = Y / 100;
	double contribution = X + copeyki;

	double percentOfContribution = (contribution / 100.0) * P;

	double newContribution = contribution + percentOfContribution;

	double newContributionX = trunc(newContribution);

	double newContributionY =  (newContribution - newContributionX) * 100 ;

	double newContributionYround = round(newContributionY);

	cout << newContributionX << " " << newContributionYround;

	_getch();
	return 0;
}