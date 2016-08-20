//TODO: resolve the task
#include <iostream>
#include <conio.h>
#include <algorithm>
using namespace std;

int main() {
	//input data: 
	//N -lenght of chocolate, 
	//M - high of chocolate
	//K - piese in one piece after cut
	int N, M, K;
	cin >> N >> M >> K;

	int maxSide = max(N, M);
	int minSide = min(N, M);
	
	bool ifOneSideEqualsK = M == K || N == K;
	bool canBeCuttedForKpieces = false;

	for (int i = 1; i < maxSide; i++)
	{
		if (M * N / i == K) { canBeCuttedForKpieces = true; }
	}
	if(ifOneSideEqualsK || canBeCuttedForKpieces) { cout << "YES"; }
	else {

		 cout << "NO"; 

	}
	// NOT DONE YET
	_getch();
	return 0;
}