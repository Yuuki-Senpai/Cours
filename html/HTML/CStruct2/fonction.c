


#include "fonction.h"

typeAdherent *creerAdherent() {
    int i;
    int touche;
    typeAdherent *adherent;
    adherent = (typeAdherent *) malloc(sizeof (typeAdherent));
    printf("Nom : ");
    scanf("%s", adherent->nom);
    printf("prenom : ");
    scanf("%s", adherent->prenom);
    printf("jour de naissance : ");
    scanf("%d", &adherent->annee.jour);
    printf("mois de naissance : ");
    scanf("%d", &adherent->annee.mois);
    printf("année de naissance : ");
    scanf("%d", &adherent->annee.annee);
    printf("Numéro de carte : ");
    scanf("%d", &adherent->carteN);
    printf("Nombre d'activité : ");
    scanf("%d", &adherent->nbrActivite);
    if (adherent->nbrActivite == 5) {
        adherent->activite[0] = NATATION;
        adherent->activite[1] = BASKETBALL;
        adherent->activite[2] = HANDBALL;
        adherent->activite[3] = SQUASH;
        adherent->activite[4] = TENNIS;
    } else {
        printf(" Quel sport voulez-vous faire ?\n");
        printf("  1 -> Natation\n");
        printf("  2 -> Basket\n");
        printf("  3 -> Hand\n");
        printf("  4 -> Squash\n");
        printf("  5 -> Tennis\n");
        for (i = 0; i < adherent->nbrActivite; i++) {
            printf(" Sport n° %d ?\n", i + 1);
            printf(" Votre choix : ");
            scanf("%d", &touche);

            switch (touche) {
                case 1:
                    adherent->activite[i] = NATATION;
                    break;
                case 2:
                    adherent->activite[i] = BASKETBALL;
                    break;
                case 3:
                    adherent->activite[i] = HANDBALL;
                    break;
                case 4:
                    adherent->activite[i] = SQUASH;
                    break;
                case 5:
                    adherent->activite[i] = TENNIS;
                    break;
            }
        }
    }

    return adherent;
}

void afficherMenu(int nbrAd) {
    printf("1 : Ajoutez une fiche adhérent\n");
    if (nbrAd > 0) {
        printf("2 : Supprimer une fiche\n");
        printf("3 : Modifiez une fiche\n");
        printf("4 : Voir le contenu d'une fiche\n");
        printf("5 : voir le contenu de l'ensemble des fiches\n");
        printf("6 : Supprimer toutes les fiches\n");
        printf("7 : Sauvegarder les fiches\n");

    }
    printf("9 : Quitter\n -");

}

void afficherDate(typeDate date) {
    printf("%.2d/%.2d/%d\n", date.jour, date.mois, date.annee);
}

typeAdherent *modifierUnAdherent(typeAdherent *Ad) {
    int touche, i;
    printf("Quel champs souhaitez vous modifiez ?\n");
    printf("0 - Nom\n");
    printf("1 - Prenom\n");
    printf("2 - Date de naissance\n");
    printf("3 - Numéro de carte\n");
    printf("4 - Activité\n");
    scanf(" %d", &touche);
    switch (touche) {
        case 0:
            printf("Entrez le nouveau nom :");
            scanf("%s", Ad->nom);
            break;
        case 1:
            printf("Entrez le nouveau prenom :");
            scanf("%s", Ad->prenom);
            break;
        case 2:
            printf("jour de naissance : ");
            scanf("%d", &Ad->annee.jour);
            printf("mois de naissance : ");
            scanf("%d", &Ad->annee.mois);
            printf("année de naissance : ");
            scanf("%d", &Ad->annee.annee);
            break;
        case 3:
            printf("Entrez le nouveau numéro de carte :");
            scanf("%d", &Ad->carteN);
            break;
        case 4:
            printf("Nombre d'activité : ");
            scanf("%d", &Ad->nbrActivite);
            if (Ad->nbrActivite == 5) {
                Ad->activite[0] = NATATION;
                Ad->activite[1] = BASKETBALL;
                Ad->activite[2] = HANDBALL;
                Ad->activite[3] = SQUASH;
                Ad->activite[4] = TENNIS;
            } else {
                printf(" Quel sport voulez-vous faire ?\n");
                printf("  1 -> Natation\n");
                printf("  2 -> Basket\n");
                printf("  3 -> Hand\n");
                printf("  4 -> Squash\n");
                printf("  5 -> Tennis\n");
                for (i = 0; i < Ad->nbrActivite; i++) {
                    printf(" Sport n° %d ?\n", i + 1);
                    printf(" Votre choix : ");
                    scanf("%d", &touche);

                    switch (touche) {
                        case 1:
                            Ad->activite[i] = NATATION;
                            break;
                        case 2:
                            Ad->activite[i] = BASKETBALL;
                            break;
                        case 3:
                            Ad->activite[i] = HANDBALL;
                            break;
                        case 4:
                            Ad->activite[i] = SQUASH;
                            break;
                        case 5:
                            Ad->activite[i] = TENNIS;
                            break;
                    }
                }
            }




    }

    return Ad;

}

