/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 6 octobre 2020, 14:36
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int note,nbrnote,somme;
    float moyenne;
    note = 0;
    nbrnote = 0;
    somme = 0;
    moyenne = 0;
    while(note > -1){
        printf("entrer une note");
        scanf("%d",&note);
        nbrnote= nbrnote +1;
        somme = somme +note;
    }
    //enlever la note négative de la somme et du nbr note.
    somme = somme - note;
    nbrnote = nbrnote -1;
    //  
    moyenne = somme /nbrnote;
    printf("la moyenne est égale à %f,la nombre de valeur positif est %d , la somme des nombre est de %d", moyenne,nbrnote,somme);
    return (EXIT_SUCCESS);
}

