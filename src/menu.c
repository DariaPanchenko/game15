#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
#include <unistd.h>
#include "func.h"

void prim();
int main() {

    srand(time(NULL));
    char c;
    int n=16;
    int a[n];
    prim();
    printf("\n %s\t\t Game 15%s\n", RED, RESET);
    printf("%s\tP. Rules%s\n", GREEN, RESET);
    printf("%s\tS. Start%s\n", GREEN, RESET);
    printf("%s\tQ. Quit%s\n\n\t\t", GREEN, RESET);
    while(c != 'c') {
        c = getchar();
        c = toupper(c);
        switch(c){
            case 'P': {
                        system("clear");
                        printf("S. Start\n");
                        printf("Q. Quit\n");
                        printf(" Игра заключается в том,чтобы восстановить исходную упорядоченность чисел от 1 до 15 (последний 0). Вам необходимо вести обмен чисел с нулем. Для этого введите число с которым хотите произвести обмен.");
                           break;
                       }


            case 'S':  {

                system("clear");
                zap(a);
                move(a);
                printf("\n");
                printf("P.Rules\n");
                printf("Q.Quit\n");
                break;
            }


            case 'Q':
            {
                printf("%sGoodbye!%s\n", YELLOW, RESET);
                return 0;
            }

           default: 
            
            if (c!=10) {
                  system("clear");
                    printf("\tНе верное значение. Введите p(Правила) s(Старт) или q(Выход)\n");
                printf("\n");
                break;
            }


        }
    }

    return 0;
}

void prim() {
        printf("%s\n"
                "\t         ████   ███████████\n"
                "\t       ██  ██   ██         \n"
                "\t     ██    ██   ██         \n"
                "\t   ██      ██   ██         \n"
                "\t           ██   ██         \n"
                "\t           ██   ███████████\n"
                "\t           ██            ██\n"
                "\t           ██            ██\n"
                "\t           ██            ██\n"
                "\t           ██            ██\n"
                "\t           ██   ███████████\n\n%s",
                CYAN, RESET);
}
