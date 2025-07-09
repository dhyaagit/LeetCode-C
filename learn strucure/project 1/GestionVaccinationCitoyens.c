#include <stdio.h>
#include <string.h>

#define max 100

typedef struct {
    int jour;
    int mois;
    int annee;
} Date;

typedef struct {
    char type[30];
    Date date_prem;
    int nbj;
} Vaccin;

typedef struct {
    char cin[30];   
    char nom[30];
    char prenom[30];
    Vaccin vac;
} Citoyen;

void scan(Citoyen C[max], int N) {
    for (int i = 0; i < N; i++) {
        printf("Entrer Le CIN : ");
        scanf("%s", C[i].cin);

        printf("Entrer Le nom : ");
        scanf("%s", C[i].nom);

        printf("Entrer Le prenom : ");
        scanf("%s", C[i].prenom);

        printf("Entrer le type de vaccin : ");
        scanf("%s", C[i].vac.type);

        printf("Entrer la date de vaccin\n");
        printf("  Entrer le jour : ");
        scanf("%d", &C[i].vac.date_prem.jour);

        printf("  Entrer le mois : ");
        scanf("%d", &C[i].vac.date_prem.mois);

        printf("  Entrer l'annee : ");
        scanf("%d", &C[i].vac.date_prem.annee);

        printf("Entrer Le nombre de jours entre les deux doses : ");
        scanf("%d", &C[i].vac.nbj);

        printf("******************************\n");
    }
}

void affichage(Citoyen C[max], int N) {
    for (int i = 0; i < N; i++) {
        printf("le CIN: %s\n", C[i].cin);
        printf("le nom: %s\n", C[i].nom);
        printf("le prenom: %s\n", C[i].prenom);
        printf("le type de vaccin: %s\n", C[i].vac.type);
        printf("la date de vaccin: %d / %d / %d\n", C[i].vac.date_prem.jour, C[i].vac.date_prem.mois, C[i].vac.date_prem.annee);
        printf("le nombre de jours entre les deux doses: %d\n", C[i].vac.nbj);
        printf("*********************************\n");
    }
}

void totalVaccin(Citoyen C[max], int N) {
    int num_Astra = 0, num_Sino = 0;
    for (int i = 0; i < N; i++) {
        if (strcmp(C[i].vac.type, "Astrazeneca") == 0)
            num_Astra++;
        else if (strcmp(C[i].vac.type, "Sinopharm") == 0)
            num_Sino++;
    }
    printf("le nombre qui a choisi Astrazeneca: %d\n", num_Astra);
    printf("le nombre qui a choisi Sinopharm: %d\n", num_Sino);
}

void CitoyenVac(Citoyen C[max], int N, char type[30], Citoyen tab[max], int *k) {
    *k = 0;
    for (int i = 0; i < N; i++) {
        if (strcmp(C[i].vac.type, type) == 0) {
            tab[*k] = C[i];
            (*k)++;
        }
    }
}

void deuxDose(Citoyen C[max], int N, char type[30]) {
    for (int i = 0; i < N; i++) {
        if (strcmp(C[i].vac.type, type) == 0) {
            Date d;
            int total_jours = C[i].vac.date_prem.jour + C[i].vac.nbj;
            d.jour = total_jours % 30;
            int mois_add = total_jours / 30;
            d.mois = (C[i].vac.date_prem.mois + mois_add) % 12;
            int annee_add = (C[i].vac.date_prem.mois + mois_add) / 12;
            d.annee = C[i].vac.date_prem.annee + annee_add;

            printf("Deuxième dose pour %s %s (%s) : %02d/%02d/%04d\n", C[i].nom, C[i].prenom, C[i].cin, d.jour, d.mois, d.annee);
        }
    }
}

void AfficheDate(Citoyen C[max], int N, char cin[30]) {
    for (int i = 0; i < N; i++) {
        if (strcmp(C[i].cin, cin) == 0) {
            Date d;
            int total_jours = C[i].vac.date_prem.jour + C[i].vac.nbj;
            d.jour = total_jours % 30;
            int mois_add = total_jours / 30;
            d.mois = (C[i].vac.date_prem.mois + mois_add) % 12;
            int annee_add = (C[i].vac.date_prem.mois + mois_add) / 12;
            d.annee = C[i].vac.date_prem.annee + annee_add;

            printf("Nom: %s\nPrenom: %s\nCIN: %s\n", C[i].nom, C[i].prenom, C[i].cin);
            printf("Date de la première dose: %02d/%02d/%04d\n", C[i].vac.date_prem.jour, C[i].vac.date_prem.mois, C[i].vac.date_prem.annee);
            printf("Date de la deuxième dose: %02d/%02d/%04d\n", d.jour, d.mois, d.annee);
        }
    }
}

int main() {
    Citoyen citoyens[max];
    Citoyen filtre[max];
    int N, choix, k;
    char type[30], cin_recherche[30];

    printf("Entrer le nombre de citoyens : ");
    scanf("%d", &N);

    scan(citoyens, N);

    do {
        printf("\n===== MENU =====\n");
        printf("1. Affichage des citoyens\n");
        printf("2. Total de chaque vaccin\n");
        printf("3. Filtrer les citoyens par vaccin\n");
        printf("4. Afficher la deuxieme dose par type\n");
        printf("5. Afficher la date de deuxieme dose par CIN\n");
        printf("0. Quitter\n");
        printf("Votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                affichage(citoyens, N);
                break;
            case 2:
                totalVaccin(citoyens, N);
                break;
            case 3:
                printf("Entrer le type de vaccin a filtrer : ");
                scanf("%s", type);
                CitoyenVac(citoyens, N, type, filtre, &k);
                affichage(filtre, k);
                break;
            case 4:
                printf("Entrer le type de vaccin : ");
                scanf("%s", type);
                deuxDose(citoyens, N, type);
                break;
            case 5:
                printf("Entrer le CIN à rechercher : ");
                scanf("%s", cin_recherche);
                AfficheDate(citoyens, N, cin_recherche);
                break;
        }
    } while (choix != 0);

    return 0;
}
