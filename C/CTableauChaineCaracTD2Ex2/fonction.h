/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fonction.h
 * Author: rleroy
 *
 * Created on 9 décembre 2020, 08:15
 */

#ifndef FONCTION_H
#define FONCTION_H
#include <stdio.h>
#include <stdlib.h>
#define TAILLEMAX 50


#ifdef __cplusplus
extern "C" {
#endif

    char *transfo(char alphabet[26],char cryptant[26], char phrase[TAILLEMAX]);
    char *transfoInverse(char alphabet[26],char cryptant[26], char phrase[TAILLEMAX]);

#ifdef __cplusplus
}
#endif

#endif /* FONCTION_H */

