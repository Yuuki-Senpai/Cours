/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   function.h
 * Author: rleroy
 *
 * Created on 9 décembre 2020, 11:11
 */

#ifndef FUNCTION_H
#define FUNCTION_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#ifdef __cplusplus
extern "C" {
#endif

char* nomMois(int numeroMois);

char* deleteE(char chaine[]);

char* saisirChaine(char *message);

void echange(float *ptr1, float *ptr2);

int Eq2Degre(float a, float b, float c, float *racine1, float *racine2);


#ifdef __cplusplus
}
#endif

#endif /* FUNCTION_H */

