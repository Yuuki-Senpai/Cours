/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 6 octobre 2020, 14:20
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n, deb, fin,x;
    printf("indiquer le nombre dont vous voulez la table de multiplication");
    scanf("%i", &n);
    printf("indiquer le nombre de début");
    scanf("%i", &deb);
    printf("indiquer le nombre de fin");
    scanf("%i", &fin);
    x=deb;
    do{
        printf("%d * %d = ""%d" "\n",x,n,x * n);
        x++;
    }while(x<= fin);
    return (EXIT_SUCCESS);
}

