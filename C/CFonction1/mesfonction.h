/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mesFonction.h
 * Author: rleroy
 *Description : Bipliotheque de fonction
 * Created on 8 octobre 2020, 10:47
 */

#ifndef MESFONCTION_H
#define MESFONCTION_H
#define LARGEUR 15
#define HAUTEUR 9
#ifdef __cplusplus
extern "C" {
#endif



    
    void afficherMenu(char sexe);
    float additionReels(float v1, float v2);
    void afficherCarre(float v1);
    float calculerCarre(float v1);
    float calculerDiscriminant(float a,float b,float c);
    void afficherRacine(double a,double b,double c);
    void afficherUneLigne(int a);
    void afficherUnCarre(int a);
    void afficherRectangle(int a, int b);
    int compterSymbole(char *a,char b);
    int verifTerminaison(char *chaine,char fin[2]);
    void initGrille(unsigned char grille [LARGEUR][HAUTEUR]);
    void afficheGrille(unsigned char grille [LARGEUR][HAUTEUR]);
    int nbCroix(unsigned char grille [LARGEUR][HAUTEUR]);
    
#ifdef __cplusplus
}
#endif

#endif /* MESFONCTION_H */

