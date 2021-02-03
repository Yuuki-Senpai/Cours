/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 14 octobre 2020, 08:58
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int minima,maxima,lacune,nval;
    float jmoy,moy,plac;
    moy =0;
    jmoy = 0;
    nval =0;
    lacune = 0;
    
    do{
        printf("entrer le minima :");
        scanf("%d",&minima);
        printf("entrer le maxima :");
        scanf("%d",&maxima);
        if (minima != 0 && maxima !=0){
            nval = nval +2;
            jmoy = jmoy + minima + maxima;
            }
        
        if (minima == 0 && maxima !=0){
            lacune = lacune+1;
            jmoy = jmoy + maxima;
            nval++;
        } 
        
        if(maxima == 0 && minima !=0){
            lacune = lacune+1;
            jmoy = jmoy + minima;
            nval++;
        }   
    }while (minima != 0 || maxima != 0);
    moy = jmoy /nval;
    nval = nval + lacune;
    printf("lacune : %d, nval : %d", lacune,nval);
    plac = lacune * 100 /nval;
    printf("la moyenne des temp est %f et le nombre de lacune de : %d, le pourcentage de lacune est de %f pourcent", moy, lacune, plac);
    return (EXIT_SUCCESS);
}

