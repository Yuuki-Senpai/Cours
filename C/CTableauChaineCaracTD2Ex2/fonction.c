/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <string.h>

#include "fonction.h"


char *transfo(char alphabet[26],char cryptant[26], char phrase[TAILLEMAX]){
    char buffer;
    int position;
    for(int i=0;i < strlen(phrase);i++){
        if (phrase[i] >=65 && phrase[i] <= 90){
            phrase[i] = phrase[i] + 32;
        }
        
    }
    for (int i =0;i < strlen(phrase);i++){
        buffer = phrase[i];
        for (int i = 0;i <strlen(alphabet);i++){
            if (buffer == alphabet[i]){
                position = i;
            }
        }
        phrase[i] = cryptant[position];
        
        
        
    }
    return phrase;
}

char *transfoInverse(char alphabet[26],char cryptant[26], char phrase[TAILLEMAX]){
    char buffer;
    int position;
    for (int i =0;i < strlen(phrase);i++){
        buffer = phrase[i];
        for (int i = 0;i <strlen(cryptant);i++){
            if (buffer == cryptant[i]){
                position = i;
            }
        }
        phrase[i] = alphabet[position];
        
        
        
    }
    return phrase;
}