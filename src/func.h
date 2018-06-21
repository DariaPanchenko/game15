#ifndef __FUNC_H__
#define __FUNC_H__

#define RESET "\033[0m"
#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define CYAN "\033[1;36m"
#define GRAY "\033[2m"
#define YELLOW "\033[0;33m"
#define MAGENTA "\033[0;35m"
int printmass(int a[], int n, int test);
void zap(int a[]);
int generater(int z_i);
void delay();
void move(int a[]);
int victory(int a[], int test);
int umove(int a[], int test);


#endif
