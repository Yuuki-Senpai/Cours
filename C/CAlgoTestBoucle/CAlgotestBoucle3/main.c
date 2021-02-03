/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 1 octobre 2020, 11:08
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char lettre;
    printf("Donner votre note");
    scanf("%c",&lettre);
    if (lettre == 'A' || lettre =='a'){
        printf("vous avez entre 16 et 20\n");
    }
    if (lettre == 'B' || lettre =='b'){
        printf("vous avez entre 12 et 16\n");
    }
    if (lettre == 'C' || lettre =='c'){
        printf("vous avez entre 8 et 12\n");
    }
    if (lettre == 'C' || lettre =='d'){
        printf("vous avez entre 4 et 8\n");
    }
    if (lettre == 'D' || lettre =='e'){
        printf("vous avez entre 0 et 4\n");
    }
    return (EXIT_SUCCESS);
}

