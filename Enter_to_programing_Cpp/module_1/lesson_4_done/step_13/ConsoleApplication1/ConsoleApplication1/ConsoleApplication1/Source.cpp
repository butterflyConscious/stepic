//TODO: resolve the task
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	//input data: 
	//N -lenght of chocolate, 
	//M - high of chocolate
	//K - piese in one piece after cut
	int N, M, K;
	cin >> N >> M >> K;
	
	bool ifOneSideEqualsK = M == K || N == K;
	bool canBeCuttedForKpieces = false;

	for (int i = 1; i < N; i++)
	{
		if (M * i == K) { canBeCuttedForKpieces = true; }
	}

	for (int i = 1; i < M; i++)
	{
		if (N * i == K) { canBeCuttedForKpieces = true; }
	}

	if(ifOneSideEqualsK || canBeCuttedForKpieces) { cout << "YES"; }
	else {
		 cout << "NO"; 
	}
	// NOT DONE YET
	_getch();
	return 0;
}