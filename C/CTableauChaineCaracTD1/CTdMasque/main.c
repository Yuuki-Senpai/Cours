/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 18 janvier 2021, 16:46
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void afficheBinaire(unsigned int n){
    unsigned int masque = 0;
    
    int compteur =0;
    masque = ~masque;
    masque = masque >> 1;
    masque = ~masque;
    while(masque >0){
        if (compteur ==4){
            printf(" ");
            compteur =0;
        }
        if(n & masque){
            printf("1");
        }
        else{
            printf("0");
        }
        compteur++;
        masque = masque >>1;
        
    }
}

int main(int argc, char** argv) {
    int n;
    unsigned charIP[4]={192,168,1,1};
    printf("entrez le nombre a transformer en bin : ");
    scanf("%d",&n);
            
    afficheBinaire(n);
    printf("\n\n\n");
    
    
    
    
    return (EXIT_SUCCESS);
}

