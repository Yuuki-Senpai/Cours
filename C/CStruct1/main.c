/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 26 novembre 2020, 09:29
 */

#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"
/*
 * 
 */
int main(int argc, char** argv) {
    typePersonne robert;
    typePersonne *raymond;
    robert = creePersonne();
    raymond =creePersonnePtr();
    printf("robert existe");
    afficherPersonne(robert);
    afficherPersonnePtr(raymond);
    return (EXIT_SUCCESS);
    
}

