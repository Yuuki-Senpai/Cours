/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include "function.h"
#include <math.h>





char* deleteE(char chaine[]){

    int i;
    char *sensE;
    char *s;

    for(s=chaine, i=0 ; *s; s++){
        if( *s != 'e')
            i++;
    }
    sensE = (char*)malloc( (i+1) * sizeof(char));
    for( s=chaine, i=0; *s; s++){  
        if(*s != 'e'){
            sensE[i] = *s;
            i++;
        }
    }
    return sensE;
}


char* saisirChaine(char *message){
    char *nom;
    char buffer[255];

    printf("%s", message);
    scanf("%s", buffer);

    nom = (char*) malloc((strlen(buffer)+1)*sizeof(char));
    strcpy(nom, buffer);

    return nom;
}



void echange(float *ptr1, float *ptr2){
    float tmp;

    tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;
}


int Eq2Degre(float a, float b, float c, float *racine1, float *racine2){
    float delta, rdelta;

    delta = b*b - 4*a*c;

    if(delta > 0){
	 rdelta = sqrt(delta);
         *racine1 = ((-b - rdelta) / (2*a));
         *racine2 = ((-b + rdelta) / (2*a));
	 return 2;
    }
    else{
	if(delta == 0){
	    *racine1 = (-b / (2*a));
            *racine2 = *racine1;
	    return 1;
	}
        else
	    
	    return 0;

    }
}
