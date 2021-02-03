/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 9 décembre 2020, 08:14
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "fonction.h"

/*
 * 
 */
int main(int argc, char** argv) {
    char phrase[TAILLEMAX];
    char car[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char crypted[26]={'@','8','[','0','3','{','6','#','1','}',':','7','W','Z','*','?','0','%','$','-','v','^','M','+','/','N'};
    printf("Rentrez un mots :");
    gets(phrase);
    printf("La phrase encodé est :  %s\n",transfo(car,crypted,phrase));
    printf("rentrez le message à décriptez ?");
    gets(phrase);
    printf("%s",transfoInverse(car,crypted,phrase));
    
            
    return (EXIT_SUCCESS);
}

