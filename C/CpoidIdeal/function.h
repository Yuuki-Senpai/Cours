/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   function.h
 * Author: rleroy
 *
 * Created on 1 décembre 2020, 13:49
 */

#ifndef FUNCTION_H
#define FUNCTION_H
#define MAXCARAC 20
#ifdef __cplusplus
extern "C" {
#endif
    typedef struct personne{
        char nom[MAXCARAC];
        char prenom[MAXCARAC];
        char sexe;
        float taille;
        float poids;
        float imc;
        int age;
    }typePersonne;
typePersonne creePersonne();
typePersonne formulePoidsIdeal (typePersonne p);
typePersonne tabcorpulanceimc(typePersonne p);

#ifdef __cplusplus
}
#endif

#endif /* FUNCTION_H */

