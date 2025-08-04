/*
#include <stdio.h>


int main(void) {
   
int valeur = 7;
int* p = &valeur;
*p = 42;

printf("Valeur de a : %d\n", valeur); 
printf("Adresse de a : %p\n", &valeur);
printf("Valeur pointée par p : %d\n", *p); 
printf("Nouvelle valeur de valeur : %d\n", valeur);


    return 0;
}

*/

/*

#include <stdio.h>

// Fonction qui double un nombre via un pointeur
void doubler(int* n) {
    *n = *n * 2;
}

int main(void) {
    int valeur;

    printf("Entrez un nombre : ");
    scanf("%d", &valeur);

    doubler(&valeur);  // on passe l'adresse de la variable

    printf("Le double est : %d\n", valeur);

    return 0;
}
*/

/*
#include <stdio.h>

// Fonction qui double chaque élément du tableau
void doublerValeurs(int* tableau, int taille) {
    for (int i = 0; i < taille; i++) {
        *(tableau + i) = *(tableau + i) * 2;
    }
}

int main(void) {
    int valeurs[5];

    // Saisie des valeurs
    printf("Entrez 5 nombres :\n");
    for (int i = 0; i < 5; i++) {
        printf("Nombre %d : ", i + 1);
        scanf("%d", &valeurs[i]);
    }

    // Appel de la fonction pour doubler
    doublerValeurs(valeurs, 5);

    // Affichage du résultat
    printf("Voici les valeurs doublées :\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", valeurs[i]);
    }
    printf("\n");

    return 0;
}

*/
/*

#include <stdio.h>
#include <string.h>

// Fonction qui remplace un prénom à l’indice donné
void modifierPrenom(char tableau[][20], int indice, char nouveau[]) {
    strcpy(tableau[indice], nouveau);
}

int main(void) {
    char prenoms[5][20] = {
        "Alice",
        "Bob",
        "Clara",
        "David",
        "Emma"
    };

    int indice;
    char nouveauPrenom[20];

    // Affichage des prénoms
    printf("Prénoms actuels :\n");
    for (int i = 0; i < 5; i++) {
        printf("%d - %s\n", i, prenoms[i]);
    }

    // Saisie
    printf("\nQuel prénom veux-tu remplacer (indice entre 0 et 4) ? ");
    scanf("%d", &indice);

    if (indice < 0 || indice >= 5) {
        printf("Indice invalide.\n");
        return 1;
    }

    printf("Entrez le nouveau prénom : ");
    scanf("%s", nouveauPrenom);

    // Appel de la fonction
    modifierPrenom(prenoms, indice, nouveauPrenom);

    // Affichage final
    printf("\nPrénoms mis à jour :\n");
    for (int i = 0; i < 5; i++) {
        printf("%d - %s\n", i, prenoms[i]);
    }

    return 0;
}
*/


#include <stdio.h>
#include <string.h>

int trouverIndice(char prenoms[5][20],char nom[],int taille) {
for(int i = 0; i < taille; i++){
    if(strcmp(prenoms[i],nom)==0){
       return i;
    }
    }
    return -1;
}



int main(void){
    char nouveauPrenom[10];
    char nomRecherche[20];
    int i;
    char prenoms[5][20] = {
        "Alice",
        "Bob",
        "Clara",
        "David",
        "Emma"
    };

    char nom [20];
    int index;
    int taille = 5;
    


    printf("entrer un nom \n");
    scanf("%s",nom);
    index = trouverIndice(prenoms,nom,taille);
    if (index == -1) {
    printf("Prénom non trouvé.\n");
    } else {
    printf("Prénom trouvé à l’indice : %d\n", index);
    printf("Entrer un nouveau prénom : ");
    scanf("%s", nouveauPrenom);
    strcpy(prenoms[index], nouveauPrenom);
    }
       for(i = 0; i < taille; i++){
        printf("%d %s \n",i,prenoms[i]);
       }
        return 0;

}


