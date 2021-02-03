/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <string.h>

int EstVoyelle(char carac) {
    int count = 0;
    char voyelle[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
    for (int i = 0; i < strlen(voyelle); i++) {
        if (voyelle[i] == carac) {
            count = 1;
        }

    }
    return count;
}

int compteEspace(char carac) {
    int count = 0;

    if (carac == ' ') {
        count = 1;
    }


    return count;
}

void inverserChaine(char chaine[50]) {
    for (int i = strlen(chaine); i != -1; i--) {
        printf("%c", chaine[i]);
    }

}


