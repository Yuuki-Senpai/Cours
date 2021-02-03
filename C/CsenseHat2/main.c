/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 23 septembre 2020, 09:39
 */


#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>
#include <unistd.h>

/*
 * 
 */

int main(int argc, char** argv) {

    int colonne;
    InitialiserLeds();
    
    for (colonne =0; colonne <8; colonne = colonne +1){
        Allumer(0,colonne,ORANGE);
        Allumer(colonne,0,ORANGE);
    }
    sleep(1);
    for (int ligne =0; ligne <8; ligne =ligne+1){
        for (colonne = 0; colonne <8; colonne = colonne+1)
            Effacer();
        
    }
    sleep(1);
    for (colonne =0; colonne <8; colonne = colonne +1){
        Allumer(1,colonne,ORANGE);
        Allumer(colonne,1,ORANGE);
           
    }
    sleep(1);
    for (int ligne =0; ligne <8; ligne =ligne+1){
        for (colonne = 0; colonne <8; colonne = colonne+1){
            Effacer();
        }
    }
    sleep(1)
    for (colonne =0; colonne <8; colonne = colonne +1){
        Allumer(7,colonne,ORANGE);
        Allumer(colonne,7,ORANGE);
    }

    
    return (EXIT_SUCCESS);
}