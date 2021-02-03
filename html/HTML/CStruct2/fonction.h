/* 
 * File:   fonction.h
 * Author: rleroy
 * Description : Logiciel de gestion de centre sportif;
 * Created on 4 janvier 2021, 14:21
 */

#ifndef FONCTION_H
#define FONCTION_H
#define MAXCARAC 50

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <wchar.h>

#ifdef __cplusplus
extern "C" {
#endif

    typedef enum {
        NATATION, BASKETBALL, HANDBALL, SQUASH, TENNIS
    } sports;

    typedef struct {
        int jour;
        int mois;
        int annee;
    } typeDate;

    typedef struct {
        char nom[MAXCARAC];
        char prenom[MAXCARAC];
        typeDate annee;
        int nbrActivite;

        int carteN;
        sports activite[];
    } typeAdherent;



    typeAdherent *creerAdherent();
    typeAdherent *modifierUnAdherent(typeAdherent *Ad);
    

    void afficherMenu(int);
    void afficherDate(typeDate date);
    void afficherActivite(sports list);
    void afficherUnAdherent(typeAdherent *ad);
    void afficherlesAdherent(typeAdherent *listad[], int nbrAd);

    int sauvegarderAdherents(typeAdherent *listad[], int nbrAd);
    int chargerAdherent(typeAdherent *listad[]);
    int supprimezUnAdherent(typeAdherent *listead[], int nombreadherent, int n);
    int supprimerToutlesAd(typeAdherent *listead[], int nbrAd);



#ifdef __cplusplus
}
#endif

#endif /* FONCTION_H */

