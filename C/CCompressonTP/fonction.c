/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "fonction.h"

void decompressBMP(FILE *fdSrc, FILE *fdDest) {
    typeEnTeteFichierBmp enTeteFichier;
    typeEnTeteImageBmp enTeteImage;
    typeCouleur pallete[256];
    size_t ret;
    unsigned char octet, repetition, valeurOctet;
    unsigned int nbOctet;
    unsigned int taillefichier, tailleIMage, TypeCompression;


    ret = fread(&enTeteFichier, sizeof (typeEnTeteFichierBmp), 1, fdSrc);
    if (ret != 1) {
        printf("Preblème lecture en tete du fichier: %s\n", strerror(errno));
        exit(errno);
    }
    ret = fread(&enTeteImage, sizeof (typeEnTeteImageBmp), 1, fdSrc);
    if (ret != 1) {
        printf("Preblème lecture en tete img : %s\n", strerror(errno));
        exit(errno);
    }
    ret = fread(pallete, sizeof (typeCouleur), 256, fdSrc);
    if (ret != 1) {
        printf("Preblème lecture pallete : %s\n", strerror(errno));
        exit(errno);
    }
    ret = fwrite(&enTeteFichier, sizeof (typeEnTeteFichierBmp), 1, fdDest);
    if (ret != 1) {
        printf("Preblème ecriture en tete du fichier: %s\n", strerror(errno));
        exit(errno);
    }
    ret = fwrite(&enTeteImage, sizeof (typeEnTeteImageBmp), 1, fdDest);
    if (ret != 1) {
        printf("Preblème ecriture en tete img : %s\n", strerror(errno));
        exit(errno);
    }
    ret = fwrite(pallete, sizeof (typeCouleur), 256, fdDest);
    if (ret != 1) {
        printf("Preblème ecriture pallete : %s\n", strerror(errno));
        exit(errno);
    }

    do {
        ret = fread(&repetition, sizeof (char), 1, fdSrc);
        if (ret != 1) {
            printf("problème lecture repetition : %s\n", strerror(errno));
            exit(errno);
        }
        ret = fwrite(&valeurOctet, sizeof (char), 1, fdSrc);
        if (ret != 1) {
            printf("problème lecture valeur : %s\n", strerror(errno));
            exit(errno);
        }
        for (nbOctet = 0; nbOctet < repetition; nbOctet++) {
            fwrite(&valeurOctet, sizeof (char), 1, fdDest);
            if (ret != 1) {
                printf("problème ecriture valoctet : %s\n", strerror(errno));
                exit(errno);
            }
        }

    } while (repetition != 00 || valeurOctet != 01);

    ret =fseek(fdDest, 2, SEEK_SET);
    if (ret == -1) {
        printf("problème fseek : %s\n", strerror(errno));
        exit(errno);
    }
    taillefichier = sizeof (typeEnTeteFichierBmp) + sizeof (typeEnTeteImageBmp) + 256 * sizeof (typeCouleur) + enTeteImage.largeur * enTeteImage.hauteur;
    tailleIMage = enTeteImage.largeur * enTeteImage.hauteur;
    TypeCompression = 0;
    ret = fwrite(&taillefichier, sizeof (unsigned int), 1, fdDest);
    if (ret != 1) {
        printf("problème ecriture taille fd : %s\n", strerror(errno));
        exit(errno);
    }
    ret = fseek(fdDest,8,SEEK_CUR);
    if (ret == -1) {
        printf("problème ecriture taille fd : %s\n", strerror(errno));
        exit(errno);
    }
    ret = fwrite(&tailleIMage, sizeof (unsigned int), 1, fdDest);
    if (ret != 1) {
        printf("problème ecriture taille fd : %s\n", strerror(errno));
        exit(errno);
    }

    ret = fseek(fdDest,12,SEEK_CUR);
    if (ret == -1) {
        printf("problème ecriture taille fd : %s\n", strerror(errno));
        exit(errno);
    }
    ret = fwrite(&TypeCompression, sizeof (unsigned int), 1, fdDest);
    if (ret != 1) {
        printf("problème ecriture taille fd : %s\n", strerror(errno));
        exit(errno);
    }
}

