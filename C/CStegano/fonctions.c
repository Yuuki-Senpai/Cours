/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "fonctions.h"


void afficheEnTeteFichierBMP(typeEnTeteFichierBmp fichier){
    printf("signature :%c%c \n",fichier.signature[0],fichier.signature[1]);
    printf("taille du fichier :%u \n",fichier.tailleFichier);
    printf("reserve :%u \n",fichier.reserve);
    printf("adresse de l'img :%u \n",fichier.adresseImg);
}

void afficheEnTeteImageBMP(typeEnTeteImageBmp img){
    
    printf("taille entete : %u \n",img.tailleEnTete);
    printf("Largeur : %u \n",img.largeur);
    printf("hauteur : %u \n",img.hauteur);
    printf("nombre de plan : %i \n",img.nbPlan);
    printf("bits utilisé par pixel : %i \n",img.bitParPixel);
    printf("type de compression : %u \n",img.typeCompression);
    printf("Taille Image : %u \n",img.tailleImage);
    printf("resolution horizontal : %u \n",img.resolutionHorizontale);
    printf("resolution Vertical : %u \n",img.resolutionVerticale);
    printf("nombre de couleur utilisé : %u \n",img.nbCouleursUtilises);
    printf("nombre de couleur importante : %u \n",img.nbCouleursImportantes);
}