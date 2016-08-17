#include <stdio.h>
#include <conio.h> // _getch();
#include <windows.h> //system("pause");

void f(int m[5])
{
  for (int i = 0; i<3; i++)
  {
    m[i] *= 2;
    m++;
  }
}

int main( ){
  int a[5] = {1,1,1,1,1};
  f(a);
  for (int i = 0; i<5; i++)
    printf("%d ", a[i]);

  _getch();

  return 0;

}