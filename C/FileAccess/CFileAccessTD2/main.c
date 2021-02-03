/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 14 janvier 2021, 10:36
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/*
 * 
 */
int main(int argc, char** argv) {
    FILE *fd;
    int retour;
    unsigned int nbcouleur;
    unsigned int largeur;
    unsigned int hauteur;
    fd =fopen("/home/USERS/ELEVES/SNIR2020/imgBMP/image256Couleurs.bmp","r");
    if (fd == NULL){
        printf("%s  \n",strerror(errno));
        exit(errno);
    }
    fseek(fd,18,SEEK_SET);
    fread(&largeur,sizeof(unsigned int),1,fd);
    
    
    fseek(fd,22,SEEK_SET);
    fread(&hauteur,sizeof(unsigned int),1,fd);
    fseek(fd,20,SEEK_CUR);
    fread(&nbcouleur,sizeof(unsigned int),1,fd);
    printf(" %ux%u  nbr couleur %u",largeur,hauteur,nbcouleur);
    fclose(fd);
    return (EXIT_SUCCESS);
}

