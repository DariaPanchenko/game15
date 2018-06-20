#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "func.h"
int umove(int a[])
{
  int m, i, j, u, n, v;

  while (1)
  {
    printf("\nВведите значение:\n");
    if (scanf("%d", &n) != 1)
    {
      while (fgetc(stdin) != '\n')
        ;
      continue;
    }

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
    }
    system("clear");
    printmass(a, 4, 1);
    if (n == 0)
      return 0;

    v = victory(a);
    if (v == 14)
    {
      printf("Поздравляем,вы прошли игру!");
      break;
    }
  }
  return 0;
}
