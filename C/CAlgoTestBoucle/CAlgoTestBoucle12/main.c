/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 7 octobre 2020, 10:58
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int code, try;
    code = 123;
    printf("Entrer le code : ");
    scanf("%d",&try);
    if(code != try){
        printf("code incorrecte \n");
        printf("Entrer le code : ");
        scanf("%d",&try);
        if(code != try){
            printf("code incorrecte \n");
            printf("Entrer le code : ");
            scanf("%d",&try);
        }
    }
    if (code !=try){
        printf("trop d'erreur\n");
    }
    else{
        printf("okay\n");
    }
            
    return (EXIT_SUCCESS);
}

