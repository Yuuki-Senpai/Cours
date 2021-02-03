/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 14 janvier 2021, 08:16
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    FILE *fd;
    /************Question 1 *//*
    
    fd = fopen("/home/USERS/ELEVES/SNIR2020/rleroy/essai.txt", "w");
    if (fd == NULL) {
        printf("Erreur d'ouverture du fichier \n");
        return -1;
    }
    fwrite("bonjour",sizeof(char)*7,1, fd);
    
    */



    /************Question 2 et  3 **********/


    char str;
    int count=0;
    fd = fopen("/home/USERS/ELEVES/SNIR2020/fichierTexte.txt", "r");
    while (!feof(fd)) {
        str = fgetc(fd);
        printf("%c", str);
        if (str >= 97 && str <= 122){
            count++;
        }
        }
    printf("\n%d",count);


    fclose(fd);
    return (EXIT_SUCCESS);
}

