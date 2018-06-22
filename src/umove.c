#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "func.h"
int umove(int a[], int test)
{
  int m, i, j, u, n, v, f = 0;

  while (1)
  {

    if (test == 0)
    {
      printf("\nВведите значение:\n");
      if (scanf("%d", &n) != 1)
      {
        while (fgetc(stdin) != '\n')
          ;
        continue;
      }
    }
    if (test == 13)
      n = 13;
    if (test == 9)
      n = 9;
    if (test == 77)
      n = 77;
    if (test == -1)
      n = -1;

    for (i = 0; i < 16; i++)
    {
      if (a[i] == 0)
        u = i;
      if (a[i] == n)
        j = i;
    }

    if ((j >= 0) && (j <= 15) && ((abs(j / 4 - u / 4) == 0 && abs(j % 4 - u % 4) <= 1) || (abs(j / 4 - u / 4) <= 1 && abs(j % 4 - u % 4) == 0)))
    {
      m = a[u];
      a[u] = a[j];
      a[j] = m;
      system("tput reset");
      if (test == 0)
        printmass(a, 4, 1);
      f = 1;
    }

    if (n == 0)
      break;

    else
    {
      if (test == 0)
        f = 0;
    }

    v = victory(a, 1);
    if (v == 1)
      break;
    if (test != 0)
      break;
  }

  if (f == 1)
    return 1;
  else
    return 0;
}
