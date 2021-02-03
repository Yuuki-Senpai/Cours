/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "mesfonction.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define LARGEUR 15
#define HAUTEUR 9


void afficherMenu(char sexe){
    if (sexe == 'f'){
           printf("menu pour les femmes\n");
    }
    if (sexe == 'h'){
           printf("menu pour les hommes\n");
    }
}
float additionReels(float v1, float v2){
    float resultat;
    resultat = v2+v1;
    return resultat;
}

void afficherCarre(float v1){
    printf("Le carré est agal à : %f \n",v1*v1);
}

float calculerCarre(float v1){
    float r;
    r = v1*v1;
    return r;
}
float calculerDiscriminant(float a,float b,float c){
    float d;
    d = b*b-4*a*c;
    return d;
}
void afficherUneLigne(int a){
    for(int x = 0 ;x < a;x++){
        printf("* ");
    }
}
void afficherUnCarre(int a){
    for(int x = 0 ;x < a; x++){
        afficherUneLigne(a);
        printf("\n");
    }
}
    

void afficherRectangle(int largeur, int hauteur){
    for(int x = 0 ;x < hauteur; x++){
        afficherUneLigne(largeur);
        printf("\n");
    }
}

void afficherRacine(double a,double b, double c){
    double delta,x1,x2;
    delta = calculerDiscriminant(a,b,c);
    if (delta > 0){
        x1 = (-b + sqrt(delta))/ 2 * a;
        x2 = (-b - sqrt(delta))/ 2 * a;
                
        printf("x1 = %f,x2 = %f",x1,x2);
    }
}
int compterSymbole(char *a,char b){
    int count;
    int i;
    for(i=0;i < strlen(a);i++){
        if (a[i] == b){
            count++;
        }
    }
    return count;
}


int verifTerminaison(char *chaine,char fin[2]){
    int retour =-1;
    if (chaine[strlen(chaine)-2]==fin[0] && chaine[(strlen(chaine)-1)]==fin[1] ){
        retour = 1;        
    }
    return retour;
}



void initGrille(unsigned char grille [LARGEUR][HAUTEUR]) {
    int x,y;
    for (y=0; y< HAUTEUR; y++){
        for (x = 0;x < LARGEUR; x++){
            grille[x][y]='.';
        }
    }
    
 }
void afficheGrille(unsigned char grille [LARGEUR][HAUTEUR]){
    int x,y;
    unsigned char lettre = 'A';
    printf("  ");
    for(x = 0; x < LARGEUR; x++){
        printf(" %c",lettre++);
    }
    printf("\n");
    for (y = 0; y < HAUTEUR; y++){
        printf("%d ",y+1);
        for (x=0; x < LARGEUR; x++){
            printf(" %c",grille[x][y]);
        }
        printf("\n");
    }
            
}
int nbCroix(unsigned char grille [LARGEUR][HAUTEUR]){
    int count;
    count = 0;
    for (int x=0; x< LARGEUR; x++){
        for (int y = 0;y < HAUTEUR; y++){
            if(grille[x][y]=='X'){
                count++;
            }
        }
    }
    return count;
        
}