/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 7 octobre 2020, 08:23
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int val,bin;
    printf("rentrez une valeur positif entière inférieur a 256 à convertire en binaire");
    scanf("%d",&val);
    if(val >= 128){
        printf("1");
        val = val-128;
    }
    else{
        printf("0");
    }
    if(val >= 64){
        printf("1");
        val = val-64;
    }
    else{
        printf("0");
    }
    if(val >= 32){
        printf("1");
        val = val-32;
    }
    else{
        printf("0");
    }
    if(val >= 16){
        printf("1");
        val = val-16;
    }
    else{
        printf("0");
    }
    if(val >= 8){
        printf("1");
        val = val-8;
    }
    else{
        printf("0");
    }
    if(val >= 4){
        printf("1");
        val = val-4;
    }
    else{
        printf("0");
    }
    if(val >= 2){
        printf("1");
        val = val-2;
    }
    else{
        printf("0");
    }
    if(val >= 1){
        printf("1");
        val = val-1;
    }
    else{
        printf("0");
    }
            
    return (EXIT_SUCCESS);
}

