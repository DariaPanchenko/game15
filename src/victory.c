#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <unistd.h>
#include "func.h"
int victory(int a[])
{ 
    int v, i;
    v = 0;
    for (i = 0;i < 15;i++) {
        if (a[i] < a[i+1]) {
            v++;
        }
      }
    if (a[15] == 0) 
        v++;
return v;	
}
