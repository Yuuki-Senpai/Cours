/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 17 novembre 2020, 13:32
 */

#include <stdio.h>
#include <stdlib.h>


/**************Exercice 1************************/
/*
#define ELEVES 20
int main(int argc, char** argv) {
    int notes[ELEVES];
    for (int i = 0;i < ELEVES -1;i++){
        notes[i]=i;
        printf("L'éleve numéro %d a eu la note %d/20\n",i + 1,notes[i]);
    }
    
    return (EXIT_SUCCESS);
}
 */


/**************Exercice 2*************************/
/*
#define JOUR 3
int main(int argc, char** argv) {
    int tab[JOUR][2],mintemp,maxtemp;
    for (int i = 0;i<JOUR;i++){
        printf("Quel est la température minimale du jour %d?",i+1);
        scanf("%d",&tab[i][0]);
        printf("Quel est la température maximale du jour %d?",i+1);
        scanf("%d",&tab[i][1]);  
    }
    mintemp = tab[0][0];
    maxtemp = tab[0][1];
    for (int i=1;i < JOUR; i++){
        if (mintemp > tab[i][0]){
            mintemp = tab[i][0];
        }
        if (maxtemp < tab[i][1]){
            maxtemp = tab[i][1];
        }
    }
    printf("La température minimale est %d, la maximale est %d",mintemp,maxtemp);
    return (EXIT_SUCCESS);
}*/

/*****************Exercice 4*****************/
/*
#define TAILLE 10
int main(int argc, char** argv) {
    int tab[TAILLE],buffer,i2;
    i2 = 0;
    for(int i=0;i < TAILLE;i++){
        tab[i]=1+i;
        
    }
    printf("\n");
    for(int i=0;i < TAILLE/2;i++){
        buffer = tab[TAILLE-1-i2];
        
        tab[TAILLE-1-i2]=tab[i];
        i2++;
        tab[i]=buffer;
                
                
                
        
 
                
    }
    return (EXIT_SUCCESS);
}
 */


/**************************Exercice 5************************************/

#define TAILLE 11

int main(int argc, char** argv) {

    //Genere des nombre alléatoire
    int tab[TAILLE], buffer, position, i, i2;
    for (int i = 0; i < TAILLE; i++) {
        tab[i] = rand() %4578;
        printf("%d ", tab[i]);

    }
    printf("\n\n");
    for (i = 0; i < TAILLE; i++) {
        buffer = tab[i];
        i2 = i + 1;
        //trouve le plus petit nombre apres I
        for (i2; i2 < TAILLE; i2++) {
            if (buffer > tab[i2]) {
                buffer = tab[i2];
                position = i2;
            }
        }
        //remplace I par par le plus petit nombre après I
        tab[position] = tab[i];
        
        tab[i] = buffer;
    }
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }

    return (EXIT_SUCCESS);
}