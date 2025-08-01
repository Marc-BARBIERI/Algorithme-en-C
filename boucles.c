#include <stdio.h>

int main(void){

int i = 1;

/*while (i <= 5) {
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

*/

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