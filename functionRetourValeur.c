/*
#include <stdio.h>

int doubler(int nombre) {
    return nombre * 2;
}

int main(void) {
    int x = 5;
    int resultat = doubler(x);
    printf("Le double de %d est : %d\n", x, resultat);
    return 0;
}
*/

#include <stdio.h>


int somme(int a, int b){
  return  a + b ;
}

int main(void){

int a,b,resultat;

printf("Entrez un premier nombre\n");
scanf("%d",&a);

printf("Entrez un deuxieme nombre\n");
scanf("%d",&b);

resultat = somme(a,b);

printf("l'addition des deux nombres est : %d\n",resultat);


  return 0;
}