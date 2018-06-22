
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#include <math.h>
#include <time.h>
#include "func.h"

void delay() {
    float milli_seconds = 120000; 
    float start_time = clock();
    while (clock() <= start_time + milli_seconds);
}

void move(int a[])
{
    int n, i = 0, m, T = 0, L = 0;
    for (T = 0; T < 30; T++)
    {   delay();
        printf("\n");
        i = 0;
        while (a[i] != 0)
        {
            i++;
        }
        n = generater(i);

        m = a[n];
        a[n] = a[i];
        L++;
        a[i] = m;

        system("tput reset");
        printmass(a, 4, 1);
        printf("перемешиваний: %d", L);
    }
    printf("\n");
}
