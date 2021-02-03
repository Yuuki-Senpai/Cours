/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 7 octobre 2020, 09:29
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int coucou;
    printf("Combien de fois le coucou fait coucou ? ");
    scanf("%d",&coucou);
    for(coucou;coucou>0;coucou = coucou-1){
        printf("coucou ! \n");
    }
            
    return (EXIT_SUCCESS);
}

