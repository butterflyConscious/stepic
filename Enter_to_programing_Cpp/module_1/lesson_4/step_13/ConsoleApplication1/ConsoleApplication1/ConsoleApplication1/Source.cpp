//TODO: resolve the task
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int N, M, K;
	cin >> N >> M >> K;

	int max, min;
	if (N > M) { 
		max = N;
		min = M;
	}
	else if (M > N) { 
		max = M;
		min = N;
	}

	
	bool firstTrue = M == K || N == K;
	bool secondTrue = false;

	for (int i = 1; i < max; i++)
	{
		if (M * N / i == K) { secondTrue = true; }
	}
	if(firstTrue || secondTrue ) { cout << "YES"; }
	else {

		 cout << "NO"; 

	}
	// NOT DONE YET
	_getch();
	return 0;
}