int supprimezUnAdherent(typeAdherent *listead[], int nombreadherent, int n) {
    if (nombreadherent != 1) {
        listead[n] = listead[nombreadherent - 1];
    }
    listead[nombreadherent - 1] = NULL;
    free(listead[nombreadherent - 1]);
    nombreadherent--;
    return nombreadherent;
}

int supprimerToutlesAd(typeAdherent *listead[], int nbrAd) {
    for (int i = 0; i < nbrAd - 1; i++) {
        supprimezUnAdherent(listead, nbrAd, i);
    }
    return 0;
}

void afficherActivite(sports sport) {
    switch (sport) {
        case NATATION:
            printf("Natation ");
            break;
        case BASKETBALL:
            printf("basketball ");
            break;
        case HANDBALL:
            printf("Handball ");
            break;
        case SQUASH:
            printf("Squash ");
            break;
        case TENNIS:
            printf("Tenis ");
            break;
    }
}

void afficherUnAdherent(typeAdherent *ad) {
    int i;
    printf("nom : %s\n", ad->nom);
    printf("prenom : %s\n", ad->prenom);
    printf("date de naissance :");
    afficherDate(ad->annee);
    for (i = 0; i < ad->nbrActivite; i++) {
        afficherActivite(ad->activite[i]);
    }
    printf("\n");
    printf("Numéro de carte : %d\n", ad->carteN);


}

void afficherlesAdherent(typeAdherent *tab[], int i) {
    for (int b; b < i; b++) {
        afficherUnAdherent(tab[i]);
    }
}

int sauvegarderAdherents(typeAdherent *tab[], int nb) {
    FILE *fd;
   
    char nomFichier[255];
    printf("Entrez le nom du fichier  : \n");
    scanf("%s", nomFichier);
    
    fd = fopen(nomFichier, "w");
    if (fd == NULL) {
        printf("Erreur d'ouverture du fichier \n");
        return -1;
    }
    
    if (fwrite(&nb, sizeof (int), 1, fd) != 1) {
        printf("Erreur d'écriture\n");
        return -1;
    }
    int i;
    for (i = 0; i < nb; i++) {
        if (fwrite(tab[i],sizeof(typeAdherent),1, fd) != 1){
            printf("Erreur d'écriture d'adhérent");
            return -1;
        }
    }
    
    printf("%i",fclose(fd));
    return i;
}

int chargerAdherent(typeAdherent *tab[]) {
    FILE *fd;
    char nomFichier[255];
    printf("Entrez le nom du fichier  : \n");
    scanf("%s", nomFichier);

    fd = fopen(nomFichier, "r");
    if (fd == NULL) {
        printf("Erreur d'ouverture du fichier à la racine du programme \n");
        return -1;
    }
    int nb = 0;




    if (fread(&nb, sizeof (int), 1, fd) != 1) {
        printf("erreur de lecture\n");
    }
    
    typeAdherent *unAdherent;
    for (int i = 0; i < nb; i++) {

        unAdherent = malloc(1 * sizeof (typeAdherent));

        if (fread(unAdherent, sizeof (typeAdherent), 1, fd) != 1) {
            printf("Erreur de lecture pour adherent\n");
            return -1;
        }
        tab[i] = unAdherent;
    }
    
    fclose(fd);
    return nb;
}