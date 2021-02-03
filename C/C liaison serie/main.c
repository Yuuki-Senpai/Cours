/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 7 décembre 2020, 17:34
 */

#include <stdio.h>
#include <stdlib.h>
#include "serie.h"
/*
 * 
 */
int main(int argc, char** argv) {
    char *device ="/dev/ttyS0";
    int fdSerie;
    char message[1000];
    fdSerie = ouvrirPort(device);
    configurerSerie(fdSerie,9600,ECHO);
    int nb = recevoirMessage(fdSerie, message, "\r");
    printf("%s",message);
    fermerPort(fdSerie);
    return (EXIT_SUCCESS);
}

