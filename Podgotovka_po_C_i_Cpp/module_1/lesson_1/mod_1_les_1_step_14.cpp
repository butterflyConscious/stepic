#include <stdio.h>
#include <iostream>
#include <conio.h> // _getch();

int main(int argc, char *argv[])
{
	for(int i=0; i<argc; i++){
		prinf("%s ", argv[i]);
	}
	return 0;
}