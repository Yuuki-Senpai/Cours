/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 7 octobre 2020, 09:54
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float ttf,tailleFeuille;
    int plie;
    plie = 0;
    ttf = 320755;
    tailleFeuille = 0.076474;
    while (ttf > tailleFeuille){
        tailleFeuille = tailleFeuille * 2;
        plie = plie +1;

    }
    printf("il faut %d plie pour atteindre la taille de la tour eiffel", plie);
            
    return (EXIT_SUCCESS);
}

