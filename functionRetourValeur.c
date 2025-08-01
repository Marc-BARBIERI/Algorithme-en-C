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

/*

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
*/

/*

  #include <stdio.h>

  //fonction qui retourne le plus grand des deux nombres 

int maximum(int a,int b){
  if(a > b){
    return a;
  }else{
    return b;
  }
}

  int main(void){

int a,b ;

printf("Entrez deux nombres : ");
scanf("%d %d",&a,&b);

printf("le plus grand nombre est : %d \n",maximum(a,b));

    return 0;
  }

  */

  #include <stdio.h>

  //calculer la moyenne de 3 notes

  float moyenne(float a,float b, float c){
    return (a + b + c) / 3;
  }

  int main(void){

float a,b,c;

printf("entrer trois notes");
scanf("%f %f %f",&a,&b,&c);

printf("la moyenne des notes est de : %.2f \n",moyenne(a,b,c));

    return 0;
  }