#include <stdio.h>
#include <conio.h> // _getch();
#define DEBUG 10
#include "debug.h"

int main()
{
	int i = 0;
	while(i < 6)
	{
		PDEBUG(1, "i=%d", i);
		i++;

	}

	_getch();
}