/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 16 septembre 2020, 08:47
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
    for (int ligne =0; ligne <8; ligne =ligne+1){
        for (int colonne = 0; colonne <8; colonne = colonne+1){
            usleep(10000);
            Allumer(ligne,colonne,ROUGE);
        }
    }
    

    
    return (EXIT_SUCCESS);
}

