

/* 
 * File:   main.c
 * Author: 
 *
 * Created on 28 novembre 2019, 08:53
 * Modified on 
 * Description : Poker aux dés simplifié
 */

#include <stdio.h>
#include <stdlib.h>

#include "poker.h"

int main(int argc, char** argv)
{
    int i,retour,age1,age2,cagnotte1,cagnotte2,mise1,mise2,relance,coups;
    char replay;
    char nom1[NBMAXCAR],nom2[NBMAXCAR];
    int des1[NBDES],des2[NBDES];
    coups =0;
    replay = 'o';
   // exemple d'affichage avec des couleurs
   

    // demander nom et age des 2 joueurs
    printf("Quel est le nom du J1 ?");
    scanf("%s",nom1);
    printf("Quel est l'age du joueur 1 ?");
    scanf("%d",&age1);
    printf("Quel est le nom du J2 ?");
    scanf("%s",nom2);
    printf("Quel est l'age du joueur 2 ?");
    scanf("%d",&age2);
    
    
  
    
    // tester si les ages permettent de joueur
    // si oui faire la boucle de jeu
    while (replay =='o')
    if (testerAge(age1,18) == 0 && testerAge(age2,18) == 0){
        cagnotte1 = 100;
        cagnotte2 = 100;
        do {
            printf("%s[%s] \n",PURPLE,nom1);
            mise1=demanderMise(cagnotte1);
            printf("%s[%s] \n",YELLOW,nom2);
            mise2=demanderMise(cagnotte2);
            for (i =0;i < NBDES;i++){
                des1[i] = lancerUnDes(NBFACES);
                des2[i] = lancerUnDes(NBFACES);
            }
            printf("Résultat des dès du joueur %s%s%s :",PURPLE,nom1,GREY);
            printf("%s",PURPLE);
            afficherCombinaison(des1,NBDES);
            printf("%s",GREY);
            relance  = demanderNumeroDeDes();
            if (relance != -1){
                des1[relance] = aleatoire(NBDES) -1;
            }
            printf("%s",PURPLE);
            afficherCombinaison(des1,NBDES);
            printf("%s",GREY);
            
            
            printf("Résultat des dès du joueur %s%s%s :",YELLOW,nom2,GREY);
            printf("%s",YELLOW);
            afficherCombinaison(des2,NBDES);
            printf("%s",GREY);
            relance = demanderNumeroDeDes();
            if (relance != -1){
                des2[relance] = aleatoire(NBDES) -1;
            }
            printf("%s",YELLOW);
            afficherCombinaison(des2,NBDES);
            printf("%s",GREY);
            coups++;
            if (calculerScore(des1,NBDES) > calculerScore(des2,NBDES)){
                printf("%s%s%s remporte la mise avec un score de %d",PURPLE,nom1,GREY,calculerScore(des1,NBDES));
                cagnotte1 = cagnotte1 +mise2;
                cagnotte2 = cagnotte2 - mise2;
            }
            else {
                printf("%s%s%s remporte la mise avec un score de %d",YELLOW,nom2,GREY,calculerScore(des2,NBDES));
                cagnotte2 = cagnotte2 + mise1;
                cagnotte1 = cagnotte1 - mise1;
            }
        }while(cagnotte1 >= 0 || cagnotte2 >=0);
        if (cagnotte1 < 0){
            printf("Le %s%s%s a gagné en %d coup ",YELLOW,nom2,GREY,coups);
        }
        else{
            printf("Le %s%s%s a gagné en %d",PURPLE,nom1,GREY,coups);
        }
        printf("%sAurevoir",GREY);
    }// sinon afficher un message et terminer le programme
    else {
        printf("Vous n'avez pas l'age requis");
    }
    
    
     
        
        
        
    
    
               
               
    
    

           
    
            // demander à rejouer (réponse possible uniquement 'o' ou 'n')
            // reposer la question si pas 'o' ou 'n'
           
    
        // fin boucle jeu
    
    








    
    return (EXIT_SUCCESS);
}

