#include <stdio.h>
#include <string.h>

#define max 100

typedef struct {
    int jour;
    int mois;
    int annee;
} Date;

typedef struct {
    int ref;
    char titre[100];
    char aut1[40];
    char aut2[40];
    char aut3[40];
    char type[40];
    Date date;
} Production;

void Lecture(Production P[max], int N) {
    for (int i = 0; i < N; i++) {
        printf("Entrer la reference : ");
        scanf("%d", &P[i].ref);
        printf("Entrer le titre : ");
        scanf("%s", P[i].titre);
        printf("Entrer le nom de l'auteur : ");
        scanf("%s", P[i].aut1);
        printf("Entrer le nom du directeur : ");
        scanf("%s", P[i].aut2);
        printf("Entrer le nom de l'encadrant : ");
        scanf("%s", P[i].aut3);
        printf("Entrer le type de la production : ");
        scanf("%s", P[i].type);
        printf("Entrer la date de la production (jour mois annee): ");
        scanf("%d %d %d", &P[i].date.jour, &P[i].date.mois, &P[i].date.annee);
        printf("*********************************\n");
    }
}

void Affichage(Production P[max], int N) {
    for (int i = 0; i < N; i++) {
        printf("La reference : %d\n", P[i].ref);
        printf("Le titre: %s\n", P[i].titre);
        printf("Auteur: %s, Directeur: %s, Encadrant: %s\n", P[i].aut1, P[i].aut2, P[i].aut3);
        printf("Type: %s\n", P[i].type);
        printf("Date: %02d/%02d/%04d\n", P[i].date.jour, P[i].date.mois, P[i].date.annee);
        printf("*******************************\n");
    }
}

void NombreProductions(Production P[max], int N) {
    int nbThese = 0, nbPub = 0, nbCom = 0;
    for (int i = 0; i < N; i++) {
        if (strcmp(P[i].type, "These") == 0) nbThese++;
        else if (strcmp(P[i].type, "Publication") == 0) nbPub++;
        else if (strcmp(P[i].type, "Communication") == 0) nbCom++;
    }

    printf("Nombre de Theses: %d\n", nbThese);
    printf("Nombre de Publications: %d\n", nbPub);
    printf("Nombre de Communications: %d\n", nbCom);
}

int RechType(Production P[max], int N, char type[30], Production resultat[max]) {
    int k = 0;
    for (int i = 0; i < N; i++) {
        if (strcmp(P[i].type, type) == 0) {
            resultat[k++] = P[i];
        }
    }
    return k;
}

void SuppProd(Production P[max], int *N, char auteur[30]) {
    Production supp[max];
    int k = 0;
    for (int i = 0; i < *N; i++) {
        if (strcmp(P[i].aut1, auteur) == 0 ||
            strcmp(P[i].aut2, auteur) == 0 ||
            strcmp(P[i].aut3, auteur) == 0) {
            supp[k++] = P[i];
            for (int j = i; j < *N - 1; j++) {
                P[j] = P[j + 1];
            }
            (*N)--; i--;
        }
    }
    printf("Productions supprimees:\n");
    Affichage(supp, k);
}

void AffichOrdre(Production P[max], int N) {
    Production temp;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            Date d1 = P[i].date, d2 = P[j].date;
            if (d1.annee > d2.annee ||
                (d1.annee == d2.annee && d1.mois > d2.mois) ||
                (d1.annee == d2.annee && d1.mois == d2.mois && d1.jour > d2.jour)) {
                temp = P[i]; P[i] = P[j]; P[j] = temp;
            }
        }
    }
    printf("Liste des productions triae par date:\n");
    Affichage(P, N);
}

int main() {
    Production P[max], resultat[max];
    int N, choix, nbResult;
    char typeRecherche[30], auteurSupprimer[40];

    printf("Entrer le nombre de productions : ");
    scanf("%d", &N);
    Lecture(P, N);

    do {
        printf("\n====== MENU ======\n");
        printf("1. Affichage des productions\n");
        printf("2. Nombre de productions par type\n");
        printf("3. Recherche par type\n");
        printf("4. Supprimer par auteur\n");
        printf("5. Affichage tria par date\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                Affichage(P, N);
                break;
            case 2:
                NombreProductions(P, N);
                break;
            case 3:
                printf("Entrer le type a rechercher : ");
                scanf("%s", typeRecherche);
                nbResult = RechType(P, N, typeRecherche, resultat);
                Affichage(resultat, nbResult);
                break;
            case 4:
                printf("Entrer le nom de l'auteur a supprimer : ");
                scanf("%s", auteurSupprimer);
                SuppProd(P, &N, auteurSupprimer);
                break;
            case 5:
                AffichOrdre(P, N);
                break;
            case 0:
                printf("Fin du programme.\n");
                break;
            default:
                printf("Choix invalide.\n");
        }
    } while (choix != 0);

    return 0;
}
