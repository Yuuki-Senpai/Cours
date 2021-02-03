/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"

typePersonne creePersonne() {
    typePersonne p;
    printf("Entrez un Nom\n");
    scanf("%s", p.nom);
    printf("Entrez un prenom\n");
    scanf("%s", p.prenom);
    printf("Entrez l'annee de naissance\n");
    scanf("%d", &p.annee);
    printf("Entrez un poids\n");
    scanf("%f", &p.poids);
    printf("Entrez une taille\n");
    scanf("%f", &p.taille);
    return p;
}

typePersonne *creePersonnePtr() {
    typePersonne *p;
    p=(typePersonne *)malloc(sizeof(typePersonne));
    printf("Entrez un Nom\n");
    scanf("%s", p->nom);
    printf("Entrez un prenom\n");
    scanf("%s", p->prenom);
    printf("Entrez l'annee de naissance\n");
    scanf("%d", &p->annee);
    printf("Entrez un poids\n");
    scanf("%f", &p->poids);
    printf("Entrez une taille\n");
    scanf("%f", &p->taille);
    return p;
}

void afficherPersonne(typePersonne p) {
    printf("Nom : %s\n", p.nom);
    printf("prenom : %s\n", p.prenom);
    printf("Annee de naissance : %d\n", p.annee);
    printf("Taille : % f\n", p.taille);
    printf("Poids : %f\n", p.poids);

}

void afficherPersonnePtr(typePersonne *p) {
    printf("Nom : %s\n", p->nom);
    printf("prenom : %s\n", p->prenom);
    printf("Annee de naissance : %d\n", p->annee);
    printf("Taille : %f\n", p->taille);
    printf("Poids : %f\n", p->poids);

}