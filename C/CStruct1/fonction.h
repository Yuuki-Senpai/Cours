/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fonction.h
 * Author: rleroy
 *
 * Created on 26 novembre 2020, 09:30
 */

#ifndef FONCTION_H
#define FONCTION_H
#define MAXCARAC 50
#ifdef __cplusplus
extern "C" {
#endif
    
    typedef struct personne{
        char nom[MAXCARAC];
        char prenom[MAXCARAC];
        int annee;
        float taille;
        float poids;
    }typePersonne;

    typePersonne creePersonne();
    typePersonne *creePersonnePtr();
    void afficherPersonnePtr(typePersonne *p);
    
#ifdef __cplusplus
}
#endif

#endif /* FONCTION_H */

