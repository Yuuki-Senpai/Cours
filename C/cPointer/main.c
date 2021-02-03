/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 19 novembre 2020, 09:10
 */

#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"
/*
 * 
 */

/****************//*
int main(int argc, char** argv) {
    int *ptrInt;
    char *ptrCarac;
    float *ptrFloat;
    printf("Taille d'un int %ld\nTaille du ponter sur int %ld\n ",sizeof(int),sizeof(int*));
    printf("Taille d'un float %ld\nTaille du ponter sur float %ld\n ",sizeof(float),sizeof(float*));
    printf("Taille d'un char %ld\nTaille du ponter sur char %ld\n ",sizeof(char),sizeof(char*));
    return (EXIT_SUCCESS);
}

*/
/*
int main(int argc, char** argv) {
    unsigned char *ptrOctet;
    int unEntier = 0x12345678,i;
    
    ptrOctet = (char *) &unEntier;
    for (i=0;i <sizeof (unEntier);i++){
        printf("%p : %hhx\n",ptrOctet,*ptrOctet);
        ptrOctet++;
    }
    
     return (EXIT_SUCCESS);
}
*/
