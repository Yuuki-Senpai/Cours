/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 1 octobre 2020, 10:24
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
   int note;
   printf("indiquer votre note");
   scanf("%d",&note);
    if (note < 4){
       printf("Votre note est E");
    }
    else{ //si la note est supérieur à 4
        if (note <8){
            printf("Votre note est D");
        }
        else{ //si la note est supérieur à 8
            if (note <12){
                printf("Votre note est C");
            }
            else { //si la note est supérieur à 12
                if (note <16){
                    printf("Votre note est B");
                }
                else { //si la note est supérieur à 16
                    printf("Votre note est A");
                }
            }
        }
    }
    return (EXIT_SUCCESS);
}

