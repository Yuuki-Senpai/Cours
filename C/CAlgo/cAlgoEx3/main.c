/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 30 septembre 2020, 10:48
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float masse;
    float taille;
    float imc;
    printf("Quel est votre masse?");
    scanf("%f", &masse);
    printf("Quel est votre taille?");
    scanf("%f", &taille);
    imc = masse / (taille*taille);
    if (imc > 18.5 && imc < 25){
        printf("vous etes dans la norme");
    }
    else{
        printf("Vous n'etes pas dans la norme");
    }
            
    return (EXIT_SUCCESS);
}

