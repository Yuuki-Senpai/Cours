/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 4 janvier 2021, 16:49
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

void afficherErreur();

int main(int argc, char** argv) {
    FILE *fd;
    fd = fopen("./essai.txt", "r");
    if (fd == NULL) {
        afficherErreur();
    } else {
        while (!feof(fd)) {

        }
        fclose(fd);
    }

    return (EXIT_SUCCESS);
}

void afficherErreur() {
    if (errno != .0) {
        printf("Erreur : %s", strerror(errno));
    }
}