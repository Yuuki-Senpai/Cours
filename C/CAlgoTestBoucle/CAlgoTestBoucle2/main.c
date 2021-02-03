/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 1 octobre 2020, 10:53
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char note;
    printf("indiquer votre note");
    scanf("%c",&note);
    switch(note) {
        case 'A':
            printf("Vous avez obtenue A Bravo\n" );
            break;
        case 'B':
            printf("Vous avez obtenue B\n");
             break;
        case 'C':
            printf("Vous avez obtenue C\n" );
            break;
        case 'D':
            printf("Vous avez obtenue D\n" );
            break;
        case 'E':
            printf("Vous avez obtenue F\n" );
            break;
        default :
            printf("note invalide\n" );
        }
    return (EXIT_SUCCESS);
}
