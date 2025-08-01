/*#include <stdio.h>

//fonction qui affiche "Bonjour"

void direBonjour() {
    printf("Bonjour !\n");
}

int main(void) {
    direBonjour(); 

  return 0;
}
  */

  /*------------------------*/

  /*

  // fonction avec un paramètre

#include <stdio.h>

void saluer(char nom[]) {
    printf("Salut %s !\n", nom);
}

int main(void) {
    saluer("Marc");
    saluer("Lucie");
    return 0;
}

*/

 /*------------------------*/

/*

// fonction qui retourne une valeur 

#include <stdio.h>

int doubler(int x) {
    return x * 2;
}

int main(void) {
    int resultat = doubler(5);
    printf("Le double de 5 est : %d\n", resultat);
    return 0;
}

*/

 /*------------------------*/

 /*
#include <stdio.h>

void afficherMessage(){
printf("Bienvenue dans le programme C !\n");
}
int main(void){

afficherMessage();

return 0;

}
*/


/*

#include <stdio.h>

void estPair(int n){
  printf("le nombre %d est pair\n",n);
};

int main(void){
  int resultat;

  printf("rentrer un nombre\n");
  scanf("%d",&resultat);
  if(resultat % 2 == 0){
    estPair(resultat);
  }else{
    printf("le nombre %d est impair\n",resultat);
  }

  return 0;
}
*/


/*

// fonction qui affiche si le nombre est pair ou impair

#include <stdio.h>


int main(void){
  int number;

  for (number = 1; number <= 20; number++){
  if(number % 2 == 0){
    printf("le nombre %d est pair\n",number);   
  }else{
    printf("le nombre %d est impair\n",number);
  }
  }
  return 0;
}
*/

/*
// fonction qui affiche les multiple de 3

#include <stdio.h>


int main(void){
  int number;

  for (number = 1; number <= 30; number++){
  if(number % 3 == 0){
    printf("le nombre %d est un multiple de 3\n",number);   
  }
  }
  return 0;
}

*/


// fonction qui affiche les multiple de 3 et 5 ou seulement de 3 ou que de 5

#include <stdio.h>


int main(void){
  int number;

  printf("Entrer un nombre\n");
  scanf("%d",&number);

  if (number % 3 == 0 && number % 5 == 0) {
        printf("Le nombre %d est un multiple de 3 et de 5\n", number);
    } else if (number % 3 == 0) {
        printf("Le nombre %d est un multiple de 3\n", number);
    } else if (number % 5 == 0) {
        printf("Le nombre %d est un multiple de 5\n", number);
    } else {
        printf("Le nombre %d n'est divisible ni par 3 ni par 5\n", number);
    }


  return 0;
}

