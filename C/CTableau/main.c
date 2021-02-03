/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 5 novembre 2020, 10:32
 */

#include <stdio.h>
#include <stdlib.h>


/********Exeercice 1 et 2********//*
#define JOURMOIS 4
int main(int argc, char** argv) {
    int temperatureMin[JOURMOIS], temperatureMax[JOURMOIS], mini, max, jourmin, jourmax;
    for (int i = 0; i < JOURMOIS; i++) {
        printf("Donnez la température mini pour le jour %d : ", i + 1);
        scanf("%d", &temperatureMin[i]);
        printf("Donnez la température max pour le jour %d :", i + 1);
        scanf("%d", &temperatureMax[i]);
    }
    mini = temperatureMin[0];
    max = temperatureMax[0];
    jourmin = 1;
    jourmax = 1;
    for (int i = 0; i < JOURMOIS; i++) {
        printf("Jour %d: (%d,%d)\n", i, temperatureMin[i], temperatureMax[i]);
        if (mini > temperatureMin[i]) {
            mini = temperatureMin[i];
            jourmin = i + 1;
        }
        if (max < temperatureMax[i]) {
            max = temperatureMax[i];
            jourmax = i + 1;
        }
    }
    printf("mini : %d le %d, maxi : %d le %d ", mini, jourmin, max, jourmax);
    return (EXIT_SUCCESS);
}
*/

/**********Exercice 3**************/
#define TAILLEMAX 25
int main(int argc, char** argv) {
    int tabVal[TAILLEMAX][TAILLEMAX];
    for (int i= 0;i <TAILLEMAX-1;i++){
        tabVal[i][0]=0;
    }
    return (EXIT_SUCCESS);
}