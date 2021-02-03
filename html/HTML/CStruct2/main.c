#include "fonction.h"

int main() {
    char touche;
    int touche2;
    int nbrAd = 0;
    typeAdherent * listead[5000];


    
    printf("Souahitez-vous chargez des fiches adhérent (o/n)\n -?");
    scanf("%c", &touche);
    if (touche == 'o') {
        nbrAd = chargerAdherent(listead);
    }
    do {
        system("clear");
        afficherMenu(nbrAd);
        scanf(" %c", &touche);
        switch (touche) {
            case '1':
                listead[nbrAd] = creerAdherent();
                nbrAd++;
                printf("NB = %i\n", nbrAd);
                break;
            case '2':
                if (nbrAd != 0) {
                    printf("Quel fiche souhaitez vous supprimez ? :\n");
                    for (int i = 0; i < nbrAd; i++) {
                        printf("%d : %s,  %s\n", i, listead[i]->nom, listead[i]->prenom);
                    }
                    scanf(" %d", &touche2);
                    nbrAd = supprimezUnAdherent(listead, nbrAd, touche2);
                } else {
                    printf("Mauvaise touche\n");
                }
                break;
            case '3':
                if (nbrAd != 0) {
                    printf("Quelle fiche souhaitez vous modifiez ? :\n");
                    for (int i = 0; i < nbrAd; i++) {
                        printf("%d : %s,  %s\n", i, listead[i]->nom, listead[i]->prenom);
                    }
                    scanf(" %d", &touche2);
                    listead[touche2] = modifierUnAdherent(listead[touche2]);
                } else {
                    printf("Mauvaise touche\n");
                }
                break;
            case '4':
                if (nbrAd != 0) {
                    printf("Quel fiche souhaitez vous affichez ? :\n");
                    for (int i = 0; i < nbrAd; i++) {
                        printf("%d : %s,  %s\n", i, listead[i]->nom, listead[i]->prenom);
                    }
                    scanf(" %d", &touche2);
                    afficherUnAdherent(listead[touche2]);
                } else {
                    printf("Mauvaise touche\n");
                }
                break;
            case '5':
                if (nbrAd != 0) {
                    afficherlesAdherent(listead, nbrAd);
                } else {
                    printf("Mauvaise touche\n");
                }
                break;
            case (6):
                if (nbrAd != 0) {
                    supprimerToutlesAd(listead, nbrAd);

                } else {
                    printf("Mauvaise touche\n\n");
                }
                break;
            case '7':
                if (nbrAd != 0) {
                    printf("%i adherent save\n", sauvegarderAdherents(listead, nbrAd));
                }
                else {
                    printf("Mauvaise touche\n");
                }
                break;
            case '9':
                break;
            default:
                printf("Mauvaise Touche\n");

        }

    } while (touche != '9');
    return (EXIT_SUCCESS);
}

