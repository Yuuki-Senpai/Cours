/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 30 septembre 2020, 10:25
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int age;
    printf("Quel est votre âge?");
    scanf("%d",&age);
    if (age >= 18){
        printf("Vous êtes majeur");
    }
    else{        //age <18 
        printf("Vous êtes mineur");
    }
    return (EXIT_SUCCESS);
}

