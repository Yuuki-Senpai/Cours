/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 1 décembre 2020, 13:49
 */

#include <stdio.h>
#include <stdlib.h>
#include "function.h"

/*
 * 
 */
int main(int argc, char** argv) {
    typePersonne personne;
    personne = creePersonne();
    personne.imc = personne.poids / (personne.taille*personne.taille);
    tabcorpulanceimc(personne);
    formulePoidsIdeal(personne);
    return (EXIT_SUCCESS);
}

