/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 14 janvier 2021, 08:38
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#pragma pack(push, 1)

/*
 * 
 */




typedef struct{
    char nom[50];
    char prenom[50];
    int age;
    int poids;
}typePersonne;
int main(int argc, char** argv) {
    FILE *fd;
    char car;
    /**/
    fd = fopen("essai2.txt","w");
    typePersonne tab[10];
    int i,retour;
    for (i=0;i <10;i++ ){
        tab[i].age=30+i;
        tab[i].poids=40+i*2*2;
        strcpy(tab[i].nom,"rover");
        strcpy(tab[i].prenom,"rovereeee");
    }
    /*
    for(i=0;i < 10;i++){
        retour=fprintf(fd,"nom :%s  prenom:%s  age:%d   poids:%d\n",tab[i].nom,tab[i].prenom,tab[i].age,tab[i].poids);
        if(retour <0){
            printf("%s \n",strerror(errno));
            exit(errno);
        }
    }*/
    
    //while(! feof(fd)){
      //  printf("%c",fgetc(fd));
        
    //}
    
    fread(tab,sizeof(typePersonne)*10,1,fd);
    printf("%s",tab[1].prenom);
    
  
    //retour=fwrite(tab,sizeof(typePersonne),10,fd);
    fclose(fd);
    return (EXIT_SUCCESS);
}

