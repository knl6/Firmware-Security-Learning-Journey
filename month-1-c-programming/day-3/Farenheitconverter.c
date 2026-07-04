#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int FTEMP = 98;



    printf("Farenheit:");
    printf ("%d\n", FTEMP);

    printf("Converted:");
    printf("%d\n", FTEMP = (FTEMP -32) * 5/9 );
    return 0;

}