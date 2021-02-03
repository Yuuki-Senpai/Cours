/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fonctions.h
 * Author: rleroy
 *
 * Created on 19 janvier 2021, 13:03
 */

#ifndef FONCTIONS_H
#define FONCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <math.h>


#pragma pack(push, 1)
#define NBCOULEURS 256
#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
    unsigned char signature[2];
    unsigned int tailleFichier;
    unsigned int reserve;
    unsigned int adresseImg;

} typeEnTeteFichierBmp; 

typedef struct
{
    unsigned int tailleEnTete;
    unsigned int largeur;
    unsigned int hauteur;
    unsigned short int nbPlan;
    unsigned short int bitParPixel;
    unsigned int typeCompression;
    unsigned int tailleImage;
    unsigned int resolutionHorizontale;
    unsigned int resolutionVerticale;
    unsigned int nbCouleursUtilises;
    unsigned int nbCouleursImportantes;
} typeEnTeteImageBmp;

typedef struct
{
    unsigned char bleu;
    unsigned char vert;
    unsigned char rouge;
    unsigned char alpha; // reserve
}typeCouleur;

void afficheEnTeteFichierBMP(typeEnTeteFichierBmp fichier);
void afficheEnTeteImageBMP(typeEnTeteImageBmp img);

#ifdef __cplusplus
}
#endif

#endif /* FONCTIONS_H */

