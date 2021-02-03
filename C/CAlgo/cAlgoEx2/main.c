/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 30 septembre 2020, 10:42
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    printf("donner votre note");
    int note;
    scanf("%d",&note);
    if (note < 10){
        printf("vous avez moins que la moyenne");
    }
    else {
        if (note == 10){
            printf("Vous avez la moyenne");
        }
        else {
            printf("Votre note est supérieur a la moyenne");
        }
    }
    
    return (EXIT_SUCCESS);
}

