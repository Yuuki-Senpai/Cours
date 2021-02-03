/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 27 janvier 2021, 08:05
 */

#include "fonctions.h"

/*
 * 
 */
int main(int argc, char** argv) {
    FILE *fdSrc;
    int ret;
    
    typeEnTeteFichierBmp enTeteFichier;
    typeEnTeteImageBmp enTeteImage;
    char nom[100];
    char message[100];
    int i;
    i=0;
    
    
    fdSrc = fopen("/home/USERS/ELEVES/SNIR2020/imgBMP/plasmaSteganoTexte.bmp", "r");
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
    afficheEnTeteFichierBMP(enTeteFichier);
    afficheEnTeteImageBMP(enTeteImage);
    
    fseek(fdSrc,sizeof(typeCouleur)*256+sizeof(typeEnTeteFichierBmp)+sizeof(typeEnTeteImageBmp),SEEK_SET);
    while(i <15){
        
        message[i]=fgetc(fdSrc);
        fseek(fdSrc,49152,SEEK_CUR);
        
        i++;
    }
        
       
    
    
    printf("%s",message);
    fclose(fdSrc);
    return (EXIT_SUCCESS);
}

