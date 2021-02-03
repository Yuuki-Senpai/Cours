/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 20 janvier 2021, 08:27
 */

#include "fonction.h"

/*
 * 
 */
int main(int argc, char** argv) {

    FILE *fdSrc;
    FILE *fdDest;
    
    if (argc != 4) {
        printf("usage : %s c/d fichierSrc fichierDest\n", argv[0]);
        exit(argc);
    }


    fdSrc = fopen(argv[2], "r");
    if (fdSrc == NULL) {
        printf("Preblème d'ouverture du fichier source %s\n", strerror(errno));
        exit(errno);
    }
    fdDest = fopen(argv[3], "w");
    if (fdDest == NULL) {
        printf("Preblème d'ouverture du fichier destination %s\n", strerror(errno));
        exit(errno);
    }



    

    
    

    if (argv[1] == "d") {
        decompressBMP(fdSrc, fdDest);
    }


    if (fclose(fdSrc) == EOF) {
        printf("Erreur à la fermeture du fichier source");
    }
    if (fclose(fdDest) == EOF) {
        printf("Erreur à la fermeture du fichier destination");
    }
    return (EXIT_SUCCESS);
}