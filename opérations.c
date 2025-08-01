#include <stdio.h>

/*

int main(void) {


  int a,b,somme;

  printf("Entrez un nombre : ");
  scanf("%d", &a);

  printf("Entrez un nombre : ");
  scanf("%d", &b);

  somme = a + b;

  printf("la somme de %d + %d est : %d\n", a, b, somme);

  return 0;
}
*/

int main(void){

  char prenom[20];
  int age ;
  float taille ;
  char initiale ;

  printf("quel est ton prénom\n");
  scanf("%s", prenom);

  printf("quel est ton âge ?\n");
  scanf("%d", &age);

  printf("combien tu mesure ?\n");
  scanf("%f", &taille);

  printf("quel est ton initaile ?\n");
  scanf(" %c", &initiale);

  printf("Bonjour %s ! Tu as %d ans, tu mesures %.2f m et ton initiale est : %c \n", prenom, age, taille, initiale);

  return 0;
}
