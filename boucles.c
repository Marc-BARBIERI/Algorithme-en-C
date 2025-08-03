/*

#include <stdio.h>

int main(void){

int i = 1;

while (i <= 5) {
    printf("Tour %d\n", i);
    i++;
}

for (int i = 1; i <= 5; i++) {
    printf("Tour %d\n", i);
}

do {
    printf("Tour %d\n", i);
    i++;
} while (i <= 5);



for (i = 1; i <= 10; i++){
  printf("Tour %d \n",i);
}
for (i = 2; i <= 20; i += 2){
  printf("Tour %d \n",i);
}
for ( i = 2; i <= 20; i++) {
    if (i % 2 == 0) {
        printf("%d\n", i);
    }
}


return 0;
}
*/
/*
#include <stdio.h>

int main(void){

int choix;

printf("entrer un choix 1,2,3 ou 4 \n");
scanf("%d",&choix);

switch (choix){
    case 1:
    printf("jouer\n");
    break;
    case 2:
    printf("courir\n");
    break;
    case 3:
    printf("apprendre\n");
    break;
    case 4:
    printf("crier\n");
    break;
    default:
    printf("Choix invalide.\n");
}

    return 0;
}
*/


#include <stdio.h>

int main(void){
int resultat;
int opération;
int a,b;

printf("entrer deux nombres\n");
scanf("%d",&a);
scanf("%d",&b);

printf("choisissez votre opération\n");
printf("1.Addition\n");
printf("2.soustraction\n");
printf("3.division\n");
printf("4.multiplication\n");
scanf("%d",&opération);

switch (opération)
{
case 1:
    resultat = (a+b);
    printf("Résultat : %d + %d = %d \n",a,b,resultat);
    break;
    case 2:
    resultat = (a-b);
    printf("Résultat : %d - %d = %d  \n",a,b,resultat);
    break;
    case 3:
     if (b != 0) {
        resultat = a / b;
        printf("Résultat : %d / %d = %d\n", a, b, resultat);
    } else {
        printf("Erreur : division par zéro !\n");
    }
    break;
    case 4:
    resultat = (a*b);
    printf("Résultat : %d * %d = %d \n",a,b,resultat);
    break;
    default:
    printf("Choix invalide.\n");
}


    return 0;
}
