/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 30 novembre 2020, 14:11
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLEMAX 15
/*
 * 
 */
int main(int argc, char** argv) {
    char verbe[TAILLEMAX],terminaison[2],aller[]="aller";
    int y =0;
    printf("Rentrez un mots :");
    gets(verbe);
    // met tout en minuscule
    for(int i=0;i < strlen(verbe);i++){
        if (verbe[i] >=65 && verbe[i] <= 90){
            verbe[i] = verbe[i] + 32;
            
        }
        
    }
    //met la terminaison dans une autre variable
    for (int i = strlen(verbe)-2;i < strlen(verbe);i++){
        terminaison[y]=verbe[i];
        
        y++;
    }
    //coupe le mot (enleve la terminaison)
    verbe[strlen(verbe)-2]= '\0';
    
    if (terminaison[0]=='e' && terminaison[1]=='r' && strcmp(aller,verbe) !=0){
        if ( verbe[0] == 'a' ||verbe[0] == 'e' || verbe[0] == 'i' || verbe[0] == 'o' || verbe[0] == 'u' || verbe[0] == 'y'){
            printf("j'%se \n",verbe);
        }
        else {
            printf("Je %se \n",verbe);
        }
        printf("Tu %ses \n",verbe);
        printf("Il %se \n",verbe);
        if (verbe[strlen(verbe)-1]){
            printf("Nous %seons \n",verbe);
        }
        else {
            printf("Nous %sons \n",verbe);
        }
        
        printf("Vous %sez \n",verbe);
        printf("Ils %sent \n",verbe);
        
    }
    
    return (EXIT_SUCCESS);
}

