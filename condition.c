
#include <stdio.h>

int main(void){
  
  float note;
  
  printf("Quel note as tu eu ? \n");
  scanf("%f",&note);
  
  if (note < 0 || note > 20) {
    printf("Note invalide !\n");
  } else if (note >= 16){
    printf("c'est très bien\n");
  }
  else if(note >= 14){
    printf("c'est bien\n");
  }
  else if(note >= 12){
    printf("c'est assez bien\n");
  }
  else if (note >= 10){
    printf("c'est Passable\n");
  }
  else{
    printf("c'est insuffisant\n");
  } 
  
  return 0;
}


/*#include <stdio.h>

int main(void){

int age;

printf("quel age à tu ? \n");
scanf("%d", &age);

if (age < 12){
  printf("tu es un enfant\n");
} else if (age < 18){
printf("tu es un ado\n");
} else if (age < 100){
printf("tu es un adulte\n");
} else{
  printf("tu es centenaire !\n");
}

return 0;
}
*/