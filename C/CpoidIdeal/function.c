/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "function.h"
#include <stdio.h>
#include <stdlib.h>

typePersonne creePersonne() {

    typePersonne p;
    printf("Entrez un Nom\n");
    scanf("%s", p.nom);
    printf("Entrez un prenom\n");
    scanf("%s", p.prenom);
    do {
        printf("Entrez votre sexe (h ou f)\n");
        scanf("%s", &p.sexe);
    } while (p.sexe != 'f' && p.sexe != 'h');
    printf("Entrez un poids (en KG)\n");
    scanf("%f", &p.poids);
    printf("Entrez une taille(en metre)\n");
    scanf("%f", &p.taille);
    printf("Entrez votre age\n");
    scanf("%d", &p.age);
    return p;
}

typePersonne tabcorpulanceimc(typePersonne p) {
    printf("Votre indice de masse corporelle est de : %f\n", p.imc);
    if (p.imc < 16.5) {
        printf("Votre corpulance est qualifié de famine");
    } else if (p.imc < 25) {
        printf("Votre corpulance est qualifié de normale");
    } else if (p.imc < 30) {
        printf("Votre corpulance est qualifié de Surpoids");
    } else if (p.imc < 35) {
        printf("Votre corpulance est qualifié de Obésité modérée");
    } else if (p.imc < 40) {
        printf("Votre corpulance est qualifié de Obésité sévère");
    } else {
        printf("Votre corpulance est qualifié de Obésité morbide");
    }
    printf("\n");

}

typePersonne formulePoidsIdeal(typePersonne p) {
    int choix;
    do {
        printf("\n\nQuel formule souhaitez-vous choisir ?\n");
        printf("1 - formule de lorentz\n");
        printf("2 - formule de devine\n");
        printf("3 - formule de devine en tenant compte de l'age\n");
        printf("4 - quitter le programme\n");
        scanf("%d", &choix);
        if (choix == 1) {
            if (p.sexe == 'h') {
                printf("Poids ideal selon la formule de lorentz : %f", p.taille * 100 - ((p.taille * 100 - 150) / 2.5));
            } else {
                printf("Poids ideal selon la formule de lorentz : %f", p.taille * 100 - ((p.taille * 100 - 150) / 4));
            }
        }
        if (choix == 2) {
            if (p.sexe == 'h') {
                printf("Poids ideal selon la formule de lorentz : %f", 50 + 2.3 * ((p.taille / 0.0254) - 60));
            } else {
                printf("Poids ideal selon la formule de lorentz : %f", 45.5 + 2.3 * ((p.taille / 0.0254) - 60));
            }
        }
        if (choix == 3) {
            printf("Poids ideal selon la formule de devine en tenant compte de l'age %f", 50 + ((p.taille * 100 - 150) / 4)+(p.age - 20) / 4);
        }
        

    } while (choix != 4);
    
}