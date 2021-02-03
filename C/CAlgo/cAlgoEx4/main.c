/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 30 septembre 2020, 10:58
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float a;
    float b;
    float c;
    float delta;
    printf("Entrer A");
    scanf("%f", &a);
    printf("Entrer B");
    scanf("%f", &b);
    printf("Entrer C");
    scanf("%f", &c);
    delta = b * b - 4 * a*c;
    if (delta < 0) {
        printf("Il n'existe pas de solution");
    } else {
        if (delta == 0) {
            printf("il existe une solution");
        } else {
            printf("il existe 2 solution");
        }
    }
    return (EXIT_SUCCESS);
}

