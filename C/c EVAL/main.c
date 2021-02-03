/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 30 septembre 2020, 08:18
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>
#include <unistd.h>
/*
 * 
 */
int main(int argc, char** argv) {
    InitialiserLeds();
    int ligne;
    int colonne;
    while (1){
        for (ligne = 0; ligne <= 7; ligne = ligne + 1){
            for (colonne = 0; colonne <= ligne; colonne = colonne + 1){
               Allumer(ligne, colonne, ROUGE);
             Allumer(colonne, ligne, ROUGE);
            }
            usleep(100000);
            if (ligne != 7){
                for (colonne = 0; colonne <= ligne-1; colonne= colonne + 1){
                    if (ligne != colonne){
                        Allumer(ligne, colonne, NOIR);
                        Allumer(colonne, ligne, NOIR);
                    }
                }
            }
        }
        Effacer();
    }
    return (EXIT_SUCCESS);
}

