#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <unistd.h>
#include "func.h"
int printmass(int a[], int n, int test){
      int i,h=0;
      
      for (  i = 0; i < n * n; i++){
      for (int j = 0; j < n * n; j++) {
      if ((a[i] == a[j]) && (i != j)) h++;
        }
      
           }
       
  if (test!=0){
  for ( i = 0; i < n * n; i++){
   printf("%d\t",a[i]);
      if ((i + 1) % n == 0){
             printf("\n");
}
}
}
     
if ( h==0)
return 1;
  else
return 0;
}
