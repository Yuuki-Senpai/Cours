/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 12 novembre 2020, 09:30
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "fonction.h"
#define TAILLEMAX 50
/*Exercice 1 
int main(int argc, char** argv) {
    char phrase[TAILLEMAX];
    printf("Rentrez une phrase :");
    gets(phrase);
    printf("Vous avez rentrez la phase : %s",phrase);
    return (EXIT_SUCCESS);
}

 */
/**********Exemple strcmp************//*
int main(int argc, char ** argv){
    char phrase1[TAILLEMAX];
    printf("Rentrez une phrase :");
    gets(phrase1);
    char phrase2[TAILLEMAX];
    printf("Rentrez une phrase :");
    gets(phrase2);
    if (strcmp(phrase1,phrase2)==0){
        printf("Ce sont les meme phrase");
    }
    else{
        printf("Ce ne sont pas les memes phrases");
    }
    return(EXIT_SUCCESS);
}
*/

/*
int main (){
  char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
  int n;
  puts ("Looking for R2 astromech droids...");
  for (n=0 ; n<3 ; n++)
    if (strncmp (str[n],"R2xx",2) == 0)
    {
      printf ("found %s\n",str[n]);
    }
  return 0;
 */
/*
int main(int argc, char ** argv){
    char nom[TAILLEMAX];
    char prenom[TAILLEMAX];
    printf("Rentrez votre prenom :");
    gets(prenom);
    strcpy(nom,prenom);
    printf("%s",nom);
    
    return(EXIT_SUCCESS);
}*/
/*********Exercice 3**************/
/*
int main(int argc, char ** argv){
    char phrase[TAILLEMAX];
    printf("Rentrez une phrase\n");
    gets(phrase);
    int count;
    count = 0;
    int i;
    for(i=0;i < strlen(phrase);i++){
        if (phrase[i] == 'a'){
            count++;
        }
     
    }
    printf("%d",count);
    return(EXIT_SUCCESS);
}*/

/****************Exercice 5 et 4****************/

/*
int main(int argc, char ** argv){
    char phrase[TAILLEMAX];
    printf("Rentrez une phrase\n");
    gets(phrase);
    int countV,countC;
    countV = 0;
    countC = 0;
    int i;
    for(i=0;i < strlen(phrase);i++){
        if (EstVoyelle(phrase[i]) == 1 ){
            countV++;
        }
     
    }
        for(i=0;i < strlen(phrase);i++){
        if (EstVoyelle(phrase[i]) != 1 ){
            countC++;
        }
     
    }
    printf("%d    %d\n",countV,countC);
return(EXIT_SUCCESS);
}*/

/****************Exercice 6****************/

/*
int main(int argc, char ** argv){
    char phrase[TAILLEMAX];
    int i,count;
    count = 0;
    printf("Rentrez une phrase\n");
    gets(phrase);
    for(i=0;i < strlen(phrase);i++){
        count = count +compteEspace(phrase[i]);
    }
    if (count ==0){
        printf("Il ya 1 mots");
    }
    if (count > 0){
        printf("Il ya %d mots",count+1);
    }
    


return(EXIT_SUCCESS);
}*/
/************Exercice 7****************/
/*
int main(int argc, char ** argv){
    char phrase[TAILLEMAX];
    printf("Rentrez une chaine de caractère\n");
    gets(phrase);
    inverserChaine(phrase);
    return(EXIT_SUCCESS);
}
 */

/**********Exercice 8**********/

/*
int main(int argc, char ** argv){
    char phrase[TAILLEMAX];
    int i;
    printf("Rentrez une chaine de caractère\n");
    gets(phrase);
    for(i=0;i < strlen(phrase);i++){
        if (phrase[i] >=65 && phrase[i] <= 90){
            phrase[i] = phrase[i] + 32;
            
        }
        else if (phrase[i] >=97 && phrase[i] <= 122){
            phrase[i] = phrase[i] - 32;
        }
    }
    printf("%s",phrase);
    return(EXIT_SUCCESS);
}*/


/***********Exercice 10***************/
/*
int main(int argc, char ** argv){
    char phrase[TAILLEMAX],bonjour[TAILLEMAX]={'b','o','n','j','o','u','r'};
    int i;
    printf("Rentrez une chaine de caractère\n");
    gets(phrase);
    
    if (strcmp(phrase,bonjour)==0){
        printf("okay");
    }
    else{
        printf("pas okay");
    }
    return(EXIT_SUCCESS);
}*/

/***********Exercice 11*************/

/*
int main(int argc, char ** argv) {
    char phrase[TAILLEMAX];
    char Salut[] = "salut";
    int i,count =0;
    printf("Rentrez une chaine de caractère\n");
    gets(phrase);
    if (strlen(phrase) > 4) {
        for (i = 0; i<5; i++) {
            if (phrase[i] == Salut[i]) {
                count++;
            }

        }
    }
    if(count ==5){
        printf("bon début");
    }
    return (EXIT_SUCCESS);
}*/

/**********Exercice 12**************/

/*
int main(int argc, char ** argv) {
    const char LOGIN[TAILLEMAX]={'l','o','g','i','n'};
    const char PASSWORD[TAILLEMAX]={'p','a','s','s','w','o','r','d'};
    char identifiant[TAILLEMAX],motsDePasse[TAILLEMAX];
    printf("Rentrez un login\n");
    gets(identifiant);
    printf("Rentrez un mots de passe\n");
    gets(motsDePasse);
    if (strcmp(LOGIN,identifiant)==0 && strcmp(PASSWORD,motsDePasse) ==0){
        printf("Accès Autorisé");
    }
    else {
        printf("Accès non autorisé");
    }
    return (EXIT_SUCCESS);
}*/

/************Exercice 14***************/
int main(int argc, char ** argv) {
    char phrase[TAILLEMAX], phraseInverse[TAILLEMAX];
    int x = 0;
    printf("Rentrez une chaine de caractère sans accentuation et avec la meme case\n");
    fgets(phrase,sizeof(phrase),stdin);
    for (int i = strlen(phrase) - 1; i != -1; i--) {
        phraseInverse[x] = phrase[i];
        x++;
    }
    if (strcmp(phraseInverse, phrase) == 0) {
        printf("palindrome");
    }
    return (EXIT_SUCCESS);
}