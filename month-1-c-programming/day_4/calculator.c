#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double NUM_1;
    double NUM_2;

    printf("Enter your first digit:");
    scanf("%lf",&NUM_1);
    printf("Enter your second digit:");
    scanf("%lf",&NUM_2);


    printf("The sum is %f ", (NUM_1 + NUM_2));

    return 0;
}