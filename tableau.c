
/*
#include <stdio.h>

//saisie de 5 notes et affichage

int main(void) {
    int notes[5];
    int i;

    // Saisie des notes
    for (i = 0; i < 5; i++) {
        printf("Entrez la note %d : ", i + 1);
        scanf("%d", &notes[i]);
    }

    // Affichage des notes
    printf("Voici les notes :\n");
    for (i = 0; i < 5; i++) {
        printf("Note %d : %d\n", i + 1, notes[i]);
    }

    return 0;
}
*/
/*
Demander à l’utilisateur de saisir 5 notes entières.

Les stocker dans un tableau.

Ensuite :

Afficher toutes les notes

Calculer et afficher la moyenne

Trouver et afficher la note la plus haute

Compter combien sont supérieures ou égales à 10

*/

#include <stdio.h>



//saisie de 5 notes et affichage

void saisirNombre(int notes[], int taille){
    printf("Saisir les 5 notes : \n ");
    for(int i = 0; i < taille; i++){
     printf("Notes %d: ",i + 1);
     scanf("%d",&notes[i]);
    }
}

void afficherNombre(int notes[], int taille){
    printf("voici les 5 notes :\n");
    for (int i = 0; i < taille; i++){
        printf("%d ", notes[i]);
    }
    printf("\n");
}

void moyenneNote (int notes[], int taille){
    int somme = 0;
    for (int i = 0; i < taille; i++){
        somme += notes[i];
    }
    float moyenne = (float)somme/taille;
    printf("La moyenne des notes est : %.2f\n", moyenne);
}


int main(void) {

int notes [5];

   saisirNombre(notes,5);
   afficherNombre(notes, 5);
   moyenneNote(notes,5);

return 0;

}