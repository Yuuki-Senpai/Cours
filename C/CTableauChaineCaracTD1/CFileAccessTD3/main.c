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
    FILE *fd;
    typeEnTeteFichierBmp enTeteFichier;
    typeEnTeteImageBmp enTeteImage;
    size_t ret;
    if(argc !=2){
        printf("usage %s cheminEtNomdufichier",argv[0]);
        exit(argc);
    }
    
   
    fd =fopen(argv[1],"r");
    if (fd == NULL){
        printf("Preblème d'ouverture du fichier %s\n",strerror(errno));
        exit(errno);
    }
    
    ret=fread(&enTeteFichier,sizeof(typeEnTeteFichierBmp),1,fd);
    if(ret!=1)
    {
         printf("Preblème lecture en tete fic du fichier %s\n",strerror(errno));
        exit(errno);
    }
    ret=fread(&enTeteImage,sizeof(typeEnTeteImageBmp),1,fd);
    if(ret!=1)
    {
         printf("Preblème lecture en tete img du fichier %s\n",strerror(errno));
        exit(errno);
    }
    
    afficheEnTeteFichierBMP(enTeteFichier);
    afficheEnTeteImageBMP(enTeteImage);
    fclose(fd);
    return (EXIT_SUCCESS);
}

