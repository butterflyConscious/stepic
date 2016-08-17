#include <stdio.h>
#include <conio.h> // _getch();
#include <windows.h> //system("pause");

void print_x();

int main()
{
	int i;
	for(i = 0; i<4; i++)
	print_x();

	_getch(); 
	return 0;
}

void print_x()
{
	static int x = 1;
	printf("%d ", x++);
}