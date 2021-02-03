#ifndef FONCTION_H
#define FONCTION_H
#define LARGEUR 32
#define HAUTEUR 17

#include <wchar.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>
#include <string.h>



#ifdef __cplusplus
extern "C" {
#endif

    
    typedef struct{
        int x;
        int y;
        wchar_t symbole;
    }typeElement;
  
    void placerSymbole(int x,int y,typeElement symbole,WINDOW *boite);
    void victoire(int joueur);
    void egalite();

#ifdef __cplusplus
}
#endif

#endif /* FONCTION_H */