/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 13 octobre 2020, 13:28
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int c1, c2, c3, c4, ok, proposition, vbp, valmalplace;
    char nom[255];

    proposition = 0;
    printf("Quel est votre pseudo ? ");
    scanf("%s", nom);

    while (ok != 1) {
        c1 = -1;
        c2 = -1;
        c3 = -1;
        c4 = -1;
        vbp = 0;
        valmalplace = 0;
        proposition++;
        while (c1 >= 10 || c1 <= -1) {
            printf("Rentrer le 1er chiffre : ");
            scanf("%d", &c1);
        }
        while (c2 > 9 || c2 < 0) {
            printf("Rentrer le 2eme chiffre : ");
            scanf("%d", &c2);
        }
        while (c3 > 9 || c3 < 0) {
            printf("Rentrer le 3eme chiffre : ");
            scanf("%d", &c3);
        }
        while (c4 > 9 || c4 < 0) {
            printf("Rentrer le 4eme chiffre : ");
            scanf("%d", &c4);
        }
        if (c1 == 1) {
            vbp++;
        }
        if (c2 == 2) {
            vbp++;
        }
        if (c3 == 3) {
            vbp++;
        }
        if (c4 == 4) {
            vbp++;
        }

        if (c1 == 2 || c1 == 3 || c1 == 4) {
            valmalplace++;
        }
        if (c2 == 1 || c2 == 3 || c2 == 4) {
            valmalplace++;
        }
        if (c3 == 2 || c3 == 1 || c3 == 4) {
            valmalplace++;
        }
        if (c4 == 2 || c4 == 3 || c4 == 1) {
            valmalplace++;
        }

        if (c1 == 1 && c2 == 2 && c3 == 3 && c4 == 4) {
            ok = 1;
            printf("Bien jouer %s vous avez réussie en %d essaie\n", nom, proposition);
        } else {
            ok = 0;
            printf("Votre proposition est :%d%d%d%d \n", c1, c2, c3, c4);
            printf("Le nombre de valeur bien placé était de %d , le nombre de chiffre bon mais mal placée est %d \n", vbp, valmalplace);
        }
    }
    return (EXIT_SUCCESS);
}