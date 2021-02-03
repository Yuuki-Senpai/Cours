/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 8 octobre 2020, 10:45
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mesfonction.h"
#define LARGEUR 15
#define HAUTEUR 9
/*
 * 
 */

/****** Exercice 10*********/
/*
int main(int argc, char** argv) {
    int longeur,largeur;
    printf("Rentrez la largeur : ");
    scanf("%d",&largeur);
    printf("Rentrez la longeur : ");
    scanf("%d",&longeur);
    afficherRectangle(longeur,largeur);
    return (EXIT_SUCCESS);
    
}
 */





/****** Exercice 11*****/
/*
int main(int argc, char** argv) {
    int nombre;
    char chaine[50];
    char lettre;
    printf("Quel le caractere : ");
    scanf("%c",&lettre);
    printf("Quel est la chaine de caractere : ");
    scanf("%s",chaine);
    
    nombre = compterSymbole(chaine,lettre);
    printf("le nombre doccurence de  %c dans %s est %d", lettre, chaine,  nombre);
    return (EXIT_SUCCESS);
    
}
 */



/****** Exercice 12*****/

/*
#define NBCARFIN 2
#define NBMAXCAR 50
int main(int argc, char** argv) {
    char mot[NBMAXCAR];
    char terminaison[NBCARFIN]={'e','r'};
    int finEnEr;
    
    printf("Entrez un mot : ");
    scanf("%s",mot);
    finEnEr=verifTerminaison(mot,terminaison);
    if (finEnEr == 1){
        printf("%s se termine bien en ER\n",mot);
    }
    else{
    printf("%s ne se termine pas en ER\n",mot);
    return (EXIT_SUCCESS);
 }
    
}*/



int main(int argc, char** argv) {
    unsigned char tab[LARGEUR][HAUTEUR];
    int x, y;
    unsigned char lettre;
    int chiffre;
    int nombreDeCroix;

    initGrille(tab);

    do {
        afficheGrille(tab);
        printf("ajouter une croix : lettreChiffre(exemple: b4)\n");
        printf("fin avec a-1 :");
        scanf(" %c%d", &lettre, &chiffre);
        if ((lettre >= 'a' && lettre < 'a' + LARGEUR) && (chiffre >= 1 && chiffre < HAUTEUR)) {
            tab[lettre - 'a'][chiffre - 1] = 'X';
        }
    } while (lettre != 'a' || chiffre != -1);
    nombreDeCroix = nbCroix(tab);
    printf("il y a %d croix\n", nombreDeCroix);
    return (EXIT_SUCCESS);
}