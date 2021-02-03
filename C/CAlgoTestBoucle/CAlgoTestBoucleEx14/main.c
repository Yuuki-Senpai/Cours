/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 14 octobre 2020, 10:30
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float taillePopulation1,taillePopulation2,tauxPopulation1,tauxPopulation2;
    taillePopulation1 = 100000;
    taillePopulation2 = 15000;
    tauxPopulation1 = 110;
    tauxPopulation2= 140;    
    int annee;
    annee = 0;
    while (taillePopulation1 > taillePopulation2){
        taillePopulation1 = taillePopulation1 * tauxPopulation1 /100;
        taillePopulation2 = taillePopulation2 * tauxPopulation2 /100;
        annee++;
    }
    printf("annee nécessaire : %d", annee);
    return (EXIT_SUCCESS);
}

