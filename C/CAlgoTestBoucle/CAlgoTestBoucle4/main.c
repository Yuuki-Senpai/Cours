/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 1 octobre 2020, 11:26
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n, deb, fin;
    printf("indiquer le nombre dont vous voulez la table de multiplication");
    scanf("%i", &n);
    printf("indiquer le nombre de début");
    scanf("%i", &deb);
    printf("indiquer le nombre de fin");
    scanf("%i", &fin);
    for (int x = deb ; x <= fin; x++){
        printf("%d * %d = ""%d" "\n",x,n,x * n);
    }
    return (EXIT_SUCCESS);
}

