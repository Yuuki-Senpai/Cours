/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 30 septembre 2020, 11:48
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int  n;
    printf("entrer un nombre décimal");
    scanf("%d", &n);
    if (n >= 128){
        n = n - 128;
        printf("1");
    }
    else{
        printf("0");
    }
    if (n >= 64){
        n = n - 64;
        printf("1");
    }
    else{
        printf("0");
    }
    if (n >= 32){
        n = n - 32;
        printf("1");
    }
    else{
        printf("0");
    }
    if (n >= 16){
        n = n - 16;
        printf("1");
    }
    else{
        printf("0");
    }
    if (n >= 8){
        n = n - 8;
        printf("1");
    }
    else{
        printf("0");
    }
    if (n >= 4){
        n = n - 4;
        printf("1");
    }
    else{
        printf("0");
    }
    if (n >= 2){
        n = n - 2;
        printf("1");
    }
    else{
        printf("0");
    }
    if (n >= 1){
        n = n - 1;
        printf("1");
    }
    else{
        printf("0");
    }
    return (EXIT_SUCCESS);
}

