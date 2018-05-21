#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "func.h"
void printmass(int a[], int n){
    for (int i = 0; i < n * n; i++){
        printf("%d\t",a[i]);
        if ((i + 1) % n == 0){
            printf("\n");
        }
    }
}
