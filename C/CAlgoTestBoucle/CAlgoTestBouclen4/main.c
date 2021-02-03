/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 6 octobre 2020, 14:27
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int find,x,tentative;
    find =59;
    tentative =0;
    
    while (find != x){
        printf("donner une valeur : ");
        scanf("%d", &x);
        if (x > find){
            printf("trop grand\n");
        }
        if (x < find){
            printf("trop petit\n");
        }
        tentative++;
    }
    printf("Vous avez trouver le bon chiffre, %d tentative",tentative);
    return (EXIT_SUCCESS);
}

