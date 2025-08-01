#include <stdio.h>


int main (void) {

  char prenom[20] = "Marc";
  char nom[20] = "Dupont";
  int age = 37;
  float taille = 1.75;
  int a, b, somme;
  
/*
    printf("je m'apelle %s %s, j'ai %d ans et je mesure %.2f m \n", prenom,nom , age, taille);


  printf ("Addition : %d\n", a + b);
  printf ("soustraction: %d\n", a - b);
  printf ("multiplication : %d\n", a * b);
  printf ("division entière : %d\n", a / b);
  printf ("Modulo (reste) : %d\n", a % b);
  */

  printf("Entrez un nombre : ");
  scanf("%d", &a);

  printf("Entrez un nombre : ");
  scanf("%d", &b);

  somme = a + b;

  printf("la somme de %d + %d est : %d\n", a, b, somme);

    return 0;
}