#include <stdio.h>
#include <conio.h> // _getch();
#include <windows.h> //system("pause");

int main()
{
	int x = 1;
	if(x>0)
	{
		int x = 2;
		printf("%d ", ++x);
	}

	printf("%d", x); 

	_getch();
return 0;
}