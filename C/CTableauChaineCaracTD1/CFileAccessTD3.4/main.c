/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 19 janvier 2021, 13:01
 */



#include "fonctions.h"

/*
 * 
 */
int main(int argc, char** argv) {
    FILE *fdSrc;
    FILE *fdDest;
    typeCouleur palette[NBCOULEURS];
    typeEnTeteFichierBmp enTeteFichier;
    typeEnTeteImageBmp enTeteImage;
    size_t ret;
    int i, nbDoneeImg;
    char octet;

    if (argc != 3) {
        printf("usage %s cheminEtNomdufichierd'oririne cheminEtNomdufichierdedestination", argv[0]);
        exit(argc);
    }


    fdSrc = fopen(argv[1], "r");
    if (fdSrc == NULL) {
        printf("Preblème d'ouverture du fichier %s\n", strerror(errno));
        exit(errno);
    }

    ret = fread(&enTeteFichier, sizeof (typeEnTeteFichierBmp), 1, fdSrc);
    if (ret != 1) {
        printf("Preblème lecture en tete fic du fichier %s\n", strerror(errno));
        exit(errno);
    }
    ret = fread(&enTeteImage, sizeof (typeEnTeteImageBmp), 1, fdSrc);
    if (ret != 1) {
        printf("Preblème lecture en tete img du fichier %s\n", strerror(errno));
        exit(errno);
    }
    ret = fread(palette, sizeof (typeCouleur), NBCOULEURS, fdSrc);
    if (ret != 1) {
        printf("Preblème lecture en tete img du fichier %s\n", strerror(errno));
        exit(errno);
    }





    fdDest = fopen(argv[2], "w");
    if (fdSrc == NULL) {
        printf("Preblème d'ouverture du fichier %s\n", strerror(errno));
        exit(errno);
    }

    ret = fwrite(&enTeteFichier, sizeof (typeEnTeteFichierBmp), 1, fdDest);
    if (ret != 1) {
        printf("Preblème lecture en tete fic du fichier %s\n", strerror(errno));
        exit(errno);
    }
    ret = fwrite(&enTeteImage, sizeof (typeEnTeteImageBmp), 1, fdDest);
    if (ret != 1) {
        printf("Preblème lecture en tete img du fichier %s\n", strerror(errno));
        exit(errno);
    }
    for (i =0;i < NBCOULEURS;i++){
        palette[i].alpha=0;
        palette[i].bleu=0;
        palette[i].vert=0;
       
    }
    ret = fwrite(palette, sizeof (typeCouleur), NBCOULEURS, fdDest);
    if (ret != 1) {
        printf("Preblème lecture en tete img du fichier %s\n", strerror(errno));
        exit(errno);
    }

    nbDoneeImg = enTeteFichier.tailleFichier - sizeof (typeEnTeteImageBmp) - sizeof (enTeteFichier) - NBCOULEURS * sizeof (typeCouleur);
    for (i = 0; i < nbDoneeImg; i++) {
        ret = fread(&octet, sizeof (char), 1, fdSrc);
        if (ret != NBCOULEURS) {
            printf("Preblème lecture en tete img du fichier %s\n", strerror(errno));
            exit(errno);
        }
        ret = fwrite(&octet, sizeof (char), 1, fdDest);
        if (ret != NBCOULEURS) {
            printf("Preblème lecture en tete img du fichier %s\n", strerror(errno));
            exit(errno);
        }
    }
    



    fclose(fdSrc);
    fclose(fdSrc);
    return (EXIT_SUCCESS);
}

