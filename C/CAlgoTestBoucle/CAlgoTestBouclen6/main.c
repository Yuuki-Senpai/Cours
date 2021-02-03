/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 7 octobre 2020, 08:12
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    printf("rentrez la dimmension du coté du triangle :");
    int cote,cote2;
    scanf("%d",&cote);
    for (cote; cote > 0;cote = cote -1){
        cote2 =cote;
        for(cote2; cote2 > 0;cote2 = cote2 -1){
            printf("#");
        }
        printf("\n");
    }       
    return (EXIT_SUCCESS);
}

