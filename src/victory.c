#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "func.h"
int victory(int a[], int test)
{
  int v = 0, i;
  for (i = 0; i < 15; i++)
  {
    if ((a[i] < a[i + 1]) && (a[15] == 0))
    {
      v++;
    }
  }
  if (v == 14)
  {
    if (test != 0)
    {
      printf("Поздравляю,вы прошли игру!");
    }
    return 1;
  }
  else
    return 0;
}
