
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#include <math.h>
#include <time.h>
#include "func.h"

void delay() {
    float milli_seconds = 1200; 
    float start_time = clock();
    while (clock() <= start_time + milli_seconds);
}

int move(int a[], int test)
{   
    int n, i = 0, m, T = 0, L = 0, res=0;
     
    for (T = 0; T < 30; T++)
    {   delay();
        printf("\n");
        i = 0;
        while (a[i] != 0)
        {
            i++;
        }
       if(test==generater(i))
        { i = rand() % 16;
        }
        n = generater(i);
        m = a[n];
        a[n] = a[i];
        L++;
        a[i]= m;
        res++;

        system("tput reset");
        if(test!=0)
        printmass(a, 4, 1);
        printf("перемешиваний: %d", L);  
}
    printf("\n");
if(res==30)
return 1;
else
return 0;
}
