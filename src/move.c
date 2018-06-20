
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "func.h"

void move(int a[])
{   
    int n, i = 0, m, T=0,L=0;
    for (T = 0; T < 30; T++){
        printf("\n");
        i = 0;
        while (a[i] != 0){
            i++;
        }
        n = generater(i);
       
        m = a[n];
        a[n] = a[i];
        L++;
        a[i] = m;

       system("clear");
        printmass(a, 4, 1);
       printf("перемешиваний: %d",L);
       
    }
    printf("\n");
     
}
