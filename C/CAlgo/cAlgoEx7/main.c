/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 30 septembre 2020, 11:05
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int heure;
    int minute;
    float qHeure;
    printf("rentre le nombre d'heure");
    scanf("%d", &heure);
    printf("rentrez le nombre de minute");
    scanf("%d", &minute);
    qHeure = (heure * 4) + (minute /15);
    if (qHeure <=4){
        printf("le stationnement sera gratuit");
    }
    else {
        if(qHeure <=10){
            printf("le stationnement  coutera: %f \n", 0*4 + (qHeure-4)* 0.5);
        }
        else {
            if(qHeure <=12){
                printf("le stationnement  coutera: %f \n", 0*4 +0.5*6 + (qHeure-10)* 0.4);
            }
            else {
                if(qHeure <=28){
                    printf("le stationnement  coutera: %f \n", 0*4 +0.5*6+0.4*2 + (qHeure-12)* 0.2);
                }
                else{
                    printf("le stationnement  coutera: %f \n", 0*4 +0.5*6+0.4*2+0.2*15 + (qHeure-28)* 0.);
                }
            }
        }
    } 
    
    return (EXIT_SUCCESS);
}

