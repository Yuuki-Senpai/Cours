/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 9 décembre 2020, 11:09
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"

/********Exercice 6*******//*
int main(int argc, char** argv) {
    char buffer[50];
    char *ptrSansE;

    printf("donnez un phrase : ");
    fgets(buffer, sizeof (buffer), stdin);
    ptrSansE = deleteE(buffer);
    printf("%s\n", ptrSansE);



    return (EXIT_SUCCESS);
}*/

/********Exercice 7*******//*
int main(int argc, char** argv) {
    char *nom;
    nom = saisirChaine("Quel est votre nom ?");
    printf("Votre nom est %s.\n", nom);
    return (EXIT_SUCCESS);
}*/

/********Exercice 8*******//*
int main(int argc, char** argv) {
    float val1, val2;
    printf("Eutre deux nombre flottant.\n");
    printf("1 : ");
    scanf("%f", &val1);
    printf("2 : ");
    scanf("%f", &val2);

    printf("Avant l'échange:\n");
    printf("Val1 = %f \tVal2 = %f\n", val1, val2);
    echange(&val1, &val2);

    printf("Après l'échange:\n");
    printf("Val1 = %f \tVal2 = %f\n", val1, val2);


    return (EXIT_SUCCESS);
}*/

/********Exercice 9*******/


int main(int argc, char** argv) {
    float a, b, c;
    float r1, r2;
    int i;

    printf("Entrez les terme de l'équation\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    i = Eq2Degre(a, b, c, &r1, &r2);

    if (i == 2) {
        printf("racine 1 : %f\t racine 2 : %f", r1, r2);
    } else {
        if (i == 1)
            printf("une racine : %f", r1);
        else
            printf("Pas de  racine ");
    }

    return (EXIT_SUCCESS);
}