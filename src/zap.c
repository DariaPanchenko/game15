#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "func.h"
void zap (int a[]){
    int i;
    for (i = 0; i <= 15; i++) {
        a[i] = (i + 1) % 16;
    }

    printmass(a, 4);
}
